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
  taskbar". The mod uses Windows' setting behind the scenes and puts it back
  when it's turned off. If that ever fails (for example, Windhawk was
  uninstalled while Explorer wasn't running), or the taskbar disappears,
  turn it off yourself in Windows' taskbar settings.
- **"Use High Resolution Icons"** needs the October 2024 update
  (KB5044384) or later.
- **Don't combine it with other taskbar mods**, especially "Taskbar height
  and icon size", "Taskbar Dock Animation", "Taskbar Dock Animation Plus",
  "Mac Island & Dock", "Multirow taskbar for Windows 11", "Start button
  always on the left" or "Disable Taskbar Thumbnails".
- **Smart App Control** blocks this mod, as it does all Windhawk mods.

## Getting started

1. Turn off any other taskbar mods.
2. In Windows' taskbar settings, keep the taskbar centered, at the bottom and
   at its normal size. Hide Task View, unless you want it in the dock.
3. Turn on this mod. If something looks off at first, restart your computer.

Turning the mod off puts the taskbar back to normal.

## The dock

- **Frosted glass.** Light, dark, following Windows' light or dark mode, or a
  color of your choice, with adjustable opacity and blur. Or no background at
  all, leaving just the border.
- **Apple's corners.** Not a plain rounded rectangle, but the smooth
  "squircle" corner Apple uses, built from PaintCode's measurements of it.
- **A Mac border.** A thin light line along the top and bottom, a faint dark
  line along the sides, and a soft glow inside that fades out with no hard
  edge. The glow can come from the sides instead, or from all four. You can
  also pick a plain one-color border (Standard), one in a color, width and
  opacity of your choice (Custom), or none.
- **Activity dots.** A small dot under each open app, the same size at any
  dock size, as on a Mac. Dots and dividers turn dark on a light dock and
  light on a dark one. "App Activity Indicators" has other styles: Hybrid
  Dots, Windows' own indicators made round, so the active app's dot takes
  your accent color and an app that needs attention turns orange; Windows 11
  Style, Windows' own; or None. Progress bars, like a download's, show under
  the icon either way.
- **Dividers.** A thin line before the Recycle Bin, and, if you turn it on,
  another after File Explorer (and Start or Task View, if they're in the
  dock). "Custom Index Dividers" adds up to 5 more: a divider at 3 goes after
  the third icon from the left.
- **A brightness limit** (on by default). With "Cap Dock Per-Pixel
  Brightness" on, whatever shows through the dock is held under "Dock
  Brightness Limit" (80% by default), pixel by pixel, as the tray does (see
  below): a white window behind the dock turns gray there, and anything
  darker passes through untouched.
- **Liquid Glass edges** (off by default). The dock's rim bends what's
  behind it, as in the MacOS-Style-LiquidGlass mod. See "Liquid Glass" near
  the top for its downsides and how to turn it on.

## More on Liquid Glass

Liquid Glass is off by default. To turn it on, pick one of three styles in
"Edge Style" (see "Liquid Glass" near the top for its downsides first). The
middle of the dock stays clear, and its rim bends what's just inside it out to
the edge:

- **Lens**: a mirror image of the band inside the rim, squeezed toward the
  edge, meeting the clear middle in a soft curve.
- **Reflection**: a true, unsqueezed mirror image, turning over tightly where
  it meets the middle, without a hard line.
- **Stretch**: no mirror image; the inside of the rim is stretched out to the
  edge, more and more toward it, like looking through a thick lens.

The whole of it is then blurred by "Liquid Glass Blur", under the dock's own
color and border. It has its own blur, used instead of "Dock Background
Blur": its default, 3, keeps the bend crisp, while the frosted glass looks
best a little blurrier, at 10. Raise it for frostier glass. Set "Edge Style"
back to Off for the plain frosted glass. The tray gets the same glass while it
matches the dock (see "The system tray"); it slides in and out by its hot
corner with the glass it last showed, which is right again once it's in
place. Once the dock has been hidden for a couple of seconds, the screen
behind it stops being captured until it's back.

While Liquid Glass is on, the dock's labels are left out of screen captures
along with the taskbar.

- **To take a screenshot of the dock**, press **Win+Ctrl+Shift+G** to freeze
  the glass: it stops following the screen and keeps bending the last picture
  of it, and the dock shows in screenshots. Press it again to go back.
  Anything that moves behind the dock won't move in the glass while it's
  frozen.
- **Emergency stop: Win+Ctrl+Shift+K.** It turns Liquid Glass off at once,
  even if the taskbar has stopped responding, and puts the frosted glass back.
  It stays off, even after restarting Explorer or the PC, until you next save
  this mod's settings. If the taskbar had frozen, restart Explorer from Task
  Manager afterwards. (Ctrl+Shift+K alone isn't used, as apps like VS Code
  and Firefox need it.)

Screens turned to portrait, and screens on another graphics card than the
main one, keep the frosted glass. With several screens of the same size, a
dock may keep the frosted glass until the pointer first passes over it. The
mod's log says why, whenever the frosted glass is used instead.

