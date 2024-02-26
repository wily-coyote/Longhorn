Longhorn Sidebar for Rainmeter
=======================
This is a fork of fediaFedia's Longhorn Sidebar skin for Rainmeter.

- It is tweaked for 30px top-aligned taskbars.
  - [Goes great with vaporvnc's Aerospace Pearl!](https://www.deviantart.com/vaporvance/art/Aerospace-Pearl-for-Windows-10-1903-22H2-977628287)
- It fixes Reserve Screen Space not working by replacing it with a non-AutoIt
  version.
  - You can now align the sidebar to the left!
- It replaces fonts from "Segoe UI" to "Old Segoe UI," so that it uses my
  computer's Windows 7 font.
- It fixes the BigClock component having no background when using
  HillelNoShadow.
- The build tag has been changed to be more accurate to 4074. Also, you can
  toggle the sidebar by right clicking it.
    - This uses layouts LonghornX1 and LonghornX1NoSidebar, so make sure to
      overwrite LonghornX1 before using it.
- It fixes some design inconsistencies, like muted fonts and font sizes.
  - It's still not accurate to an existing build. The general style is based
    around the PDC 2003 presentation with creative liberties.
- It fixes parts having extra space on the bottom.

To install, clone this repository to your `Rainmeter/Skins` folder, copy the
contents of `Layouts` to `%APPDATA%/Rainmeter/Layouts`.

If you still have the sidebar's work area changes, run `WorkArea\workarea.exe`
with no arguments.

[Check out the original repository here](https://github.com/fediaFedia/Longhorn).
