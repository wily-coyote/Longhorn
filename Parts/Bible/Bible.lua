PROPERTIES = {
	PathName = "";
}

function Initialize()
	lines = {}
	for line in io.lines(PROPERTIES.PathName) do
		table.insert(lines, line)
	end
end

function Update()
	picked = math.random(#lines)
	book, verse, passage = string.match(lines[picked], "(.*) (%d+:%d+) (.*)")
	SKIN:Bang("!SetOption MeterVerse Text \""..book.." "..verse.."\"")
	SKIN:Bang("!SetOption MeterPassage Text \""..passage.."\"")
	return book.." "..verse.." "..passage
end
