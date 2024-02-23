#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	long sidebarWidth = 0;
	double scaleBy = 1;
	
	if(argc > 2){
		sidebarWidth = strtol(argv[1], NULL, 10);
		scaleBy = strtod(argv[2], NULL);
	}

	RECT workArea;
	SystemParametersInfo(SPI_GETWORKAREA, 0, &workArea, 1);
	
	MONITORINFO monitorInfo;
	monitorInfo.cbSize = sizeof(MONITORINFO); // What?
	POINT point; point.x = 0; point.y = 0;
	HMONITOR monitor = MonitorFromPoint(point, 1);
	
	GetMonitorInfo(monitor, &monitorInfo);
	
	workArea.right = workArea.left + (monitorInfo.rcMonitor.right-(long)(sidebarWidth*scaleBy));

	SystemParametersInfo(SPI_SETWORKAREA, 0, &workArea, 1);
	return 0;
}
