# MacOS Style Dock

Turns the Windows 11 taskbar into a macOS-style dock: frosted glass (or real
Liquid Glass), icons that magnify under the pointer, running dots, app name
labels, File Explorer first and the Recycle Bin last, and hot corners for Task
View, Start and the system tray.

It restyles the real taskbar instead of replacing it, so everything you're
used to keeps working: pinned apps, right-click menus, dropping files onto
apps, and dragging apps to rearrange them.

**Want resources like assets to style your dock? You can download them
here.**

- [MacOS-Icons folder](https://drive.google.com/drive/folders/17wYDZKV8ZcducFInEchPXuOWrufcAbnx?usp=sharing):
  macOS-style icons for File Explorer and the Recycle Bin.
- [macOSicons](https://macosicons.com/): a large free collection of macOS app
  icons, as .icns or PNG files.
- [macOS Icon Gallery](https://www.macosicongallery.com/search/): icon
  designs from the macOS App Store.

To use an icon, see "Custom icons" below.

![The dock](https://i.imgur.com/E1NqVoz.png)

![The dock in action](https://i.imgur.com/eJXsof7.gif)

## Liquid Glass (new)

Not just a frosted blur: the dock's rim actually bends whatever is behind it,
like the edge of a pane of glass, and keeps bending it as things move
underneath. It's off by default, as it has two downsides to know about before
you turn it on:

1. **It's slightly delayed.** Windows doesn't let anything bend what's behind
   the taskbar, so the dock takes a picture of the screen behind it whenever
   Windows shows something new there, and bends that picture. The glass
   trails the screen by a frame or two, which you may notice when something
   moves fast behind the dock, like scrolling or a video. The dock's own
   movement (magnifying, sliding) isn't delayed.
2. **It doesn't work with screen captures.** The picture can't include the
   dock, or it would bend itself, so while Liquid Glass is on, the taskbar
   (dock and tray) disappears from screenshots, screen recordings and screen
   sharing. To capture the dock, press **Win+Ctrl+Shift+G** first: the glass
   freezes and the dock shows up again. Press it again to go back.

**To turn it on,** pick a style in "Edge Style", in the Liquid Glass
settings. If either downside turns out to be a problem for you, set it back
to Off, and the dock goes back to the plain frosted glass, which has neither.
If anything goes wrong, **Win+Ctrl+Shift+K** turns it off at once. See "More
on Liquid Glass" below for the styles and details.

## Will it work on my PC?

To see your Windows version, press Win+R, type `winver` and press Enter. To
see whether your PC is x64 or ARM64, open Settings → System → About and look
at "System type".

| Your PC | Works? |
| --- | --- |
| Windows 11, version 25H2 or 24H2 | Yes |
| Windows 11, version 23H2 or older | Not supported; Microsoft no longer updates them |
| Windows 10 | No |
| Windows Insider builds | Not supported; some have a newer taskbar the dock can't restyle |
| x64 (Intel or AMD) | Yes |
| ARM64 (like Snapdragon) | Should work, but not yet tested |
| Taskbar at the bottom | Yes |
| Taskbar at the top or a side | No |
| "Small taskbar buttons" turned on | No |
| Several monitors | Yes, each taskbar becomes its own dock |
| ExplorerPatcher, StartAllBack or another Windows 10-style taskbar | No, the dock restyles Windows 11's own taskbar |
| Other taskbar mods turned on | Turn them off first (see below) |

- **Right after a Windows update**, the dock can misbehave for a few days.
  Like most taskbar mods, it finds parts of the taskbar through Microsoft's
  symbol files, which are sometimes published late. Windhawk can fill the
  gap for mods installed from its catalog, but not for local copies. If the
  dock acts up just after an update, check back in a few days.
- **Use the dock's own Auto-hide**, not Windows' "Automatically hide the