## The icons

- **Magnification.** Icons grow as the pointer passes over them, pushing
  their neighbors aside, and the dock stretches to fit. As on a Mac, the end
  farther from the pointer stays put.
- **Sharp at any size.** App icons are loaded at their fully magnified size,
  so they don't blur as they grow.
- **Squircle icons** (on by default). Every app's icon becomes a macOS-style
  tile, so the whole dock matches:
  - Icons that are already square are trimmed to the squircle shape.
  - Anything else, like a round logo, is placed on a tile. "Squircle Color"
    picks the tile: Auto gives whichever of light or dark sets the logo off
    better; Prefer Light makes it light unless the logo is very light, and
    Prefer Dark makes it dark unless the logo is very dark; Always Light and
    Always Dark ignore the logo; Custom uses a color of your choice.
  - Each tile gets a soft shadow.

  Tiles appear a few seconds after the mod starts, once the taskbar has
  finished loading its icons. If the taskbar never lets an icon be drawn,
  its tile is made from the app's icon as Start shows it.
- **Still icons** (off by default). Windows bounces an app's icon as its
  windows open, close, minimize or are restored. Turn on "Keep Icons Still"
  to stop that.

## File Explorer, Start and the Recycle Bin

- **File Explorer** is moved to the front of your apps for real, so it stays
  there, and can't be dragged out of that spot. If it's pinned, this changes
  your pinned apps' order, which stays that way after the mod is turned off.
  To leave your order alone, turn off "Keep File Explorer First".
- **Start** is hidden from the dock; the Windows key and the bottom left hot
  corner open it. Turn off "Hide Windows Start Button" to keep it at the
  front of the dock, with Windows' icon or your own.
- **The Recycle Bin** sits at the far end. Its icon shows when there's
  something in it.
  - Click it to open it.
  - Drop files on it to delete them. Windows asks first if they're too big
    to recycle.
  - Right-click it to open or empty it.

They keep Windows' icons and names, unless you give them your own icons
(below). Your own icons also name File Explorer and the Recycle Bin Finder
and Trash.

## Custom icons

Give File Explorer, Start and the Recycle Bin your own icons, like macOS's
Finder, Launchpad and Trash, from image files on your PC. Leave a setting
blank to keep Windows' icon.

1. **Get the icons.** Download them from the links at the top, or use your
   own. PNG and Mac .icns files both work, as does any image Windows can
   open. If they come as a .zip file, right-click it and choose "Extract All"
   first; the mod can't read icons inside a .zip.
2. **Put them somewhere they'll stay**, like a new `C:\Icons` folder, not
   Downloads, which you might clear out. The mod loads them from there every
   time, so if you move or delete them, Windows' icons come back.
3. **Copy an icon's path.** Right-click the icon file and choose "Copy as
   path", or click it and press Ctrl+Shift+C.
4. **Paste it into the mod's settings.** In Windhawk, open this mod's
   Settings tab. Under "Custom Icons", paste it into "File Explorer Icon",
   "Start Menu Icon", "Empty Trash Icon" or "Full Trash Icon", then save.

Repeat steps 3 and 4 for each icon. The full trash icon is optional; without
it, the empty one shows either way. The Start icon shows only with "Hide
Windows Start Button" turned off.

A path looks like `C:\Icons\Finder.icns` or `C:\Icons\trash.png`. The quotes
"Copy as path" adds are fine, and so are variables, like
`%USERPROFILE%\Pictures\finder.png`. If there's no image there, Windows' icon
shows. After editing an image, change any setting to reload it.

Square images with a transparent background work best, like macOS's own
icons, at any size: the mod scales them to fit. From an .icns or .ico file,
which holds several sizes, it uses the largest, up to 1024x1024. Very old
.icns files (from before 2011) can't be read, and Windows' icon shows
instead.

If an icon looks too big or small, change its **margins**, from -50 to 50.
At 0, the default, a macOS icon matches the apps next to it: macOS icons
leave empty space around their artwork for a shadow, which spills past the
icon's spot. Higher numbers add space, making the icon smaller (10 is 10%
smaller); lower ones make it bigger. An image with no empty space around its
artwork looks right at about 20.

## Using the dock

- **App names on hover**, in macOS-style labels. Turn "Show Tooltips over
  Icons" off to get Windows' own tooltips back. Windows' window previews
  open when you click an app with more than one window. Turn on "See Window
  Previews" to also see them on hover, just above the label.
- **Rearranging.** Drag apps anywhere between File Explorer and the Recycle
  Bin. While you drag, icons stop magnifying, and the one you're moving fades
  slightly.
- **Right-click menus** (an app's recent files, pinned items and "Close
  window") open right above the icon you right-clicked.
- **Magnified icons** rise over windows, so the dock never needs extra room
  above it.
- **Windows stay reachable.** With Auto-hide on Hybrid, drop a window so low
  that its title bar is under the dock, and it moves back up, as on a Mac.
  Windows doesn't let the dock move apps run as administrator, so for those
  the dock slides away instead, until the window's dragged back up.
- **Task View** hides the dock, whatever Auto-hide is set to, and its row of
  desktops sits at the bottom of the screen.

## Hot corners

The Start button (unless you keep it in the dock) and the system tray are
hidden from the dock, and the bottom corners of the screen take their place.
Push the pointer into a corner to use it. Corners don't react while a mouse
button is held or a full screen app is running.

- **Bottom left** opens Task View. It can open Start instead, or be turned
  off. The Windows key always opens Start.
- **Bottom right** slides the system tray in. It stays while the pointer is
  over it or a menu it opened, and slides away about half a second after.
  Turned off, the tray is either always shown or always hidden.

## The system tray

The tray's clock and icons sit over whatever's behind them, so "Tray Color"
has a few ways to keep them readable. Use any of them, or all:

- **A background.** By default the tray matches the dock: the same glass
  (Liquid Glass too, when it's on), border and glow, as a smaller pill, with
  its own brightness limit and shadow (below). Turn off "Match Dock Style" to
  give it its own color, opacity, blur and border. "Tray Padding" sets the room
  around the icons and clock; the tray moves up and left to keep its
  background 4 pixels from the screen's edges.
- **A brightness limit** (on by default). With "Cap Tray Per-Pixel
  Brightness" on, whatever shows through the tray's background is held under
  "Brightness Limit" (80% by default), pixel by pixel, across the whole
  background: a white window behind the tray turns gray there, and anything
  darker passes through untouched. Under dark text (Windows' light mode),
  it's a minimum brightness instead.
- **A shadow** (on by default). "Text and Icon Shadow" puts a soft drop
  shadow under the tray's clock and icons. It's dark under light text and
  light under dark text, unless you give it a color, and its opacity, blur
  and offset can be adjusted.

![The system tray's hot corner](https://i.imgur.com/qLN8ETY.gif)

## Auto-hide

Only the dock hides; the hot corners keep working.

- **Hybrid** (the default): the dock slides away while a window is maximized,
  or snapped down to the bottom of the screen (as in Snap layouts). Windows
  always have the whole screen, so the dock floats over their bottom edge and
  nothing moves when it shows or hides.
- **On:** the dock is always hidden.
- **Off:** the dock is always shown, and windows stop at its top.

To bring a hidden dock back, move the pointer to the very bottom of the
screen, right below where the dock sits. It slides away again about half a
second after the pointer leaves it and any menu it opened.

## Settings

Every setting lists its default, since Windhawk has no reset button. Changes
apply right away.

- **Dock Size:** size (icons from 19 to 77 pixels; the default is 51),
  padding and the space between icons (these scale with the dock's size, so
  it keeps its shape), magnification (how much icons grow, up to double, and
  how far from the pointer), animation speed and auto-hide.
- **Dock Color:** the background's color, opacity and blur, an optional
  brightness limit behind it, and the border's style, opacity, width and
  color.
- **Liquid Glass** (off by default): whether the dock's rim bends what's
  behind it and in which style, how deep and strong the bend is, and its own
  blur. Its color is the dock's own.
- **Tray Color:** the tray's background (matching the dock, or its own), its
  padding, the brightness limit behind it, and a shadow under its text and
  icons.
- **Dock Items:** hiding Start, keeping File Explorer first, the Recycle Bin,
  high resolution icons, tooltips, activity indicators, keeping icons still,
  window previews, dividers, and squircle icons and their tile color.
- **Custom Icons:** your own File Explorer, Start and Recycle Bin icons, and
  their margins.
- **Hot Corners:** what each bottom corner does.
- **Additional Settings:** the Mac border's glow (its direction, spread,
  opacity and color) and the tooltips' color.

## Troubleshooting

If something glitches or looks wrong:

1. Make sure no other taskbar mods are turned on in Windhawk.
2. Restart your computer, with this mod still on.
3. If it's the app icons, try turning off "Squircle Icons", or "Use High
   Resolution Icons" if apps' custom icons don't show up.

## Credits

The taskbar height code is based on m417z's "Taskbar height and icon size".
Icon dragging and right-click menu placement follow his "Multirow taskbar for
Windows 11", keeping the taskbar shown follows his "Taskbar auto-hide when
maximized", turning off hover previews follows his "Disable Taskbar
Thumbnails", and placing them follows his "Taskbar on top for Windows 11"
(all GPL-3.0). Hybrid dots follow notdominicc's way of reshaping Windows' own
indicators, and moving Task View's row of desktops follows Asteski's "Task
View Customizer". The squircle corners use PaintCode's measurements of
Apple's curve. Liquid Glass's edges come from the author's own
MacOS-Style-LiquidGlass mod; DreY85's Open Fluid Glass (a fork of ALTaleX's
OpenGlass) showed how a taskbar can be given real refraction.
