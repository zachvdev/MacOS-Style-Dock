// ==WindhawkMod==
// @id              macos-style-dock
// @name            MacOS Style Dock
// @description     Turns the Windows 11 taskbar into a macOS-style dock with magnifying icons
// @version         1.2.3
// @author          Zach Vaughn
// @github          https://github.com/zachvdev
// @include         explorer.exe
// @include         StartMenuExperienceHost.exe
// @include         ShellExperienceHost.exe
// @include         ShellHost.exe
// @include         SearchHost.exe
// @architecture    x86-64
// @compilerOptions -lole32 -loleaut32 -lruntimeobject -lversion -lgdi32 -lshell32 -lshcore -ladvapi32 -ldwmapi -lgdiplus -ld2d1 -ld3d11 -ldxgi -lcomctl32
// @license         GPL-3.0
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# MacOS Style Dock

> **Found a bug or have an idea?** Please open an issue on the dock's own
> repository,
> [zachvdev/MacOS-Style-Dock](https://github.com/zachvdev/MacOS-Style-Dock/issues),
> not on Windhawk's. Only problems with Windhawk itself belong in
> [Windhawk's repository](https://github.com/ramensoftware/windhawk/issues).

Turns the Windows 11 taskbar into a macOS-style dock: frosted glass (or real
Liquid Glass), icons that magnify under the pointer, running dots, app name
labels, File Explorer first and the Recycle Bin last, your own icons for any
app, hot corners for Task View, Start and the system tray, Start opening in
the middle of the screen, and the tray's menus sliding in from its side.

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
- **Mods that change Start or the tray's menus**, such as "Shell Flyout
  Positions", "Windows 11 Start Menu Styler" or "Notification Center Follows
  Taskbar", need "Control Start Menu" or "Control System Tray Menus" turned
  off.
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
- **A Mac border.** A soft glow inside the top and bottom with a thin light
  line along them, and a faint dark line along the sides. Each side's glow or
  shadow has its own color, opacity and size, as on squircle icons, and
  follows the corners round; a side that glows gets the light line, any other
  the dark one. You can also pick a plain one-color border (Standard), one in
  a color, width and opacity of your choice (Custom), or none.
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
behind it stops being captured until it's back. The pointer never shows in
the glass: around it, the glass keeps what was there before the pointer came.

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
- **Shrinks to fit.** As on a Mac, with more apps open than fit, the dock's
  icons get smaller, rather than the dock running into the tray or being
  pushed off center. It leaves room for the tray (unless it's hidden for
  good) and for icons at their most magnified, and grows back as apps close.
- **Sharp at any size.** App icons are loaded at their fully magnified size,
  so they don't blur as they grow. Some apps give Windows only a small icon,
  which would come back tiny at that size: those get the icon Start shows for
  them instead, or, if that's small too, their own icon enlarged.
- **Squircle icons** (on by default). Every app's icon becomes a macOS-style
  tile, so the whole dock matches:
  - Icons that are already square are trimmed to the squircle shape.
  - Anything else, like a round logo, is placed on a tile. "Squircle Color"
    picks the tile: Auto gives whichever of light or dark sets the logo off
    better; Prefer Light makes it light unless the logo is very light, and
    Prefer Dark makes it dark unless the logo is very dark; Always Light and
    Always Dark ignore the logo; Custom uses a color of your choice. The light
    and dark tiles' colors can be changed too.
  - Each tile gets a thin highlight along its top and left edges, soft
    shading along its bottom and right, as if lit from the top left, and a
    drop shadow.
  - Your own File Explorer, Start and app icons become tiles too, unless set
    to ignore them (see "Custom icons"). Start, kept in the dock, becomes a
    tile of four blues.

  Everything about the tiles is under "Squircle Icons" in the settings: their
  colors; how vivid the icons' colors are; a sheen over all of them, fading
  out from the top; a glow or shadow along each side, each with its own
  color, opacity and size (a light color glows, a dark one shades), following
  the corners round; the drop shadow's spread, distance, opacity and
  direction; and the corners, Apple's smooth squircle curve or plain rounded
  ones, and how round they are.

  Tiles appear a few seconds after the mod starts, once the taskbar has
  finished loading its icons. After that, a newly opened app's icon appears
  once its tile is ready, rather than Windows' icon first (or Windows' after
  5 seconds, if its tile isn't ready by then). If the taskbar never lets an
  icon be drawn, its tile is made from the app's icon as Start shows it.
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
  front of the dock. With Squircle Icons on, it's a tile of four blues, from
  light at the top left to deep at the bottom right, like Windows' logo
  without the gaps; turn on "Start Menu Icon Ignores Squircle" for Windows'
  own logo instead. Or give it your own icon (below).
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
Finder, Launchpad and Trash, from image files on your PC, and any other app
too (see "Any app" below). Leave a setting blank to keep Windows' icon.

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

With Squircle Icons on, your File Explorer and Start icons go in squircle
tiles like the apps' icons, with the same sheen, edges and shadow: an image
that's already a rounded square, like a macOS icon, is trimmed to the tile's
shape, and anything else is placed on a tile. To show one as it is instead,
turn on its "Ignores Squircle" setting. The Recycle Bin's icons always show as
they are.

If an icon that isn't in a tile looks too big or small, change its
**margins**, from -50 to 50. At 0, the default, a macOS icon matches the apps
next to it: macOS icons leave empty space around their artwork for a shadow,
which spills past the icon's spot. Higher numbers add space, making the icon
smaller (10 is 10% smaller); lower ones make it bigger. An image with no
empty space around its artwork looks right at about 20. In a tile, margins
make no difference: a tile's made from what's shown of the image, whatever
space is around it.

### Any app

Any app in the dock can have your own icon, under "App Icons" in "Custom
Icons":

1. **Copy the app's ID.** Hover over its icon in the dock and press Ctrl+I.
   Its label turns into a card with the app's name, ID and .exe, and the ID
   is copied. Press Ctrl+I again to copy its .exe instead.
2. **Add it to "App Icons".** In the mod's settings, add an item to "App
   Icons", paste into "App", and put the image's path in "Icon (path)", as
   above. Then save.

"App" can also be the app's name, as its label shows it (like "Google
Chrome"), or its .exe (like `chrome.exe`, or its full path). The ID always
works, and it's the only one that tells apart the dock icons of one program,
like Chrome's profiles and the web apps it installs. A name can change with
Windows' language, and an app opened through a launcher, like Discord, may
not be known by its own .exe until it's running: for those, use the ID. If
more than one item could match an app, one with its ID comes first, then one
with its name, then one with its .exe. The card shows which one it's using.

With Squircle Icons on, your image goes in a squircle tile, as above. To show
it as it is instead, turn on its "Ignore Squircle".

Only the dock changes: Start, Alt+Tab and the app's own windows keep its
usual icon.

## Using the dock

- **App names on hover**, in macOS-style labels. Their look is yours in
  "Tooltips": their color, font (any you've installed, or a font file) and
  size, how round their corners are, the tail, and a glow or shadow along
  each side that follows the corners and tail round, as on squircle icons.
  Turn "Show Tooltips over Icons" off to get Windows' own tooltips back.
  Windows' window previews open when you click an app with more than one
  window. Turn on "See Window Previews" to also see them on hover, just above
  the label.
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
- **App info.** Hover over an icon and press Ctrl+I to see the app's ID and
  .exe, for "App Icons" (see "Any app" above). Ctrl+I is only taken while the
  pointer's on an icon in the dock; anywhere else, it does what it always
  does. To catch it, the mod watches the keyboard, acting on Ctrl+I (and Esc,
  to close the card) and keeping nothing.

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

## Start and the tray's menus

Start opens in the middle of the screen, fading in as it grows from three
quarters of its size to its full size. Quick Settings (Wi-Fi, sound and so
on) and the Notification Center (with the calendar) open at the screen's
right edge just above the taskbar, and slide in from the right. Typing into
Start opens
search in Start's place, where it opens and closes without sliding. Start,
Quick Settings and the Notification Center have no drop shadow.

- **Start's and search's own animations are off**, Windows' slides among
  them, as if "Animation effects" were turned off for them alone.
- **Sliding in from the right** needs Windows 11 version 26H2 (which can move
  the taskbar to the screen's sides) for Quick Settings. Otherwise it still
  opens just above the taskbar at the right edge, but slides up as before.
- **These menus are run by other Windows processes**, so the mod also loads
  into StartMenuExperienceHost.exe, SearchHost.exe, ShellHost.exe and
  ShellExperienceHost.exe, only to change them. Turn off "Control Start Menu"
  or "Control System Tray Menus" to leave Start and search, or the tray's
  menus, to Windows (or another mod), and the mod stays out of their
  processes.

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

Quick Settings and the clock open with a click anywhere on them, gaps between
their icons included, and on the tray's background just above and below
them. Windows itself only opens them from a click right on an icon.

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
  brightness limit behind it, the border's style, opacity, width and color,
  and, for the Mac border (the tray's too), a glow or shadow along each side.
- **Liquid Glass** (off by default): whether the dock's rim bends what's
  behind it and in which style, how deep and strong the bend is, and its own
  blur. Its color is the dock's own.
- **Squircle Icons:** whether app icons become tiles, the tiles' colors, the
  icons' vibrance, a sheen, a glow or shadow along each side, the drop
  shadow, and the corners' style and radius.
- **Tray Color:** the tray's background (matching the dock, or its own), its
  padding, the brightness limit behind it, and a shadow under its text and
  icons.
- **Dock Items:** hiding Start, keeping File Explorer first, the Recycle Bin,
  high resolution icons, tooltips, activity indicators, keeping icons still,
  window previews and dividers.
- **Custom Icons:** your own File Explorer, Start and Recycle Bin icons, and
  any other app's, with their margins, and whether they go in squircle tiles.
- **Hot Corners:** what each bottom corner does.
- **Start and Tray Menus:** whether the mod controls Start, and the tray's
  menus, or leaves them to Windows.
- **Tooltips:** the app name labels' and Ctrl+I cards' color, font, font
  size, corner radius and tail, and a glow or shadow along each side.

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
View Customizer". Start and the tray's menus are moved as m417z's "Shell
Flyout Positions" and "Vertical Taskbar for Windows 11" and Asteski's
"Notification Center Follows Taskbar" move them. The squircle corners use
PaintCode's measurements of Apple's curve. Liquid Glass's edges come from the
author's own MacOS-Style-LiquidGlass mod; DreY85's Open Fluid Glass (a fork of
ALTaleX's OpenGlass) showed how a taskbar can be given real refraction.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- dockSize:
  - size: 70
    $name: Size (0-100)
    $description: Scales the dock and icons. (Default = 70)
  - paddingHorizontal: 13
    $name: Horizontal Padding (0-20)
    $description: Space on the left and right of icons. (Default = 13)
  - paddingVertical: 12
    $name: Vertical Padding (0-20)
    $description: Space on the top and bottom of icons. (Default = 12)
  - iconSpacing: 12
    $name: Icon Spacing (0-20)
    $description: Space between icons. (Default = 12)
  - magnification: 60
    $name: Magnification (0-100)
    $description: How much icons grow when hovered. (Default = 60)
  - magnificationRange: 55
    $name: Magnification Range (0-100)
    $description: Horizontally affected distance from cursor. (Default = 55)
  - animationSpeed: 100
    $name: Animation Speed (ms)
    $description: How fast/slow animations occur. (Default = 100)
  - autoHide: hybrid
    $name: Auto-Hide
    $description: Hybrid hides the dock when a window is maximized. (Default = Hybrid)
    $options:
    - hybrid: Hybrid
    - always: "On"
    - never: "Off"
  $name: Dock Size
- dockColor:
  - background: light
    $name: Dock Background Color
    $description: (Default = Light)
    $options:
    - light: Light
    - dark: Dark
    - system: System
    - custom: Custom
    - none: No Background
  - opacity: 15
    $name: Dock Background Opacity (0-100)
    $description: (Default = 15)
  - blur: 10
    $name: Dock Background Blur (0-100)
    $description: While Liquid Glass is on, "Liquid Glass Blur" is used instead. (Default = 10)
  - customColor: "#333333"
    $name: Dock Custom Background Color (#HEX)
    $description: 'Used when "Background Color" is "Custom." (Default = #333333)'
  - capBrightness: true
    $name: Cap Dock Per-Pixel Brightness
    $description: Caps the brightness that shines through the dock on a per-pixel basis. This effect may cause lag. (Default = Enabled)
  - brightnessLimit: 80
    $name: Dock Brightness Limit (0-100)
    $description: Used when "Cap Dock Per-Pixel Brightness" is on. (Default = 80)
  - border: mac
    $name: Dock Border Style
    $description: (Default = MacOS Style)
    $options:
    - mac: MacOS Style
    - standard: Standard
    - custom: Custom
    - none: No Border
  - borderOpacity: 100
    $name: Dock Custom Border Opacity (0-100)
    $description: Used when "Border Style" is "Custom" or "Standard." (Default = 100)
  - borderWidth: 1
    $name: Dock Custom Border Width (0-8)
    $description: Used when "Border Style" is "Custom" or "Standard." (Default = 1)
  - borderColor: "#FFFFFF"
    $name: Dock Custom Border Color (#HEX)
    $description: 'Used when "Border Style" is "Custom." (Default = #FFFFFF)'
  - topGlowColor: ""
    $name: Dock Top Glow/Shadow Color (#HEX)
    $description: MacOS Style border only (the tray's too). A glow (with a light color) or shadow (with a dark one) along the top edge, following its corners round. A side with a glow gets a thin light line inside its edge; any other, a faint dark line outside it. Leave blank for a lighter shade of the background color. (Default = Blank)
  - topGlowOpacity: 9
    $name: Dock Top Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 9)
  - topGlowSize: 12
    $name: Dock Top Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the dock's height. (Default = 12)
  - bottomGlowColor: ""
    $name: Dock Bottom Glow/Shadow Color (#HEX)
    $description: MacOS Style border only (the tray's too). A glow (with a light color) or shadow (with a dark one) along the bottom edge, following its corners round. A side with a glow gets a thin light line inside its edge; any other, a faint dark line outside it. Leave blank for a lighter shade of the background color. (Default = Blank)
  - bottomGlowOpacity: 9
    $name: Dock Bottom Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 9)
  - bottomGlowSize: 12
    $name: Dock Bottom Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the dock's height. (Default = 12)
  - leftGlowColor: ""
    $name: Dock Left Glow/Shadow Color (#HEX)
    $description: MacOS Style border only (the tray's too). A glow (with a light color) or shadow (with a dark one) along the left edge, following its corners round. A side with a glow gets a thin light line inside its edge; any other, a faint dark line outside it. Leave blank for a lighter shade of the background color. (Default = Blank)
  - leftGlowOpacity: 0
    $name: Dock Left Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 0)
  - leftGlowSize: 12
    $name: Dock Left Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the dock's height. (Default = 12)
  - rightGlowColor: ""
    $name: Dock Right Glow/Shadow Color (#HEX)
    $description: MacOS Style border only (the tray's too). A glow (with a light color) or shadow (with a dark one) along the right edge, following its corners round. A side with a glow gets a thin light line inside its edge; any other, a faint dark line outside it. Leave blank for a lighter shade of the background color. (Default = Blank)
  - rightGlowOpacity: 0
    $name: Dock Right Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 0)
  - rightGlowSize: 12
    $name: Dock Right Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the dock's height. (Default = 12)
  $name: Dock Color
- liquidGlass:
  - edgeStyle: "off"
    $name: Edge Style
    $description: "Pick a style to turn on Liquid Glass, which makes the dock's rim bend what's behind it like real glass. Two downsides: 1) It's slightly delayed, trailing what's behind the dock by a frame or two, as it bends a picture of the screen. 2) It doesn't work with screen captures: while it's on, the taskbar disappears from screenshots, recordings and screen sharing (Win+Ctrl+Shift+G freezes the glass so the dock shows up; Win+Ctrl+Shift+K turns it off in an emergency). If either is a problem for you, leave this Off for the plain frosted glass. Lens mirrors the rim, squeezed toward the edge; Reflection is a true mirror; Stretch stretches the rim outward. (Default = Off)"
    $options:
    - "off": "Off"
    - lens: Lens
    - reflection: Reflection
    - stretch: Stretch
  - edgeDepth: 17
    $name: Edge Depth (2-100)
    $description: How deep the bent rim is, in pixels at 100% scaling, and never past a quarter of the dock's height. (Default = 17)
  - edgeStrength: 120
    $name: Edge Strength (0-150)
    $description: How far the rim reaches in for what it shows; lower bends less. Above 100, Stretch starts to mirror at the very edge. (Default = 120)
  - blur: 3
    $name: Liquid Glass Blur (0-100)
    $description: Used instead of "Dock Background Blur" while Liquid Glass is on, and for the tray when it matches the dock. Low keeps the bend crisp. (Default = 3)
  $name: Liquid Glass
- squircleIcons:
  - enabled: true
    $name: Squircle Icons
    $description: Turns app icons into macOS-style tiles. (Default = Enabled)
  - color: auto
    $name: Squircle Color
    $description: (Default = Auto)
    $options:
    - alwaysLight: Always Light
    - preferLight: Prefer Light
    - auto: Auto
    - preferDark: Prefer Dark
    - alwaysDark: Always Dark
    - custom: Custom
  - lightColor: "#EEEEEE"
    $name: Light Squircle Color (#HEX)
    $description: 'The tile behind an icon that gets a light one. (Default = #EEEEEE)'
  - darkColor: "#333333"
    $name: Dark Squircle Color (#HEX)
    $description: 'The tile behind an icon that gets a dark one. (Default = #333333)'
  - customColor: "#FFFFFF"
    $name: Custom Squircle Color (#HEX)
    $description: 'Used when "Squircle Color" is set to "Custom." (Default = #FFFFFF)'
  - vibrance: 125
    $name: Vibrance (0-200)
    $description: How vivid squircle icons' colors are. At 100 they're the icons' own; above, they get more vivid, the dull ones most; below, they fade toward gray, all the way at 0. (Default = 125)
  - sheen: true
    $name: Sheen
    $description: A soft white sheen over every squircle icon, fading out from the top. (Default = Enabled)
  - sheenOpacity: 15
    $name: Sheen Opacity (0-100)
    $description: (Default = 15)
  - sheenSize: 50
    $name: Sheen Size (0-100)
    $description: How far down it reaches as it fades out, as a percentage of the icon's size. (Default = 50)
  - topGlowColor: "#FFFFFF"
    $name: Top Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tile''s top edge, following its corners round. (Default = #FFFFFF)'
  - topGlowOpacity: 25
    $name: Top Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 25)
  - topGlowSize: 5
    $name: Top Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the icon's size. (Default = 5)
  - bottomGlowColor: "#000000"
    $name: Bottom Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tile''s bottom edge, following its corners round. (Default = #000000)'
  - bottomGlowOpacity: 10
    $name: Bottom Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 10)
  - bottomGlowSize: 10
    $name: Bottom Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the icon's size. (Default = 10)
  - leftGlowColor: "#CCCCCC"
    $name: Left Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tile''s left edge, following its corners round. (Default = #CCCCCC)'
  - leftGlowOpacity: 15
    $name: Left Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 15)
  - leftGlowSize: 5
    $name: Left Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the icon's size. (Default = 5)
  - rightGlowColor: "#CCCCCC"
    $name: Right Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tile''s right edge, following its corners round. (Default = #CCCCCC)'
  - rightGlowOpacity: 5
    $name: Right Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 5)
  - rightGlowSize: 10
    $name: Right Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the icon's size. (Default = 10)
  - shadowSpread: 9
    $name: Drop Shadow Spread (0-10)
    $description: How soft the shadow under each tile is; 0 for a sharp one. (Default = 9)
  - shadowDistance: 9
    $name: Drop Shadow Distance (0-10)
    $description: How far the shadow falls from the tile, in its direction. (Default = 9)
  - shadowOpacity: 26
    $name: Drop Shadow Opacity (0-100)
    $description: 0 for no shadow. (Default = 26)
  - shadowDirection: down
    $name: Drop Shadow Direction
    $description: Which way the shadow falls. (Default = Down)
    $options:
    - down: Down
    - downLeft: Down Left
    - downRight: Down Right
    - left: Left
    - right: Right
    - up: Up
    - centered: Centered
  - cornerStyle: squircle
    $name: Corner Style
    $description: Squircle is the smooth curve Apple uses, Rounded a plain circular corner. (Default = Squircle)
    $options:
    - squircle: Squircle
    - rounded: Rounded
  - cornerRadius: 24
    $name: Corner Radius (0-50)
    $description: As a percentage of the icon's size. With Rounded corners, 50 makes a circle; Squircle corners stop getting rounder at about 33. (Default = 24)
  $name: Squircle Icons
- trayColor:
  - matchDock: true
    $name: Match Dock Style
    $description: Uses the dock's background, border, glow and Liquid Glass. The brightness limit and shadow stay the tray's own. (Default = Enabled)
  - capBrightness: true
    $name: Cap Tray Per-Pixel Brightness
    $description: Caps the brightness that shines through the tray on a per-pixel basis. This effect may cause lag. (Default = Enabled)
  - brightnessLimit: 80
    $name: Brightness Limit (0-100)
    $description: Caps the brightness to make tray items more visible. (Default = 80)
  - padding: 9
    $name: Tray Padding (0-20)
    $description: Space around the tray's icons. (Default = 9)
  - shadow: true
    $name: Text and Icon Shadow
    $description: A drop shadow under the tray's clock and icons. (Default = Enabled)
  - shadowColor: ""
    $name: Shadow Color (#HEX)
    $description: Leave blank for dark under light text, light under dark text. (Default = Blank)
  - shadowOpacity: 60
    $name: Shadow Opacity (0-100)
    $description: (Default = 60)
  - shadowBlur: 6
    $name: Shadow Blur (0-20)
    $description: How soft the shadow is, in pixels. (Default = 6)
  - shadowOffsetX: 0
    $name: Shadow Horizontal Offset (-10-10)
    $description: Positive moves it right. (Default = 0)
  - shadowOffsetY: 1
    $name: Shadow Vertical Offset (-10-10)
    $description: Positive moves it down. (Default = 1)
  - background: light
    $name: Tray Background Color
    $description: (Default = Light)
    $options:
    - light: Light
    - dark: Dark
    - system: System
    - custom: Custom
    - none: No Background
  - opacity: 15
    $name: Tray Background Opacity (0-100)
    $description: (Default = 15)
  - blur: 10
    $name: Tray Background Blur (0-100)
    $description: (Default = 10)
  - customColor: "#333333"
    $name: Tray Custom Background Color (#HEX)
    $description: 'Used when "Background Color" is "Custom." (Default = #333333)'
  - border: mac
    $name: Tray Border Style
    $description: (Default = MacOS Style)
    $options:
    - mac: MacOS Style
    - standard: Standard
    - custom: Custom
    - none: No Border
  - borderOpacity: 100
    $name: Tray Custom Border Opacity (0-100)
    $description: Used when "Border Style" is "Custom" or "Standard." (Default = 100)
  - borderWidth: 1
    $name: Tray Custom Border Width (0-8)
    $description: Used when "Border Style" is "Custom" or "Standard." (Default = 1)
  - borderColor: "#FFFFFF"
    $name: Tray Custom Border Color (#HEX)
    $description: 'Used when "Border Style" is "Custom." (Default = #FFFFFF)'
  $name: Tray Color
- dockItems:
  - hideStart: true
    $name: Hide Windows Start Button
    $description: Removes Start from the dock. (Default = Enabled)
  - explorerFirst: true
    $name: Keep File Explorer First
    $description: Keeps File Explorer on the far left. (Default = Enabled)
  - recycleBin: true
    $name: Keep Recycle Bin in Dock
    $description: Adds the Recycle Bin on the far right. (Default = Enabled)
  - highResIcons: true
    $name: Use High Resolution Icons
    $description: Sharper icons. May conflict with other icon mods. (Default = Enabled)
  - tooltips: true
    $name: Show Tooltips over Icons
    $description: Shows app names over icons. (Default = Enabled)
  - indicators: mac
    $name: App Activity Indicators
    $description: (Default = MacOS Style)
    $options:
    - mac: MacOS Style
    - hybrid: Hybrid Dots
    - windows: Windows 11 Style
    - none: None
  - keepIconsStill: false
    $name: Keep Icons Still
    $description: Turns off the bounce Windows gives an app's icon as it opens, closes, minimizes or is restored. (Default = Disabled)
  - previews: false
    $name: See Window Previews
    $description: Shows window previews on hover. (Default = Disabled)
  - dividerAfterExplorer: false
    $name: Divider After the File Explorer
    $description: (Default = Disabled)
  - dividerBeforeTrash: true
    $name: Divider Before the Recycle Bin
    $description: (Default = Enabled)
  - dividers: [0]
    $name: Custom Index Dividers
    $description: Up to 5, each after the icon at that position from the left. (Default = 0)
  $name: Dock Items
- customIcons:
  - finderPath: ""
    $name: File Explorer Icon (path)
    $description: Path to a PNG or ICNS image. Leave blank for the usual icon. (Default = Blank)
  - finderMargins: 0
    $name: File Explorer Icon Margins (-50-50)
    $description: Higher makes the icon smaller. Not used in a squircle tile. (Default = 0)
  - finderIgnoreSquircle: false
    $name: File Explorer Icon Ignores Squircle
    $description: Shows your image as it is, even with Squircle Icons on. (Default = Disabled)
  - startPath: ""
    $name: Start Menu Icon (path)
    $description: Path to a PNG or ICNS image. Used when Start isn't hidden. Leave blank for the usual icon. (Default = Blank)
  - startMargins: 0
    $name: Start Menu Icon Margins (-50-50)
    $description: Higher makes the icon smaller. Not used in a squircle tile. (Default = 0)
  - startIgnoreSquircle: false
    $name: Start Menu Icon Ignores Squircle
    $description: Shows your image as it is, or without one, Windows' own logo rather than the mod's blue tile, even with Squircle Icons on. (Default = Disabled)
  - trashEmptyPath: ""
    $name: Empty Trash Icon (path)
    $description: Path to a PNG or ICNS image. Leave blank for the usual icon. (Default = Blank)
  - trashEmptyMargins: 0
    $name: Empty Trash Icon Margins (-50-50)
    $description: Higher makes the icon smaller. (Default = 0)
  - trashFullPath: ""
    $name: Full Trash Icon (path)
    $description: Path to a PNG or ICNS image. Blank uses the empty icon. (Default = Blank)
  - trashFullMargins: 0
    $name: Full Trash Icon Margins (-50-50)
    $description: Higher makes the icon smaller. (Default = 0)
  - apps:
    - - app: ""
        $name: App
        $description: Hover over the app's icon in the dock and press Ctrl+I to copy its ID, then paste it here. Its name or its .exe (like chrome.exe) works too.
      - icon: ""
        $name: Icon (path)
        $description: Path to a PNG or ICNS image.
      - margins: 0
        $name: Icon Margins (-50-50)
        $description: Higher makes the icon smaller. Not used in a squircle tile. (Default = 0)
      - ignoreSquircle: false
        $name: Ignore Squircle
        $description: Shows the image as it is, even with Squircle Icons on. (Default = Disabled)
    $name: App Icons
    $description: Your own icons for any apps in the dock. (Default = None)
  $name: Custom Icons
- hotCorners:
  - bottomLeft: taskView
    $name: Bottom Left
    $description: (Default = Task View)
    $options:
    - taskView: Task View
    - start: Start Menu
    - off: "Off"
  - bottomRight: tray
    $name: Bottom Right
    $description: (Default = System Tray)
    $options:
    - tray: System Tray
    - hidden: Off and Hidden
    - visible: Off and Visible
  $name: Hot Corners
- menus:
  - controlStart: true
    $name: Control Start Menu
    $description: Start opens in the middle of the screen, fading in as it grows, without a drop shadow, and search, typed into Start, opens and closes in its place without sliding. Turn off to leave them to Windows or another mod; this mod then stays out of their processes. (Default = Enabled)
  - controlTray: true
    $name: Control System Tray Menus
    $description: Quick Settings and the Notification Center open at the screen's right edge just above the taskbar, sliding in from the right, without drop shadows. Turn off to leave them to Windows or another mod; this mod then stays out of their processes. (Default = Enabled)
  $name: Start and Tray Menus
- tooltips:
  - color: ""
    $name: Color (#HEX)
    $description: Leave blank for light gray. (Default = Blank)
  - font: ""
    $name: Font
    $description: The name of a font installed on your computer, as Windows' Fonts settings list it, optionally followed by a weight, such as "Arial" or "Segoe UI Semibold". Or the path to a font file (.ttf, .otf or .ttc). Used by the Ctrl+I info cards too. Leave blank for Segoe UI. (Default = Blank)
  - fontSize: 14
    $name: Font Size (8-32)
    $description: The tooltips grow and shrink to fit. (Default = 14)
  - cornerRadius: 50
    $name: Corner Radius (0-50)
    $description: As a percentage of the tooltip's height; 50 gives fully round ends, as on a Mac. (Default = 50)
  - tail: true
    $name: Show Tail
    $description: The little point under the tooltip, at the icon. (Default = Enabled)
  - topGlowColor: "#FFFFFF"
    $name: Top Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tooltip''s top edge, following its corners round. (Default = #FFFFFF)'
  - topGlowOpacity: 25
    $name: Top Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 25)
  - topGlowSize: 10
    $name: Top Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the tooltip's height. (Default = 10)
  - bottomGlowColor: "#000000"
    $name: Bottom Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tooltip''s bottom edge, following its corners and its tail round. (Default = #000000)'
  - bottomGlowOpacity: 10
    $name: Bottom Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 10)
  - bottomGlowSize: 20
    $name: Bottom Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the tooltip's height. (Default = 20)
  - leftGlowColor: "#CCCCCC"
    $name: Left Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tooltip''s left edge, following its corners and its tail round. (Default = #CCCCCC)'
  - leftGlowOpacity: 15
    $name: Left Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 15)
  - leftGlowSize: 10
    $name: Left Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the tooltip's height. (Default = 10)
  - rightGlowColor: "#CCCCCC"
    $name: Right Glow/Shadow Color (#HEX)
    $description: 'A glow (with a light color) or shadow (with a dark one) along the tooltip''s right edge, following its corners and its tail round. (Default = #CCCCCC)'
  - rightGlowOpacity: 5
    $name: Right Glow/Shadow Opacity (0-100)
    $description: 0 for none. (Default = 5)
  - rightGlowSize: 20
    $name: Right Glow/Shadow Size (0-50)
    $description: How far in it reaches, as a percentage of the tooltip's height. (Default = 20)
  $name: Tooltips
*/
// ==/WindhawkModSettings==

#include <windhawk_utils.h>

#include <shellapi.h>
#include <shellscalingapi.h>
#include <sddl.h>
#include <commctrl.h>
#include <d2d1_1.h>
#include <dwrite_3.h>
#include <d3d11.h>
#include <dwmapi.h>
#include <dxgi1_2.h>
#include <gdiplus.h>
#include <shcore.h>
#include <shlobj.h>
#include <shobjidl.h>
#include <appmodel.h>
#include <roapi.h>
#include <wincodec.h>
#include <winstring.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <charconv>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <cwctype>
#include <functional>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <numeric>
#include <optional>
#include <regex>
#include <span>
#include <string>
#include <string_view>
#include <unordered_map>
#include <utility>
#include <vector>

#undef GetCurrentTime

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.Numerics.h>
#include <winrt/Windows.Graphics.h>
#include <winrt/Windows.Graphics.DirectX.h>
#include <winrt/Windows.Graphics.Effects.h>
#include <winrt/Windows.ApplicationModel.DataTransfer.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.h>
#include <winrt/Windows.UI.Composition.h>
#include <winrt/Windows.UI.Core.h>
#include <winrt/Windows.UI.Input.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Automation.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Data.h>
#include <winrt/Windows.UI.Xaml.Hosting.h>
#include <winrt/Windows.UI.Xaml.Input.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.Media.Animation.h>
#include <winrt/Windows.UI.Xaml.Media.Imaging.h>
#include <winrt/Windows.UI.Xaml.Shapes.h>

namespace wadt = winrt::Windows::ApplicationModel::DataTransfer;
namespace wf = winrt::Windows::Foundation;
namespace wss = winrt::Windows::Storage::Streams;
namespace wg = winrt::Windows::Graphics;
namespace wge = winrt::Windows::Graphics::Effects;
namespace wuc = winrt::Windows::UI::Composition;
namespace wux = winrt::Windows::UI::Xaml;
namespace wuxc = winrt::Windows::UI::Xaml::Controls;
namespace wuxh = winrt::Windows::UI::Xaml::Hosting;
namespace wuxi = winrt::Windows::UI::Xaml::Input;
namespace wuxm = winrt::Windows::UI::Xaml::Media;
namespace wuxma = winrt::Windows::UI::Xaml::Media::Animation;
namespace wuxs = winrt::Windows::UI::Xaml::Shapes;
namespace wgdx = winrt::Windows::Graphics::DirectX;

using winrt::Windows::UI::Color;
using wux::Visibility;

// =============================================================================
// SETTINGS
// =============================================================================

enum class Background { Light, Dark, System, Custom, None };
enum class Border { Mac, Standard, Custom, None };
enum class LeftCorner { TaskView, Start, Off };
enum class Show { HotCorner, Hidden, Visible };  // the system tray
enum class AutoHide { Hybrid, On, Off };
// Behind squircle icons' shapes.
enum class TileColor { AlwaysLight, PreferLight, Auto, PreferDark, AlwaysDark, Custom };
enum class ShadowDirection { Down, DownLeft, DownRight, Left, Right, Up, Centered };
enum class CornerStyle { Squircle, Rounded };

// The dock's glow or shadow along one side (see MAC BORDER): as a tile's, but
// sized by the dock's height, and blank gives a lighter shade of its color.
struct DockEdge {
    bool lighter = true;  // a lighter shade of the background color, not `color`
    uint8_t color[3] = {};
    int opacity = 0;  // percent
    int size = 0;     // how far in it reaches, as a percent of the dock's height
};

// A tile's glow or shadow along one side, fading in from its edge.
struct TileEdge {
    uint8_t color[3] = {};
    int opacity = 0;  // percent
    int size = 0;     // how far in it reaches, as a percent of the tile
    bool operator==(TileEdge const&) const = default;
};
enum class Indicators { Dots, HybridDots, Windows, None };  // running apps
enum class GlassStyle { Lens, Reflection, Stretch, Off };  // how Liquid Glass bends the rim

constexpr float kMacIconScale = 1024.0f / 824;  // macOS icons fill 824 of 1024px, for shadows
constexpr size_t kMaxCustomDividers = 5;
constexpr int kMaxAppIcons = 100;  // in "App Icons"

// The user's own Finder, Start or Trash icon. None while `path` is empty.
struct CustomIcon {
    std::wstring path, fullPath;  // image files; fullPath for a full Recycle Bin
    float size = 1;               // the artwork, of the icon size
    float scale = 1;              // the image, of the icon size, margin included
    float fullSize = 1, fullScale = 1;  // the same for fullPath's image
    bool ignoreSquircle = false;        // shown as it is, not in a squircle tile
};

// The user's own icon for an app, in "App Icons".
struct AppIcon {
    std::wstring app;  // as typed: its ID, its name, or its .exe
    bool exe = false;  // `app` is an .exe: a file name, or a full path
    CustomIcon icon;
};

// A background like the dock's: the dock's own, or the tray's.
struct Look {
    Background background;
    uint8_t color[3];        // for Custom
    int opacity;             // 0-100
    int blur;                // 0-100
    Border border;
    int borderOpacity;       // 0-100, for Standard and Custom
    int borderWidth;         // pixels, for Standard and Custom
    uint8_t borderColor[3];  // for Custom
};

struct Settings {
    int size;
    int paddingH, paddingV, spacing;
    float scale;  // magnification, 1.0-2.0
    int range;
    int animationMs;
    AutoHide autoHide;
    Look dockLook, trayLook;
    bool trayMatchDock;
    int dockBrightnessLimit;  // percent; 100 for none (Cap Per-Pixel Brightness off)
    int trayBrightnessLimit;  // the same, for the tray
    GlassStyle glassStyle;    // Liquid Glass
    float glassDepth;         // the bent rim, in pixels at 100% scaling
    float glassStrength;      // 1 for full strength
    int glassBlur;            // 0-100, like Look::blur, in its place
    int trayPadding;          // pixels, past kTrayPlateInsetX and Y
    bool trayShadow;          // under the tray's text and icons
    bool trayShadowAuto;      // its color follows the text's
    uint8_t trayShadowColor[3];
    float trayShadowOpacity;  // 0-1
    float trayShadowBlur;     // pixels
    float trayShadowX, trayShadowY;
    bool hideStart;
    bool explorerFirst;
    bool recycleBin;
    bool highResIcons;
    bool tooltips;
    Indicators indicators;
    bool previews;
    bool dividerAfterLeft;    // after Start, Task View and File Explorer
    bool dividerBeforeTrash;
    std::vector<int> customDividers;  // after these icons, counted from 1; sorted
    bool squircleIcons;
    bool keepIconsStill;  // no bounce as apps open, close, minimize or are restored
    TileColor tileColor;
    uint8_t tileCustomColor[3];
    uint8_t tileLightColor[3], tileDarkColor[3];  // the tiles Light and Dark give
    int tileVibrance;  // 0-200, 100 for the icons' own colors
    bool tileSheen;
    int tileSheenOpacity;  // percent
    int tileSheenSize;     // how far down it reaches, as a percent of the tile
    std::array<TileEdge, 4> tileEdges;  // top, bottom, left, right
    int tileShadowSpread;               // 0-10, how soft
    int tileShadowDistance;             // 0-10, how far it falls
    int tileShadowOpacity;              // percent
    ShadowDirection tileShadowDirection;
    CornerStyle tileCorner;
    int tileCornerRadius;  // percent of the tile
    CustomIcon customFinder, customStart, customTrash;
    std::vector<AppIcon> appIcons;
    LeftCorner leftCorner;
    Show tray;
    std::array<DockEdge, 4> dockEdges;  // top, bottom, left, right
    uint8_t tooltipColor[3];
    std::wstring tooltipFont;  // as typed; empty for Segoe UI
    int tooltipFontSize;       // 8-32, in view pixels
    int tooltipRadius;         // 0-50, percent of the tooltip's height
    bool tooltipTail;
    // Top, bottom, left, right, as tiles' but sized by the tooltip's height.
    std::array<TileEdge, 4> tooltipEdges;
} g_settings;
int g_settingsVersion = 0;  // counts loads, for what's measured once per look

// The tray's background: its own, or the dock's.
Look const& TrayLook() {
    return g_settings.trayMatchDock ? g_settings.dockLook : g_settings.trayLook;
}

// Reads 6 hex digits ("#333333"), ignoring '#' and spaces.
bool ParseHexColor(std::wstring_view text, uint8_t rgb[3]) {
    std::wstring digits;
    for (wchar_t c : text) {
        if (c == L'#' || iswspace(c)) continue;
        if (!iswxdigit(c)) return false;
        digits.push_back(c);
    }
    if (digits.size() != 6) return false;
    for (int i = 0; i < 3; i++) {
        rgb[i] = (uint8_t)std::wcstoul(digits.substr(i * 2, 2).c_str(), nullptr, 16);
    }
    return true;
}

// The index of a string setting's value among `options`, or `fallback`.
int ChoiceSetting(PCWSTR name, std::initializer_list<PCWSTR> options, int fallback) {
    auto value = WindhawkUtils::StringSetting::make(name);
    int i = 0;
    for (PCWSTR option : options) {
        if (!wcscmp(value, option)) return i;
        i++;
    }
    return fallback;
}

// A string setting without the spaces and quotes around it, as when copied.
std::wstring TrimmedSetting(PCWSTR name) {
    auto value = WindhawkUtils::StringSetting::make(name);
    std::wstring_view text = value ? (PCWSTR)value : L"";
    auto trimmed = [](wchar_t c) { return iswspace(c) || c == L'"'; };
    while (!text.empty() && trimmed(text.front())) text.remove_prefix(1);
    while (!text.empty() && trimmed(text.back())) text.remove_suffix(1);
    return std::wstring(text);
}

bool EndsWithNoCase(std::wstring_view text, std::wstring_view end) {
    return text.size() >= end.size() &&
           !_wcsnicmp(text.data() + text.size() - end.size(), end.data(), end.size());
}

// %VARIABLES% in `text` filled in.
std::wstring ExpandVariables(std::wstring const& text) {
    std::wstring path(ExpandEnvironmentStringsW(text.c_str(), nullptr, 0), L'\0');
    DWORD length = ExpandEnvironmentStringsW(text.c_str(), path.data(), (DWORD)path.size());
    return length && length <= path.size() ? path.substr(0, length - 1) : text;
}

// A file's path from a string setting, as typed or copied: surrounding quotes
// and %VARIABLES% are fine. Empty if there's no file there.
std::wstring PathSetting(PCWSTR name) {
    std::wstring text = TrimmedSetting(name);
    if (text.empty()) return {};
    std::wstring path = ExpandVariables(text);
    DWORD attributes = GetFileAttributesW(path.c_str());
    if (attributes == INVALID_FILE_ATTRIBUTES || (attributes & FILE_ATTRIBUTE_DIRECTORY)) {
        Wh_Log(L"No file at %s", path.c_str());
        return {};
    }
    return path;
}

// A hex color setting into `rgb`. False, leaving `rgb` alone, if it isn't one.
bool HexSetting(PCWSTR name, uint8_t rgb[3]) {
    auto value = WindhawkUtils::StringSetting::make(name);
    PCWSTR text = value ? (PCWSTR)value : L"";
    if (ParseHexColor(text, rgb)) return true;
    if (*text) Wh_Log(L"%s \"%s\" isn't 6 hex digits", name, text);
    return false;
}

// An icon's margin setting, -50 to 50: how much smaller (or, below 0, bigger)
// than other icons its artwork is, in percent. At 0, a macOS icon's artwork
// (824 of 1024 pixels, the rest left for its shadow) matches app icons.
void ApplyMargin(PCWSTR name, float& size, float& scale) {
    size = (100 - std::clamp(Wh_GetIntSetting(name), -50, 50)) / 100.0f;
    scale = size * kMacIconScale;
}

CustomIcon CustomIconSetting(PCWSTR path, PCWSTR margin, PCWSTR fullPath = nullptr,
                             PCWSTR fullMargin = nullptr) {
    CustomIcon icon;
    icon.path = PathSetting(path);
    ApplyMargin(margin, icon.size, icon.scale);
    icon.fullSize = icon.size;
    icon.fullScale = icon.scale;
    if (fullPath) icon.fullPath = PathSetting(fullPath);
    if (!icon.fullPath.empty()) ApplyMargin(fullMargin, icon.fullSize, icon.fullScale);
    return icon;
}

// A Look from the settings in `group`: dockColor or trayColor.
Look LookSetting(std::wstring const& group) {
    auto name = [&](PCWSTR key) { return group + L"." + key; };
    auto percent = [&](PCWSTR key) {
        return std::clamp(Wh_GetIntSetting(name(key).c_str()), 0, 100);
    };
    Look look{};
    look.background = (Background)ChoiceSetting(
        name(L"background").c_str(), {L"light", L"dark", L"system", L"custom", L"none"}, 0);
    if (look.background == Background::Custom &&
        !HexSetting(name(L"customColor").c_str(), look.color)) {
        look.background = Background::Light;
    }
    look.opacity = percent(L"opacity");
    look.blur = percent(L"blur");
    look.border = (Border)ChoiceSetting(name(L"border").c_str(),
                                        {L"mac", L"standard", L"custom", L"none"}, 0);
    look.borderOpacity = percent(L"borderOpacity");
    look.borderWidth = std::clamp(Wh_GetIntSetting(name(L"borderWidth").c_str()), 0, 8);
    if (look.border == Border::Custom &&
        !HexSetting(name(L"borderColor").c_str(), look.borderColor)) {
        std::fill(std::begin(look.borderColor), std::end(look.borderColor), 0xFF);
    }
    return look;
}

void ComputeSizes();

void LoadSettings() {
    auto& s = g_settings;
    auto percent = [](PCWSTR name) { return std::clamp(Wh_GetIntSetting(name), 0, 100); };
    auto padding = [](PCWSTR name) { return std::clamp(Wh_GetIntSetting(name), 0, 20); };

    // Fallbacks match each setting's documented default.
    s.size = percent(L"dockSize.size");
    s.paddingH = padding(L"dockSize.paddingHorizontal");
    s.paddingV = padding(L"dockSize.paddingVertical");
    s.spacing = padding(L"dockSize.iconSpacing");
    s.scale = 1.0f + percent(L"dockSize.magnification") / 100.0f;
    s.range = percent(L"dockSize.magnificationRange");
    s.animationMs = std::clamp(Wh_GetIntSetting(L"dockSize.animationSpeed"), 0, 1000);
    s.autoHide = (AutoHide)ChoiceSetting(L"dockSize.autoHide", {L"hybrid", L"always", L"never"}, 0);

    s.dockLook = LookSetting(L"dockColor");
    s.trayLook = LookSetting(L"trayColor");
    s.trayMatchDock = Wh_GetIntSetting(L"trayColor.matchDock");
    s.dockBrightnessLimit =
        Wh_GetIntSetting(L"dockColor.capBrightness") ? percent(L"dockColor.brightnessLimit") : 100;
    s.trayBrightnessLimit =
        Wh_GetIntSetting(L"trayColor.capBrightness") ? percent(L"trayColor.brightnessLimit") : 100;
    s.glassStyle = (GlassStyle)ChoiceSetting(L"liquidGlass.edgeStyle",
                                             {L"lens", L"reflection", L"stretch", L"off"}, 3);
    s.glassDepth = (float)std::clamp(Wh_GetIntSetting(L"liquidGlass.edgeDepth"), 2, 100);
    s.glassStrength = std::clamp(Wh_GetIntSetting(L"liquidGlass.edgeStrength"), 0, 150) / 100.0f;
    s.glassBlur = std::clamp(Wh_GetIntSetting(L"liquidGlass.blur"), 0, 100);
    s.trayPadding = std::clamp(Wh_GetIntSetting(L"trayColor.padding"), 0, 20);
    s.trayShadow = Wh_GetIntSetting(L"trayColor.shadow");
    s.trayShadowAuto = !HexSetting(L"trayColor.shadowColor", s.trayShadowColor);
    s.trayShadowOpacity = percent(L"trayColor.shadowOpacity") / 100.0f;
    s.trayShadowBlur = (float)std::clamp(Wh_GetIntSetting(L"trayColor.shadowBlur"), 0, 20);
    s.trayShadowX = (float)std::clamp(Wh_GetIntSetting(L"trayColor.shadowOffsetX"), -10, 10);
    s.trayShadowY = (float)std::clamp(Wh_GetIntSetting(L"trayColor.shadowOffsetY"), -10, 10);

    s.hideStart = Wh_GetIntSetting(L"dockItems.hideStart");
    s.explorerFirst = Wh_GetIntSetting(L"dockItems.explorerFirst");
    s.recycleBin = Wh_GetIntSetting(L"dockItems.recycleBin");
    s.highResIcons = Wh_GetIntSetting(L"dockItems.highResIcons");
    s.tooltips = Wh_GetIntSetting(L"dockItems.tooltips");
    s.indicators = (Indicators)ChoiceSetting(L"dockItems.indicators",
                                             {L"mac", L"hybrid", L"windows", L"none"}, 0);
    s.previews = Wh_GetIntSetting(L"dockItems.previews");
    s.dividerAfterLeft = Wh_GetIntSetting(L"dockItems.dividerAfterExplorer");
    s.dividerBeforeTrash = Wh_GetIntSetting(L"dockItems.dividerBeforeTrash");
    s.customDividers.clear();
    for (size_t i = 0; i < kMaxCustomDividers; i++) {
        int at = Wh_GetIntSetting(L"dockItems.dividers[%d]", (int)i);
        if (at > 0) s.customDividers.push_back(at);
    }
    std::sort(s.customDividers.begin(), s.customDividers.end());
    s.customDividers.erase(std::unique(s.customDividers.begin(), s.customDividers.end()),
                           s.customDividers.end());
    s.keepIconsStill = Wh_GetIntSetting(L"dockItems.keepIconsStill");

    s.squircleIcons = Wh_GetIntSetting(L"squircleIcons.enabled");
    s.tileColor = (TileColor)ChoiceSetting(
        L"squircleIcons.color",
        {L"alwaysLight", L"preferLight", L"auto", L"preferDark", L"alwaysDark", L"custom"}, 2);
    if (s.tileColor == TileColor::Custom &&
        !HexSetting(L"squircleIcons.customColor", s.tileCustomColor)) {
        s.tileColor = TileColor::Auto;
    }
    if (!HexSetting(L"squircleIcons.lightColor", s.tileLightColor)) {
        s.tileLightColor[0] = s.tileLightColor[1] = s.tileLightColor[2] = 0xEE;
    }
    if (!HexSetting(L"squircleIcons.darkColor", s.tileDarkColor)) {
        s.tileDarkColor[0] = s.tileDarkColor[1] = s.tileDarkColor[2] = 0x33;
    }
    s.tileVibrance = std::clamp(Wh_GetIntSetting(L"squircleIcons.vibrance"), 0, 200);
    s.tileSheen = Wh_GetIntSetting(L"squircleIcons.sheen");
    s.tileSheenOpacity = percent(L"squircleIcons.sheenOpacity");
    s.tileSheenSize = percent(L"squircleIcons.sheenSize");
    const PCWSTR sides[] = {L"top", L"bottom", L"left", L"right"};
    const uint8_t defaultLevels[] = {0xFF, 0x00, 0xCC, 0xCC};  // the default colors' grays
    for (size_t i = 0; i < s.tileEdges.size(); i++) {
        auto name = [&](PCWSTR suffix) {
            return std::wstring(L"squircleIcons.") + sides[i] + L"Glow" + suffix;
        };
        TileEdge& edge = s.tileEdges[i];
        edge.opacity = percent(name(L"Opacity").c_str());
        edge.size = std::clamp(Wh_GetIntSetting(name(L"Size").c_str()), 0, 50);
        if (!HexSetting(name(L"Color").c_str(), edge.color)) {
            edge.color[0] = edge.color[1] = edge.color[2] = defaultLevels[i];
        }
    }
    s.tileShadowSpread = std::clamp(Wh_GetIntSetting(L"squircleIcons.shadowSpread"), 0, 10);
    s.tileShadowDistance = std::clamp(Wh_GetIntSetting(L"squircleIcons.shadowDistance"), 0, 10);
    s.tileShadowOpacity = percent(L"squircleIcons.shadowOpacity");
    s.tileShadowDirection = (ShadowDirection)ChoiceSetting(
        L"squircleIcons.shadowDirection",
        {L"down", L"downLeft", L"downRight", L"left", L"right", L"up", L"centered"}, 0);
    s.tileCorner =
        (CornerStyle)ChoiceSetting(L"squircleIcons.cornerStyle", {L"squircle", L"rounded"}, 0);
    s.tileCornerRadius = std::clamp(Wh_GetIntSetting(L"squircleIcons.cornerRadius"), 0, 50);

    s.customFinder = CustomIconSetting(L"customIcons.finderPath", L"customIcons.finderMargins");
    s.customFinder.ignoreSquircle = Wh_GetIntSetting(L"customIcons.finderIgnoreSquircle");
    s.customStart = CustomIconSetting(L"customIcons.startPath", L"customIcons.startMargins");
    s.customStart.ignoreSquircle = Wh_GetIntSetting(L"customIcons.startIgnoreSquircle");
    s.customTrash =
        CustomIconSetting(L"customIcons.trashEmptyPath", L"customIcons.trashEmptyMargins",
                          L"customIcons.trashFullPath", L"customIcons.trashFullMargins");
    s.appIcons.clear();
    for (int i = 0; i < kMaxAppIcons; i++) {
        std::wstring key = L"customIcons.apps[" + std::to_wstring(i) + L"].";
        std::wstring app = TrimmedSetting((key + L"app").c_str());
        // The list ends at its first blank entry.
        if (app.empty() && TrimmedSetting((key + L"icon").c_str()).empty()) break;
        AppIcon entry;
        entry.icon = CustomIconSetting((key + L"icon").c_str(), (key + L"margins").c_str());
        if (app.empty() || entry.icon.path.empty()) continue;
        entry.exe = EndsWithNoCase(app, L".exe");
        entry.app = entry.exe && app.find(L'\\') != app.npos ? ExpandVariables(app) : app;
        entry.icon.ignoreSquircle = Wh_GetIntSetting((key + L"ignoreSquircle").c_str());
        s.appIcons.push_back(std::move(entry));
    }

    s.leftCorner = (LeftCorner)ChoiceSetting(L"hotCorners.bottomLeft",
                                             {L"taskView", L"start", L"off"}, 0);
    s.tray = (Show)ChoiceSetting(L"hotCorners.bottomRight", {L"tray", L"hidden", L"visible"}, 0);

    for (size_t i = 0; i < s.dockEdges.size(); i++) {
        auto name = [&](PCWSTR suffix) {
            return std::wstring(L"dockColor.") + sides[i] + L"Glow" + suffix;
        };
        DockEdge& edge = s.dockEdges[i];
        edge.lighter = !HexSetting(name(L"Color").c_str(), edge.color);
        edge.opacity = percent(name(L"Opacity").c_str());
        edge.size = std::clamp(Wh_GetIntSetting(name(L"Size").c_str()), 0, 50);
    }
    // The color was in Additional Settings in earlier versions: kept from there.
    if (!HexSetting(L"tooltips.color", s.tooltipColor) &&
        !HexSetting(L"additional.tooltipColor", s.tooltipColor)) {
        std::fill(std::begin(s.tooltipColor), std::end(s.tooltipColor), 0xBF);
    }
    s.tooltipFont = TrimmedSetting(L"tooltips.font");
    s.tooltipFontSize = std::clamp(Wh_GetIntSetting(L"tooltips.fontSize"), 8, 32);
    s.tooltipRadius = std::clamp(Wh_GetIntSetting(L"tooltips.cornerRadius"), 0, 50);
    s.tooltipTail = Wh_GetIntSetting(L"tooltips.tail");
    for (size_t i = 0; i < s.tooltipEdges.size(); i++) {
        auto name = [&](PCWSTR suffix) {
            return std::wstring(L"tooltips.") + sides[i] + L"Glow" + suffix;
        };
        TileEdge& edge = s.tooltipEdges[i];
        edge.opacity = percent(name(L"Opacity").c_str());
        edge.size = std::clamp(Wh_GetIntSetting(name(L"Size").c_str()), 0, 50);
        // Blank gives the same color as squircle icons' default.
        if (!HexSetting(name(L"Color").c_str(), edge.color)) {
            edge.color[0] = edge.color[1] = edge.color[2] = defaultLevels[i];
        }
    }
    g_settingsVersion++;

    ComputeSizes();
}


// =============================================================================
// SIZES
// =============================================================================

constexpr float kStockIconSize = 24;
constexpr float kStockButtonWidth = 44;
constexpr double kStockTaskbarHeight = 48;
constexpr int kMinTaskbarHeight = 40;           // keeps the clock from being squashed
constexpr float kDefaultIconSize = 44;          // at Size 60; spacing settings are pixels here
constexpr float kButtonIconPadding = 8;         // a button is at least its icon + this wide
constexpr float kTrashIconScale = 1.15f;        // Windows' bin icon has empty space around it
constexpr float kTrashShift = 3;                // the Recycle Bin past its divider, moved left
constexpr float kTrashMenuLift = 6;             // its menu's gap above the icon, at Size 60
constexpr float kBounceRoom = 0.25f;            // above a fully magnified icon, of its size
constexpr float kDividerWidth = 1;
constexpr float kDividerGapScale = 1.25f;       // space either side of a divider, in icon gaps
constexpr float kDividerInsetScale = 0.7f;      // divider ends, as a share of the vertical padding

struct Sizes {
    float icon;
    float gap;                // between icons
    float padX, padY;         // dock padding
    float buttonWidth;
    float buttonMargin;       // per side; negative pulls buttons together
    float dockHeight, dockRadius, bottomGap;
    float radius;             // how far from the pointer icons grow
    float iconLoadSize;       // 0 = Windows' own
    float dividerSpace, dividerLeft;
    float trashSlot, trashSpace;
    float bounceRoom;         // how much taller the taskbar is for the bounce
} g_size;

int g_taskbarHeight = 0;      // 0 = the taskbar's normal height (while unloading)

// The dock's icons as "Size" sets them, and as they are while it's shrunk to
// fit the screen (see FITTING), as on a Mac: 0 when it isn't.
float g_fullIcon = 0;
float g_fitIcon = 0;
constexpr float kMinFitIcon = kStockIconSize;  // it shrinks no smaller

bool DockSizesIcons() { return g_taskbarHeight > 0; }
float DividerInset() { return std::round(g_size.padY * kDividerInsetScale); }

// The dock's sizes with icons `icon` pixels, by the settings.
Sizes SizesFor(float icon) {
    auto& s = g_settings;
    Sizes z{};
    float k = icon / kDefaultIconSize;

    z.icon = icon;
    z.gap = std::round(s.spacing * k);
    z.padX = std::round(s.paddingH * k);
    z.padY = std::round(s.paddingV * k);
    // Each button holds its icon and the gap, half on each side, so the taskbar
    // moves apps a whole spot when dragging.
    z.buttonWidth = std::max(kStockButtonWidth, icon + std::max(kButtonIconPadding, z.gap));
    z.buttonMargin = (icon + z.gap - z.buttonWidth) / 2;
    z.dockHeight = icon + 2 * z.padY;
    z.dockRadius = std::round(z.dockHeight * 0.3f);
    z.bottomGap = std::round(icon / 7);
    z.radius = icon * (1 + s.range / 20.0f);

    // Either side of a divider, past the half gap its neighbors hold.
    float room = kDividerGapScale * z.gap;
    z.dividerLeft = room + kDividerWidth / 2;
    z.dividerSpace = room + kDividerWidth + room;
    z.trashSlot = icon + z.gap;
    z.trashSpace = (s.dividerBeforeTrash ? z.dividerSpace : 0) + z.trashSlot;
    return z;
}

void SaveTaskbarTop();

void ComputeSizes() {
    auto& s = g_settings;
    // Exponential: 0 -> 19px, 20 -> 25px, 60 -> 44px, 100 -> 77px.
    float icon = std::round(kDefaultIconSize * std::exp2((s.size - 60) / 50.0f));
    g_fullIcon = icon;
    if (g_fitIcon >= icon) g_fitIcon = 0;
    g_size = SizesFor(g_fitIcon > 0 ? g_fitIcon : icon);

    // The taskbar's height and the icons' resolution stay as at full size, so
    // shrinking to fit doesn't move maximized windows or reload icons.
    Sizes z = SizesFor(icon);
    g_size.iconLoadSize = s.highResIcons ? std::ceil(icon * s.scale) : 0;

    // Tall enough for the dock and a fully magnified icon, plus 2px, with room
    // above the icon for Windows' launch bounce.
    float dockTop = z.bottomGap + z.dockHeight;
    float iconTop = z.bottomGap + z.padY + s.scale * icon;
    int height = std::max((int)std::ceil(std::max(dockTop, iconTop) + 2), kMinTaskbarHeight);
    g_taskbarHeight = std::max(height, (int)std::ceil(iconTop + s.scale * icon * kBounceRoom));
    // As the dock shrinks, the taskbar keeps its height: the room's above it.
    g_size.bounceRoom = (float)g_taskbarHeight - std::max(
        std::ceil(std::max(g_size.bottomGap + g_size.dockHeight,
                           g_size.bottomGap + g_size.padY + s.scale * g_size.icon) + 2),
        (float)kMinTaskbarHeight);

    auto const& g = g_size;
    Wh_Log(L"Icon %.0f%s (loaded at %.0f), dock %.0f, taskbar %d, gap %.0f, padding %.0f x %.0f",
           g.icon, g_fitIcon > 0 ? L" (shrunk to fit)" : L"", g.iconLoadSize, g.dockHeight,
           g_taskbarHeight, g.gap, g.padX, g.padY);
    SaveTaskbarTop();
}

// =============================================================================
// UTILITIES
// =============================================================================

std::atomic<bool> g_unloading = false;

HINSTANCE ModuleInstance() {
    HMODULE module = nullptr;
    GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                          GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                      (LPCWSTR)&ModuleInstance, &module);
    return module;
}

// Calls f(hwnd, primary) for each of Explorer's taskbar windows.
template <typename F>
void ForEachTaskbarWindow(F f) {
    EnumWindows(
        [](HWND w, LPARAM l) -> BOOL {
            DWORD pid;
            WCHAR cls[32];
            if (GetWindowThreadProcessId(w, &pid) && pid == GetCurrentProcessId() &&
                GetClassName(w, cls, ARRAYSIZE(cls))) {
                bool primary = !_wcsicmp(cls, L"Shell_TrayWnd");
                if (primary || !_wcsicmp(cls, L"Shell_SecondaryTrayWnd")) (*(F*)l)(w, primary);
            }
            return TRUE;
        },
        (LPARAM)&f);
}

HWND FindTaskbar() {
    HWND result = nullptr;
    ForEachTaskbarWindow([&result](HWND w, bool primary) {
        if (primary && !result) result = w;
    });
    return result;
}

using RunProc_t = void (*)(void*);

bool RunFromWindowThread(HWND hWnd, RunProc_t proc, void* param) {
    static const UINT msg = RegisterWindowMessage(L"Windhawk_RunFromWindowThread_" WH_MOD_ID);
    struct Param { RunProc_t proc; void* param; };

    DWORD tid = GetWindowThreadProcessId(hWnd, nullptr);
    if (!tid) return false;
    if (tid == GetCurrentThreadId()) {
        proc(param);
        return true;
    }
    HHOOK hook = SetWindowsHookEx(
        WH_CALLWNDPROC,
        [](int code, WPARAM w, LPARAM l) -> LRESULT {
            auto* cwp = (const CWPSTRUCT*)l;
            if (code == HC_ACTION && cwp->message == msg) {
                auto* p = (Param*)cwp->lParam;
                p->proc(p->param);
            }
            return CallNextHookEx(nullptr, code, w, l);
        },
        nullptr, tid);
    if (!hook) return false;
    Param p{proc, param};
    SendMessage(hWnd, msg, 0, (LPARAM)&p);
    UnhookWindowsHookEx(hook);
    return true;
}

// Calls f(el) for elements under `parent`, `depth` levels down. False skips children.
template <typename F>
void ForEachDescendant(wux::DependencyObject const& parent, int depth, F&& f) {
    int count = wuxm::VisualTreeHelper::GetChildrenCount(parent);
    for (int i = 0; i < count; i++) {
        auto child = wuxm::VisualTreeHelper::GetChild(parent, i);
        auto el = child.try_as<wux::FrameworkElement>();
        if ((!el || f(el)) && depth > 1) ForEachDescendant(child, depth - 1, f);
    }
}

// The taskbar (Taskbar.TaskbarFrame) that `el` is in.
wux::FrameworkElement FindTaskbarFrame(wux::FrameworkElement const& el) {
    wux::DependencyObject current = el;
    for (int depth = 0; current && depth < 20; depth++) {
        if (winrt::get_class_name(current) == L"Taskbar.TaskbarFrame") {
            return current.try_as<wux::FrameworkElement>();
        }
        current = wuxm::VisualTreeHelper::GetParent(current);
    }
    return nullptr;
}

bool IsAppButton(wux::FrameworkElement const& el) {
    return winrt::get_class_name(el) == L"Taskbar.TaskListButton";
}

bool IsFileExplorer(wux::FrameworkElement const& button) {
    return wux::Automation::AutomationProperties::GetAutomationId(button) ==
           L"Appid: Microsoft.Windows.Explorer";
}

bool IsStartButton(wux::FrameworkElement const& button) {
    return winrt::get_class_name(button) == L"Taskbar.ExperienceToggleButton" &&
           wux::Automation::AutomationProperties::GetAutomationId(button) == L"StartButton";
}

// Moves an element by its composition visual, outside layout.
void SetTranslation(wux::UIElement const& el, float x, float y = 0) {
    wuxh::ElementCompositionPreview::SetIsTranslationEnabled(el, true);
    wuxh::ElementCompositionPreview::GetElementVisual(el).Properties().InsertVector3(
        L"Translation", {x, y, 0});
}

// Runs f, swallowing (and optionally logging) errors: the taskbar must keep running.
// False if it failed.
template <typename F>
bool Try(F&& f, PCWSTR what = nullptr) {
    try {
        f();
        return true;
    } catch (...) {
        if (what) Wh_Log(L"%s failed: 0x%08X", what, winrt::to_hresult());
        return false;
    }
}

// =============================================================================
// SHELL JOBS
// =============================================================================
// Recycling and emptying the Recycle Bin run one at a time on a thread pool
// thread, as they can show Windows' own dialogs. The pool can run two callbacks
// at once, so a lock keeps them in order.

std::mutex g_shellJobsLock;
std::mutex g_shellJobRunning;
std::list<std::function<void()>> g_shellJobs;
PTP_WORK g_shellJobWork = nullptr;

void CALLBACK RunShellJob(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK) {
    std::lock_guard running(g_shellJobRunning);
    std::function<void()> job;
    {
        std::lock_guard lock(g_shellJobsLock);
        if (g_shellJobs.empty()) return;
        job = std::move(g_shellJobs.front());
        g_shellJobs.pop_front();
    }
    HRESULT co = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
    job();
    if (SUCCEEDED(co)) CoUninitialize();
}

void QueueShellJob(std::function<void()> job) {
    if (!g_shellJobWork) return;
    {
        std::lock_guard lock(g_shellJobsLock);
        g_shellJobs.push_back(std::move(job));
    }
    SubmitThreadpoolWork(g_shellJobWork);
}

// =============================================================================
// MOD WINDOW
// =============================================================================
// A message-only window on the taskbar's thread; the app bars share its class.

constexpr WCHAR kWindowClass[] = L"Windhawk_" WH_MOD_ID;
constexpr UINT kAppBarMessage = WM_APP;
constexpr UINT kUpdateOverWindowsMessage = WM_APP + 1;
constexpr UINT kTrashChangedMessage = WM_APP + 2;
constexpr UINT kTrashCheckedMessage = WM_APP + 3;
constexpr UINT kMoveExplorerMessage = WM_APP + 4;
constexpr UINT kGlassStopMessage = WM_APP + 5;    // Liquid Glass's emergency stop
constexpr UINT kGlassFreezeMessage = WM_APP + 6;  // freezing or thawing it
constexpr UINT kGlassFrameMessage = WM_APP + 7;   // a new picture of the screen behind it
constexpr UINT_PTR kReapplyTimer = 1;
constexpr UINT_PTR kPollTimer = 3;
constexpr UINT_PTR kTrayClipTimer = 4;
constexpr UINT_PTR kSquircleRetryTimer = 5;
constexpr UINT_PTR kMaximizedCheckTimer = 6;
constexpr UINT_PTR kIconsMovingTimer = 7;
constexpr UINT_PTR kGlassTimer = 8;
constexpr UINT kSquircleRetryMs = 50;

std::atomic<HWND> g_modWindow = nullptr;

LRESULT CALLBACK ModWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

bool RegisterWindowClass() {
    static bool registered = [] {
        WNDCLASS wc{};
        wc.lpfnWndProc = ModWindowProc;
        wc.hInstance = ModuleInstance();
        wc.lpszClassName = kWindowClass;
        return RegisterClass(&wc) != 0;
    }();
    return registered;
}

// Not again once unloading, as it's destroyed then with anything posted to it.
HWND EnsureModWindow() {
    if (!g_modWindow && !g_unloading && RegisterWindowClass()) {
        g_modWindow = CreateWindowEx(0, kWindowClass, L"", 0, 0, 0, 0, 0, HWND_MESSAGE, nullptr,
                                     ModuleInstance(), nullptr);
    }
    return g_modWindow;
}

// =============================================================================
// PROPERTY OVERRIDES
// =============================================================================
// Local values the mod sets on the taskbar's elements, with the originals to
// put back. With `reapply`, the mod's value is set again whenever the taskbar
// changes it.
//
// Containers of XAML objects are no_destroy (XAML shuts down first when
// Explorer exits), and optional so ResetAll can destroy them.

using Reapply = std::function<void(wux::FrameworkElement const&)>;

struct Override {
    winrt::weak_ref<wux::FrameworkElement> element;
    wux::DependencyProperty dp{nullptr};
    wf::IInspectable original{nullptr};
    int64_t token = 0;
};

[[clang::no_destroy]] std::optional<std::list<Override>> g_overrides{std::in_place};

void RestoreLocalValue(wux::DependencyObject const& el, wux::DependencyProperty const& dp,
                       wf::IInspectable const& value) {
    if (!value || value == wux::DependencyProperty::UnsetValue()) el.ClearValue(dp);
    else el.SetValue(dp, value);
}

Override* FindOverride(wux::FrameworkElement const& el, wux::DependencyProperty const& dp) {
    if (!g_overrides) return nullptr;
    for (auto& o : *g_overrides) {
        if (o.dp == dp && o.element.get() == el) return &o;
    }
    return nullptr;
}

Override& Track(wux::FrameworkElement const& el, wux::DependencyProperty const& dp,
                Reapply reapply = nullptr) {
    if (Override* o = FindOverride(el, dp)) return *o;
    auto& o = g_overrides->emplace_back(Override{winrt::make_weak(el), dp, el.ReadLocalValue(dp)});
    if (reapply) {
        o.token = el.RegisterPropertyChangedCallback(
            dp, [reapply](wux::DependencyObject const& sender, wux::DependencyProperty const&) {
                Try([&] { reapply(sender.as<wux::FrameworkElement>()); });
            });
    }
    return o;
}

// The original value back, still tracked.
void PutBack(wux::FrameworkElement const& el, wux::DependencyProperty const& dp) {
    if (Override* o = FindOverride(el, dp)) RestoreLocalValue(el, dp, o->original);
}

void Restore(Override const& o) {
    auto el = o.element.get();
    if (!el) return;
    Try([&] {
        if (o.token) el.UnregisterPropertyChangedCallback(o.dp, o.token);
        RestoreLocalValue(el, o.dp, o.original);
    });
}

// The original value back, no longer tracked.
void Release(wux::FrameworkElement const& el, wux::DependencyProperty const& dp) {
    g_overrides->remove_if([&](Override const& o) {
        if (o.dp != dp || o.element.get() != el) return false;
        Restore(o);
        return true;
    });
}

void RestoreOverrides() {
    for (auto& o : *g_overrides) Restore(o);
    g_overrides->clear();
}

// =============================================================================
// IMAGES
// =============================================================================


MIDL_INTERFACE("905a0fef-bc53-11df-8c49-001e4fc686da")
IDockBufferByteAccess : public IUnknown {
public:
    virtual HRESULT STDMETHODCALLTYPE Buffer(BYTE** value) = 0;
};
__CRT_UUID_DECL(IDockBufferByteAccess, 0x905a0fef, 0xbc53, 0x11df, 0x8c, 0x49, 0x00, 0x1e, 0x4f,
                0xc6, 0x86, 0xda)

constexpr GUID kWICImagingFactoryId = {
    0xcacaf262, 0x9370, 0x4615, {0xa1, 0x3b, 0x9f, 0x55, 0x39, 0xda, 0x4c, 0x0a}};
constexpr GUID kIWICImagingFactoryId = {
    0xec5ec8a9, 0xc395, 0x4314, {0x9c, 0x77, 0x54, 0xd7, 0xa9, 0x35, 0xff, 0x70}};
constexpr GUID kWICPixelFormat32bppPBGRA = {
    0x6fddc324, 0x4e03, 0x4bfe, {0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x10}};
constexpr auto kWICHighQualityCubic = (WICBitmapInterpolationMode)4;

// A XAML bitmap from premultiplied BGRA pixels, top row first.
wuxm::ImageSource BitmapFromPixels(int width, int height, std::vector<BYTE> const& pixels) {
    wuxm::Imaging::WriteableBitmap bitmap(width, height);
    BYTE* data = nullptr;
    winrt::check_hresult(bitmap.PixelBuffer().as<IDockBufferByteAccess>()->Buffer(&data));
    memcpy(data, pixels.data(), pixels.size());
    bitmap.Invalidate();
    return bitmap;
}

// ---- Mac .icns files ----
// "icns" and the file's length, then entries: each a 4-letter type, its length
// (with this 8-byte header) and its data, lengths big-endian. In files made
// since Mac OS X 10.7 (2011), the sizes from 128px up are PNGs. Older files
// hold them as JPEG 2000, which Windows can't read, and the small sizes are in
// Apple's own formats, so only PNGs are used.

constexpr uint32_t kMaxIconSide = 1024;          // Mac icons go up to 1024px
constexpr int64_t kIcnsMaxFileSize = 64 << 20;  // past this, not read

// Of a file's sizes, the best has the highest rank: the largest up to 1024px,
// or without one, the smallest bigger one.
int64_t SideRank(uint32_t side) {
    return side <= kMaxIconSide ? (int64_t)side : -(int64_t)side;
}

uint32_t BigEndian32(BYTE const* p) {
    return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

// The largest PNG in an .icns file's bytes, up to 1024px, or without one, the
// smallest bigger one. Empty if it has no PNG.
std::span<BYTE const> LargestIcnsPng(std::span<BYTE const> file) {
    static constexpr BYTE kPngSignature[8] = {0x89, 'P', 'N', 'G', '\r', '\n', 0x1A, '\n'};
    std::span<BYTE const> best;
    int64_t bestRank = 0;
    if (file.size() < 8 || memcmp(file.data(), "icns", 4)) return best;
    size_t end = std::min<size_t>(file.size(), BigEndian32(&file[4]));
    for (size_t at = 8; at + 8 <= end;) {
        size_t length = BigEndian32(&file[at + 4]);
        if (length < 8 || length > end - at) break;
        auto data = file.subspan(at + 8, length - 8);
        at += length;
        // A PNG's width and height follow its signature and its first chunk's
        // length and type.
        if (data.size() < 24 || memcmp(data.data(), kPngSignature, 8)) continue;
        uint32_t side = std::max(BigEndian32(&data[16]), BigEndian32(&data[20]));
        if (!side) continue;
        int64_t rank = SideRank(side);
        if (best.empty() || rank > bestRank) {
            best = data;
            bestRank = rank;
        }
    }
    return best;
}

// The file's bytes if it's an .icns file, known by its first 4 bytes whatever
// its name, else empty.
std::vector<BYTE> ReadIcnsFile(std::wstring const& path) {
    std::vector<BYTE> bytes;
    winrt::file_handle file{CreateFileW(path.c_str(), GENERIC_READ,
                                        FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                                        nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr)};
    LARGE_INTEGER size{};
    char magic[4];
    DWORD read = 0;
    if (!file || !GetFileSizeEx(file.get(), &size) || size.QuadPart < 8 ||
        size.QuadPart > kIcnsMaxFileSize || !ReadFile(file.get(), magic, 4, &read, nullptr) ||
        read != 4 || memcmp(magic, "icns", 4)) {
        return bytes;
    }
    bytes.resize((size_t)size.QuadPart);
    memcpy(bytes.data(), magic, 4);
    DWORD rest = (DWORD)bytes.size() - 4;
    if (!ReadFile(file.get(), bytes.data() + 4, rest, &read, nullptr) || read != rest) {
        bytes.clear();
    }
    return bytes;
}

// An image file (PNG, .icns, or any format Windows reads), scaled to `px` on its
// longer side, as premultiplied BGRA, top row first; empty if it can't be read.
std::vector<BYTE> LoadImagePixels(std::wstring const& path, int px, int& w, int& h) {
    std::vector<BYTE> result;
    if (path.empty() || px <= 0) return result;
    Try([&] {
        using winrt::check_hresult;
        winrt::com_ptr<IWICImagingFactory> factory;
        winrt::com_ptr<IWICStream> stream;
        winrt::com_ptr<IWICBitmapDecoder> decoder;
        winrt::com_ptr<IWICBitmapFrameDecode> frame;
        winrt::com_ptr<IWICFormatConverter> converter;
        winrt::com_ptr<IWICBitmapScaler> scaler;
        check_hresult(CoCreateInstance(kWICImagingFactoryId, nullptr, CLSCTX_INPROC_SERVER,
                                       kIWICImagingFactoryId, factory.put_void()));
        // An .icns file is decoded from its largest PNG, read from `icns`, which
        // is kept until the pixels are copied out.
        std::vector<BYTE> icns = ReadIcnsFile(path);
        if (!icns.empty()) {
            auto png = LargestIcnsPng(icns);
            if (png.empty()) {
                Wh_Log(L"No PNG in %s: older .icns files hold their images in formats "
                       L"Windows can't read",
                       path.c_str());
                return;
            }
            check_hresult(factory->CreateStream(stream.put()));
            check_hresult(
                stream->InitializeFromMemory(const_cast<BYTE*>(png.data()), (DWORD)png.size()));
            check_hresult(factory->CreateDecoderFromStream(
                stream.get(), nullptr, WICDecodeMetadataCacheOnDemand, decoder.put()));
        } else {
            check_hresult(factory->CreateDecoderFromFilename(
                path.c_str(), nullptr, GENERIC_READ, WICDecodeMetadataCacheOnDemand, decoder.put()));
        }
        // A file with several sizes, like an .ico file, gives its best one. In
        // others, frames are all one size (an animation's), so the first stays.
        UINT frames = 0, chosen = 0;
        if (SUCCEEDED(decoder->GetFrameCount(&frames)) && frames > 1) {
            int64_t bestRank = std::numeric_limits<int64_t>::min();
            for (UINT i = 0; i < std::min(frames, 32u); i++) {
                winrt::com_ptr<IWICBitmapFrameDecode> candidate;
                UINT w = 0, h = 0;
                if (FAILED(decoder->GetFrame(i, candidate.put())) ||
                    FAILED(candidate->GetSize(&w, &h)) || !w || !h) {
                    continue;
                }
                int64_t rank = SideRank(std::max(w, h));
                if (rank > bestRank) {
                    bestRank = rank;
                    chosen = i;
                }
            }
        }
        check_hresult(decoder->GetFrame(chosen, frame.put()));

        UINT width = 0, height = 0;
        check_hresult(frame->GetSize(&width, &height));
        if (!width || !height) winrt::throw_hresult(E_FAIL);
        double k = (double)px / std::max(width, height);
        UINT outWidth = std::max(1u, (UINT)std::lround(width * k));
        UINT outHeight = std::max(1u, (UINT)std::lround(height * k));

        // Premultiplied before scaling, so edges don't get dark fringes.
        check_hresult(factory->CreateFormatConverter(converter.put()));
        check_hresult(converter->Initialize(frame.get(), kWICPixelFormat32bppPBGRA,
                                            WICBitmapDitherTypeNone, nullptr, 0,
                                            WICBitmapPaletteTypeCustom));
        check_hresult(factory->CreateBitmapScaler(scaler.put()));
        if (FAILED(scaler->Initialize(converter.get(), outWidth, outHeight, kWICHighQualityCubic))) {
            check_hresult(scaler->Initialize(converter.get(), outWidth, outHeight,
                                             WICBitmapInterpolationModeFant));
        }
        std::vector<BYTE> pixels((size_t)outWidth * outHeight * 4);
        check_hresult(scaler->CopyPixels(nullptr, outWidth * 4, (UINT)pixels.size(), pixels.data()));
        w = (int)outWidth;
        h = (int)outHeight;
        result = std::move(pixels);
    }, L"Icon image");
    return result;
}

// The same, decoded synchronously (XAML's own decoding is asynchronous).
wuxm::ImageSource LoadImageFile(std::wstring const& path, int px) {
    int w = 0, h = 0;
    auto pixels = LoadImagePixels(path, px, w, h);
    wuxm::ImageSource result{nullptr};
    if (!pixels.empty()) Try([&] { result = BitmapFromPixels(w, h, pixels); }, L"Icon image");
    return result;
}

// Pixels to load an icon drawn `scale` times the icon size at, fully magnified.
int MagnifiedPixels(wux::UIElement const& el, float scale) {
    double dpiScale = 1;
    Try([&] {
        if (auto root = el.XamlRoot()) dpiScale = root.RasterizationScale();
    });
    return (int)std::ceil(std::ceil(g_size.icon * g_settings.scale) * scale * dpiScale);
}

// ---- Finder, Start and Trash ----
// The user's own icons, drawn bigger than the icon's spot so their artwork fills
// it and their margin (a shadow) spills past. Finder and Trash also take those
// names. Without them, Windows' own.

bool HasFinderIcon() { return !g_settings.customFinder.path.empty(); }
bool HasStartIcon() { return !g_settings.customStart.path.empty(); }

// With Squircle Icons on, File Explorer's, Start's and other apps' own icons go
// in tiles, as the apps' icons do, unless set to ignore them. Their margins
// don't apply there: a tile's made from what's shown of the image, whatever
// space is around it.
bool Squircled(CustomIcon const& icon) {
    return g_settings.squircleIcons && !icon.ignoreSquircle;
}

// The image's size, of the icon size: a tile's, or the image's with its margins.
float CustomIconScale(CustomIcon const& icon) {
    return Squircled(icon) ? kMacIconScale : icon.scale;
}

// Start shows an icon of the mod's in the dock: the user's, or with Squircle
// Icons on, a tile of its own (see StartTile). Otherwise, Windows' logo.
bool ModStartIcon() {
    return !g_settings.hideStart && (HasStartIcon() || Squircled(g_settings.customStart));
}
bool HasTrashIcon() { return !g_settings.customTrash.path.empty(); }

// The bin's image, of the icon size: the empty one's, or the full one's.
float TrashImageScale(bool full) {
    if (!HasTrashIcon()) return kTrashIconScale;
    auto& custom = g_settings.customTrash;
    return full && !custom.fullPath.empty() ? custom.fullScale : custom.scale;
}

// The box the bin is drawn in, of the icon size: the empty image's size.
float TrashIconScale() { return TrashImageScale(false); }

// The Recycle Bin's artwork height, for its label. Windows' bin is drawn bigger
// than its artwork, so its label goes halfway up the difference.
float TrashArtHeight(bool full) {
    if (!HasTrashIcon()) return g_size.icon * (1 + kTrashIconScale) / 2;
    auto& custom = g_settings.customTrash;
    return g_size.icon * (full && !custom.fullPath.empty() ? custom.fullSize : custom.size);
}

// Empty for Windows' own icon. Without a full image, the empty one.
std::wstring TrashPath(bool full) {
    auto& custom = g_settings.customTrash;
    if (!HasTrashIcon()) return {};
    return full && !custom.fullPath.empty() ? custom.fullPath : custom.path;
}

// =============================================================================
// TASKBAR BUTTONS
// =============================================================================

void MarkPlatesDirty();

// ---- Sliding ----
// Windows moves buttons to their new places at once (as apps open and close,
// as the dock shrinks to fit, as apps make way for one that's dragged, as File
// Explorer's moved first), and the dock with them. Instead, each icon, the
// Recycle Bin, the dividers and the dock's ends ease there from where they
// were drawn, as on a Mac. A slide is an offset from where layout puts
// something, easing out to none.

// Milliseconds, smooth enough to animate with (GetTickCount64 steps by 16).
float NowMs() {
    static auto start = std::chrono::steady_clock::now();
    return std::chrono::duration<float, std::milli>(std::chrono::steady_clock::now() - start)
        .count();
}

// As long as magnification takes to settle, about: none with Animation Speed 0.
float SlideMs() { return g_settings.animationMs * 2.5f; }

// As an app closes (or is unpinned), Windows slides its icon down off the
// dock first: what moves into its place waits until then, held where it was.
constexpr float kCloseHoldMs = 250;
float g_closeHoldUntil = 0;  // NowMs

struct Slide {
    float from = 0;   // the offset it started at
    float start = 0;  // NowMs
    float applied = 0;

    float At(float now) const {
        float u = SlideMs() > 0 ? (now - start) / SlideMs() : 1;
        if (from == 0 || u >= 1) return 0;
        float left = 1 - std::max(0.0f, u);
        return from * left * left * left;  // ease out
    }
    // Moved `by` in layout: drawn where it was, then easing there from
    // `begin` (held till then, if later).
    void Moved(float by, float now, float begin) {
        from = SlideMs() > 0 ? At(now) - by : 0;
        start = begin;
    }
    // Whether it's still moving, or what's drawn is behind where it should be.
    bool Pending(float now) const {
        return (from != 0 && now - start < SlideMs()) || std::fabs(At(now) - applied) > 0.01f;
    }
};

struct Button {
    winrt::weak_ref<wux::FrameworkElement> element;
    winrt::weak_ref<wux::FrameworkElement> root;  // template root, widened to fit the icon
    wux::FrameworkElement::SizeChanged_revoker sizeChanged;
    double originalIconColumn = 0, appliedIconColumn = 0;
    float extraLeft = 0, extraRight = 0;  // room for the apps divider
    void* impl = nullptr;                 // the taskbar's object for it, to move it
    float layoutCenter = NAN;             // in its panel, as last measured
    float rowCenter = NAN;                // in its row, then
    Slide slide;
};

[[clang::no_destroy]] std::optional<std::list<Button>> g_buttons{std::in_place};

Button* FindButton(wux::FrameworkElement const& el) {
    if (!g_buttons) return nullptr;
    for (auto& b : *g_buttons) {
        if (b.element.get() == el) return &b;
    }
    return nullptr;
}

// Side margins: none, as buttons hold the gaps, unless they're too small to; plus
// the apps divider's room.
void ApplySpacing(wux::FrameworkElement const& el) {
    Button* b = FindButton(el);
    wux::Thickness want{g_size.buttonMargin + (b ? b->extraLeft : 0), 0,
                        g_size.buttonMargin + (b ? b->extraRight : 0), 0};
    if (el.Margin() != want) el.Margin(want);
}

Button& TrackButton(wux::FrameworkElement const& el) {
    if (Button* b = FindButton(el)) return *b;
    auto& b = g_buttons->emplace_back();
    b.element = winrt::make_weak(el);
    Track(el, wux::FrameworkElement::MarginProperty(), ApplySpacing);
    b.sizeChanged = el.SizeChanged(
        winrt::auto_revoke,
        [](wf::IInspectable const&, wux::SizeChangedEventArgs const&) { MarkPlatesDirty(); });
    MarkPlatesDirty();
    return b;
}

// The taskbar sizes buttons for a 24px icon; a minimum width makes room.
void ApplyButtonWidth(Button& b, wux::FrameworkElement const& button) {
    auto root = b.root.get();
    if (!root) {
        if (wuxm::VisualTreeHelper::GetChildrenCount(button) == 0) return;
        root = wuxm::VisualTreeHelper::GetChild(button, 0).try_as<wux::FrameworkElement>();
        if (!root) return;
        b.root = winrt::make_weak(root);
        Track(root, wux::FrameworkElement::MinWidthProperty());
    }
    if (root.MinWidth() != g_size.buttonWidth) root.MinWidth(g_size.buttonWidth);
}

// Below Size 41, buttons are wider than their spot (never narrower than the
// stock 44px) and overlap through negative margins, so whichever is on top
// would take clicks meant for its neighbor, under the neighbor's label. Each is
// clipped to its own spot, which also limits where it takes clicks.
void ApplyHitClip(wux::FrameworkElement const& button) {
    auto dp = wux::UIElement::ClipProperty();
    float overlap = -g_size.buttonMargin;
    if (overlap <= 0) {
        if (FindOverride(button, dp)) Release(button, dp);
        return;
    }
    Track(button, dp);
    wf::Rect want{overlap, -1000, g_size.buttonWidth - 2 * overlap, 3000};
    auto clip = button.Clip();
    if (clip && clip.Rect() == want) return;
    wuxm::RectangleGeometry geometry;
    geometry.Rect(want);
    button.Clip(geometry);
}

// App buttons' first grid column holds the icon, sized for 24px by the taskbar.
void ApplyIconColumn(Button& b) {
    auto root = b.root.get();
    auto grid = root ? root.try_as<wuxc::Grid>() : nullptr;
    if (!grid || grid.ColumnDefinitions().Size() == 0) return;
    auto column = grid.ColumnDefinitions().GetAt(0);
    auto width = column.Width();
    if (width.GridUnitType != wux::GridUnitType::Pixel) return;

    if (width.Value != b.appliedIconColumn) b.originalIconColumn = width.Value;
    auto padding = grid.Padding();
    double target = g_size.buttonWidth - padding.Left - padding.Right;
    if (width.Value != target) column.Width({target, wux::GridUnitType::Pixel});
    b.appliedIconColumn = target;
}

void ReleaseButton(Button& b) {
    b.sizeChanged.revoke();
    auto grid = b.root.get() ? b.root.get().try_as<wuxc::Grid>() : nullptr;
    if (!grid || b.originalIconColumn <= 0 || grid.ColumnDefinitions().Size() == 0) return;
    auto column = grid.ColumnDefinitions().GetAt(0);
    if (column.Width().Value == b.appliedIconColumn) {
        column.Width({b.originalIconColumn, wux::GridUnitType::Pixel});
    }
}

// Visible buttons in `parent`, where the taskbar laid them out.
struct Icon {
    wux::FrameworkElement element{nullptr};
    float left = 0, top = 0, width = 0, height = 0;
    float slotLeft = 0;  // margins included, for the taskbar's order
};

std::vector<Icon> GetIcons(wux::UIElement const& parent) {
    std::vector<Icon> icons;
    for (auto& b : *g_buttons) {
        auto el = b.element.get();
        if (!el || el.Visibility() != Visibility::Visible || el.ActualWidth() <= 0 ||
            wuxm::VisualTreeHelper::GetParent(el) != parent) {
            continue;
        }
        auto slot = wuxc::Primitives::LayoutInformation::GetLayoutSlot(el);
        auto margin = el.Margin();
        float x = slot.X + (float)margin.Left;
        float y = slot.Y + (float)margin.Top;
        // Recycled buttons are parked out of view.
        if (y < -el.ActualHeight() || y > el.ActualHeight()) continue;
        icons.push_back({el, x, y, (float)el.ActualWidth(), (float)el.ActualHeight(), slot.X});
    }
    return icons;
}

// Whether layout's moved any of them since they were measured. Each one's
// looked at, as two apps swapping places (dragged) move none on average.
bool IconsMoved(std::vector<Icon> const& icons) {
    for (auto& icon : icons) {
        Button* b = FindButton(icon.element);
        if (!b || !(std::fabs(icon.left + icon.width / 2 - b->rowCenter) < 0.25f)) return true;
    }
    return false;
}

// ---- Icon size ----
// Resizing the image, not scaling it, lets Windows draw it from full resolution.

void ApplyIconSize(wux::FrameworkElement const& el) {
    float size = g_size.icon;
    if (el.Width() != size) el.Width(size);  // NaN when unset, so this covers it
    if (el.Height() != size) el.Height(size);
}

void TrackIconImage(wux::FrameworkElement const& el) {
    Track(el, wux::FrameworkElement::WidthProperty(), ApplyIconSize);
    Track(el, wux::FrameworkElement::HeightProperty(), ApplyIconSize);
    ApplyIconSize(el);
}

// ---- Overlay icons ----
// An app's status badge, like a recording dot. Windows puts it at the top of the
// button, far above the icon in the taller dock, so magnifying would carry it
// off the taskbar. It goes on the icon's top-right corner instead, centered in
// the same cell and pushed out by margins.

void ApplyOverlayPlace(wux::FrameworkElement const& el) {
    double size = std::isnan(el.Width()) ? el.ActualWidth() : el.Width();
    double shift = std::max(0.0, (g_size.icon - size) / 2);
    if (el.HorizontalAlignment() != wux::HorizontalAlignment::Center) {
        el.HorizontalAlignment(wux::HorizontalAlignment::Center);
    }
    if (el.VerticalAlignment() != wux::VerticalAlignment::Center) {
        el.VerticalAlignment(wux::VerticalAlignment::Center);
    }
    wux::Thickness margin{2 * shift, 0, 0, 2 * shift};
    auto have = el.Margin();
    if (have.Left != margin.Left || have.Top != margin.Top || have.Right != margin.Right ||
        have.Bottom != margin.Bottom) {
        el.Margin(margin);
    }
}

void TrackOverlayIcon(wux::FrameworkElement const& el) {
    for (auto& dp : {wux::FrameworkElement::MarginProperty(),
                     wux::FrameworkElement::HorizontalAlignmentProperty(),
                     wux::FrameworkElement::VerticalAlignmentProperty()}) {
        Track(el, dp, ApplyOverlayPlace);
    }
    ApplyOverlayPlace(el);
}

// ---- Highlights, Start and the background ----
// Highlights are collapsed and also made transparent, as the taskbar animates
// their opacity.

void ApplyHighlightHidden(wux::FrameworkElement const& el) {
    if (el.Opacity() != 0) el.Opacity(0);
    if (el.Visibility() != Visibility::Collapsed) el.Visibility(Visibility::Collapsed);
}

void HideHighlight(wux::FrameworkElement const& el) {
    Track(el, wux::UIElement::OpacityProperty(), ApplyHighlightHidden);
    Track(el, wux::UIElement::VisibilityProperty(), ApplyHighlightHidden);
    ApplyHighlightHidden(el);
}

void ApplyStartHidden(wux::FrameworkElement const& el) {
    if (el.Visibility() != Visibility::Collapsed) {
        el.Visibility(Visibility::Collapsed);
        MarkPlatesDirty();
    }
}

// Hidden with "Hide Windows Start Button"; otherwise it's in the dock.
void UpdateStartHidden(wux::FrameworkElement const& button) {
    if (!IsStartButton(button)) return;
    auto dp = wux::UIElement::VisibilityProperty();
    if (!g_settings.hideStart) {
        if (FindOverride(button, dp)) {
            Release(button, dp);
            MarkPlatesDirty();
        }
        return;
    }
    Track(button, dp, ApplyStartHidden);
    ApplyStartHidden(button);
}

void ApplyCollapsed(wux::FrameworkElement const& el) {
    if (el.Visibility() != Visibility::Collapsed) el.Visibility(Visibility::Collapsed);
}

// Windows' own tooltip, replaced by the dock's labels. With the labels off, it's
// put back.
void HideStockToolTip(wux::FrameworkElement const& button) {
    auto value = wuxc::ToolTipService::GetToolTip(button);
    auto tip = value ? value.try_as<wuxc::ToolTip>() : nullptr;
    if (!tip) return;
    auto dp = wux::UIElement::VisibilityProperty();
    if (!g_settings.tooltips) {
        if (FindOverride(tip, dp)) Release(tip, dp);
        return;
    }
    if (FindOverride(tip, dp)) return;
    Track(tip, dp, ApplyCollapsed);
    ApplyCollapsed(tip);
}

// Opacity rather than Collapsed, so it still catches clicks on empty space.
void HideBackground(wux::FrameworkElement const& el) {
    if (el.Name() != L"BackgroundControl") return;
    Track(el, wux::UIElement::OpacityProperty());
    if (el.Opacity() != 0) el.Opacity(0);
}

// =============================================================================
// DOCK PLATE
// =============================================================================
// Behind each taskbar's icons: blur, color and edge, layered in a grid.

constexpr float kMaxBlur = 60;                  // Blur 50 = 30, like Windows' acrylic
constexpr float kEdgeHighlight = 0.7f;          // a light edge, and blank glows: this far to white
constexpr float kEdgeShadow = 0.7f;             // a dark edge: this far to black
constexpr float kDividerOpacity = 0.75f;        // of the dots' opacity
constexpr float kEdgeHighlightOpacity = 0.5f;   // a light edge, of the edges' opacity
constexpr float kEdgeMinOpacity = 0.20f;        // edge opacity at dock Opacity 0...
constexpr float kEdgeMaxOpacity = 0.65f;        // ...rising to this at kEdgeMaxOpacityAt
constexpr int kEdgeMaxOpacityAt = 30;
constexpr float kMarkDarkLightness = 0.05f;   // dividers and dots on a light dock
constexpr float kMarkLightLightness = 0.9f;   // dividers and dots on a dark dock
constexpr uint8_t kMarkAlphaOnLight = 200;
constexpr uint8_t kMarkAlphaOnDark = 125;
constexpr uint8_t kStandardEdgeAlphaOnLight = 135;

// ---- Colors ----

bool IsLightColor(uint8_t r, uint8_t g, uint8_t b) {
    return 0.299f * r + 0.587f * g + 0.114f * b > 140;
}

float Lightness(Color color) {
    int max = std::max({color.R, color.G, color.B});
    int min = std::min({color.R, color.G, color.B});
    return (max + min) / 510.0f;
}

// `color` with its HSL lightness moved by `delta`.
Color ShiftLightness(Color color, float delta);

// `color` with its HSL lightness moved by `delta`.
Color ShiftLightness(Color color, float delta) {
    float r = color.R / 255.0f, g = color.G / 255.0f, b = color.B / 255.0f;
    float max = std::max({r, g, b}), min = std::min({r, g, b});
    float l = (max + min) / 2, h = 0, s = 0;
    if (max != min) {
        float d = max - min;
        s = l > 0.5f ? d / (2 - max - min) : d / (max + min);
        if (max == r) h = (g - b) / d + (g < b ? 6 : 0);
        else if (max == g) h = (b - r) / d + 2;
        else h = (r - g) / d + 4;
        h /= 6;
    }
    l = std::clamp(l + delta, 0.0f, 1.0f);
    auto channel = [](float p, float q, float t) {
        if (t < 0) t += 1;
        if (t > 1) t -= 1;
        if (t < 1.0f / 6) return p + (q - p) * 6 * t;
        if (t < 1.0f / 2) return q;
        if (t < 2.0f / 3) return p + (q - p) * (2.0f / 3 - t) * 6;
        return p;
    };
    if (s == 0) {
        r = g = b = l;
    } else {
        float q = l < 0.5f ? l * (1 + s) : l + s - l * s;
        float p = 2 * l - q;
        r = channel(p, q, h + 1.0f / 3);
        g = channel(p, q, h);
        b = channel(p, q, h - 1.0f / 3);
    }
    auto byte = [](float v) { return (uint8_t)std::lround(std::clamp(v, 0.0f, 1.0f) * 255); };
    return {color.A, byte(r), byte(g), byte(b)};
}

// ---- Effects ----
// Described directly, as Explorer doesn't ship Win2D.

enum DOCK_EFFECT_PROPERTY_MAPPING : int {
    DOCK_EFFECT_PROPERTY_MAPPING_DIRECT = 1,
};

MIDL_INTERFACE("2FC57384-A068-44D7-A331-30982FCF7177")
IDockGraphicsEffectD2D1Interop : public IUnknown {
public:
    virtual HRESULT STDMETHODCALLTYPE GetEffectId(GUID* id) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetNamedPropertyMapping(
        LPCWSTR name, UINT* index, DOCK_EFFECT_PROPERTY_MAPPING* mapping) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetPropertyCount(UINT* count) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetProperty(UINT index, void** value) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetSource(UINT index, void** source) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetSourceCount(UINT* count) = 0;
};
__CRT_UUID_DECL(IDockGraphicsEffectD2D1Interop, 0x2fc57384, 0xa068, 0x44d7, 0xa3, 0x31, 0x30,
                0x98, 0x2f, 0xcf, 0x71, 0x77)

constexpr GUID kGaussianBlurId = {  // CLSID_D2D1GaussianBlur
    0x1feb6d69, 0x2fe6, 0x4ac9, {0x8c, 0x58, 0x1d, 0x7f, 0x93, 0xe7, 0xa6, 0xa5}};

class GaussianBlurEffect
    : public winrt::implements<GaussianBlurEffect, wge::IGraphicsEffect,
                               wge::IGraphicsEffectSource, IDockGraphicsEffectD2D1Interop> {
public:
    GaussianBlurEffect(float amount, wge::IGraphicsEffectSource const& source)
        : m_amount(amount), m_source(source) {}

    winrt::hstring Name() { return m_name; }
    void Name(winrt::hstring const& name) { m_name = name; }

    HRESULT STDMETHODCALLTYPE GetEffectId(GUID* id) override {
        *id = kGaussianBlurId;
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE GetNamedPropertyMapping(
        LPCWSTR name, UINT* index, DOCK_EFFECT_PROPERTY_MAPPING* mapping) override {
        if (_wcsicmp(name, L"BlurAmount") != 0) return E_INVALIDARG;
        *index = 0;
        *mapping = DOCK_EFFECT_PROPERTY_MAPPING_DIRECT;
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE GetPropertyCount(UINT* count) override {
        *count = 3;
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE GetProperty(UINT index, void** value) override {
        try {
            wf::IInspectable v;
            switch (index) {
                case 0: v = wf::PropertyValue::CreateSingle(m_amount); break;  // std. deviation
                case 1: v = wf::PropertyValue::CreateUInt32(1); break;         // balanced
                case 2: v = wf::PropertyValue::CreateUInt32(1); break;         // hard border
                default: return E_INVALIDARG;
            }
            *value = winrt::detach_abi(v.as<wf::IPropertyValue>());
            return S_OK;
        } catch (...) {
            return winrt::to_hresult();
        }
    }
    HRESULT STDMETHODCALLTYPE GetSource(UINT index, void** source) override {
        if (index != 0) return E_INVALIDARG;
        winrt::copy_to_abi(m_source, *source);
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE GetSourceCount(UINT* count) override {
        *count = 1;
        return S_OK;
    }

private:
    float m_amount;
    wge::IGraphicsEffectSource m_source;
    winrt::hstring m_name;
};

constexpr GUID kColorMatrixId = {  // CLSID_D2D1ColorMatrix
    0x921f03d6, 0x641c, 0x47df, {0x85, 0x2d, 0xb4, 0xbb, 0x61, 0x53, 0xae, 0x11}};

// Each color channel scaled by `scale` and moved by `offset`, then with
// `clamp` held between 0 and 1. Alpha is left alone.
class ColorMatrixEffect
    : public winrt::implements<ColorMatrixEffect, wge::IGraphicsEffect,
                               wge::IGraphicsEffectSource, IDockGraphicsEffectD2D1Interop> {
public:
    ColorMatrixEffect(float scale, float offset, bool clamp,
                      wge::IGraphicsEffectSource const& source)
        : m_clamp(clamp), m_source(source) {
        // 5x4, by input: R, G, B, A, then the offsets.
        m_matrix[0] = m_matrix[5] = m_matrix[10] = scale;
        m_matrix[15] = 1;
        m_matrix[16] = m_matrix[17] = m_matrix[18] = offset;
    }

    winrt::hstring Name() { return m_name; }
    void Name(winrt::hstring const& name) { m_name = name; }

    HRESULT STDMETHODCALLTYPE GetEffectId(GUID* id) override {
        *id = kColorMatrixId;
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE GetNamedPropertyMapping(LPCWSTR, UINT*,
                                                      DOCK_EFFECT_PROPERTY_MAPPING*) override {
        return E_INVALIDARG;
    }
    HRESULT STDMETHODCALLTYPE GetPropertyCount(UINT* count) override {
        *count = 3;
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE GetProperty(UINT index, void** value) override {
        try {
            wf::IInspectable v;
            switch (index) {
                case 0:
                    v = wf::PropertyValue::CreateSingleArray(
                        winrt::array_view<float const>(m_matrix, m_matrix + 20));
                    break;
                case 1: v = wf::PropertyValue::CreateUInt32(1); break;  // premultiplied
                case 2: v = wf::PropertyValue::CreateBoolean(m_clamp); break;
                default: return E_INVALIDARG;
            }
            *value = winrt::detach_abi(v.as<wf::IPropertyValue>());
            return S_OK;
        } catch (...) {
            return winrt::to_hresult();
        }
    }
    HRESULT STDMETHODCALLTYPE GetSource(UINT index, void** source) override {
        if (index != 0) return E_INVALIDARG;
        winrt::copy_to_abi(m_source, *source);
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE GetSourceCount(UINT* count) override {
        *count = 1;
        return S_OK;
    }

private:
    float m_matrix[20] = {};
    bool m_clamp;
    wge::IGraphicsEffectSource m_source;
    winrt::hstring m_name;
};

// ---- Squircle ----

// Apple's continuous corner, as PaintCode measured it: a near-circular arc eased
// into the straight edges by Béziers. Points are (along the edge in, along the
// edge out) from the corner, in radii. After the first, each three are a cubic
// curve; a straight line repeats its end.
constexpr float kCornerReach = 1.52866f;
constexpr float kCorner[16][2] = {
    {kCornerReach, 0},
    {1.08849f, 0}, {0.86841f, 0}, {0.66993f, 0.06550f},
    {0.66993f, 0.06550f}, {0.63149f, 0.07491f}, {0.63149f, 0.07491f},
    {0.37282f, 0.16906f}, {0.16906f, 0.37282f}, {0.07491f, 0.63149f},
    {0.07491f, 0.63149f}, {0.06550f, 0.66993f}, {0.06550f, 0.66993f},
    {0, 0.86841f}, {0, 1.08849f}, {0, kCornerReach},
};

// The largest corner radius up to `r` that fits a `w` x `h` box.
float SquircleRadius(float w, float h, float r) {
    return std::clamp(std::min(w, h) / 2 / kCornerReach, 0.0f, r);
}

// A closed outline: a start point, then cubic curves as three points each.
std::vector<wf::Point> Squircle(float x, float y, float w, float h, float rx, float ry) {
    struct Corner { float x, y, inX, inY, outX, outY; };
    Corner corners[] = {{x + w, y, -1, 0, 0, 1}, {x + w, y + h, 0, -1, -1, 0},
                        {x, y + h, 1, 0, 0, -1}, {x, y, 0, 1, 1, 0}};
    std::vector<wf::Point> points;
    for (auto& c : corners) {
        for (int i = 0; i < 16; i++) {
            auto [in, out] = kCorner[i];
            wf::Point point{c.x + (in * c.inX + out * c.outX) * rx,
                            c.y + (in * c.inY + out * c.outY) * ry};
            if (i == 0 && !points.empty()) {
                points.insert(points.end(), {points.back(), point});  // the straight edge
            }
            points.push_back(point);
        }
    }
    return points;
}

wuxm::PathGeometry SquircleGeometry(std::initializer_list<std::vector<wf::Point>> outlines) {
    wuxm::PathGeometry geometry;
    geometry.FillRule(wuxm::FillRule::EvenOdd);
    for (auto& points : outlines) {
        wuxm::PolyBezierSegment curves;
        for (size_t i = 1; i < points.size(); i++) curves.Points().Append(points[i]);
        wuxm::PathFigure figure;
        figure.StartPoint(points[0]);
        figure.IsClosed(true);
        figure.Segments().Append(curves);
        geometry.Figures().Append(figure);
    }
    return geometry;
}

MIDL_INTERFACE("0657AF73-53FD-47CF-84FF-C8492D2A80A3")
IDockGeometrySource2DInterop : public IUnknown {
public:
    virtual HRESULT STDMETHODCALLTYPE GetGeometry(ID2D1Geometry** value) = 0;
    virtual HRESULT STDMETHODCALLTYPE TryGetGeometryUsingFactory(ID2D1Factory* factory,
                                                                 ID2D1Geometry** value) = 0;
};
__CRT_UUID_DECL(IDockGeometrySource2DInterop, 0x0657af73, 0x53fd, 0x47cf, 0x84, 0xff, 0xc8,
                0x49, 0x2d, 0x2a, 0x80, 0xa3)

winrt::com_ptr<ID2D1Factory> g_d2d;

struct GeometrySource
    : winrt::implements<GeometrySource, wg::IGeometrySource2D, IDockGeometrySource2DInterop> {
    winrt::com_ptr<ID2D1Geometry> geometry;
    HRESULT STDMETHODCALLTYPE GetGeometry(ID2D1Geometry** value) override {
        geometry.copy_to(value);
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE TryGetGeometryUsingFactory(ID2D1Factory*,
                                                         ID2D1Geometry** value) override {
        *value = nullptr;
        return E_NOTIMPL;
    }
};

// A Squircle outline as a Direct2D path, from `factory`.
winrt::com_ptr<ID2D1PathGeometry> SquircleD2D(ID2D1Factory* factory,
                                             std::vector<wf::Point> const& points) {
    winrt::com_ptr<ID2D1PathGeometry> path;
    winrt::check_hresult(factory->CreatePathGeometry(path.put()));
    winrt::com_ptr<ID2D1GeometrySink> sink;
    winrt::check_hresult(path->Open(sink.put()));
    auto at = [&](size_t i) { return D2D1_POINT_2F{points[i].X, points[i].Y}; };
    sink->BeginFigure(at(0), D2D1_FIGURE_BEGIN_FILLED);
    for (size_t i = 1; i + 2 < points.size(); i += 3) sink->AddBezier({at(i), at(i + 1), at(i + 2)});
    sink->EndFigure(D2D1_FIGURE_END_CLOSED);
    winrt::check_hresult(sink->Close());
    return path;
}

// Direct2D's factory, made the first time it's needed.
ID2D1Factory* D2DFactory() {
    if (!g_d2d) {
        winrt::check_hresult(D2D1CreateFactory(D2D1_FACTORY_TYPE_MULTI_THREADED,
                                               __uuidof(ID2D1Factory), nullptr, g_d2d.put_void()));
    }
    return g_d2d.get();
}

// The same outline for composition, which takes it through Direct2D.
wuc::CompositionPath SquirclePath(std::vector<wf::Point> const& points) {
    auto source = winrt::make_self<GeometrySource>();
    source->geometry = SquircleD2D(D2DFactory(), points);
    return wuc::CompositionPath(source.as<wg::IGeometrySource2D>());
}

// ---- Blur ----

// How bright what's behind can show: no brighter than `ceiling`, no darker
// than `floor`, each color channel 0-1. Neither, at 1 and 0.
struct ToneLimit {
    float ceiling = 1, floor = 0;
    bool Limits() const { return ceiling < 1 || floor > 0; }
    bool operator==(ToneLimit const&) const = default;
};

// A brightness limit in percent (100 for none), for what's drawn over it: a
// ceiling under light marks or text; under dark ones, a floor as far from black
// as the ceiling is from white.
ToneLimit ToneFor(int limitPercent, bool lightInk) {
    ToneLimit tone;
    float limit = limitPercent / 100.0f;
    if (limit >= 1) return tone;
    if (lightInk) tone.ceiling = limit;
    else tone.floor = 1 - limit;
    return tone;
}

// What's behind `host`, blurred by `amount`, held within `tone`, and clipped to
// the dock's shape, which is returned for ShapeSurface. Nothing, if it does
// neither. Holding a channel under a ceiling c takes two steps: scaled by 1/c
// and clipped at 1, then scaled back by c. Above a floor, the same from the
// other end.
wuc::CompositionPathGeometry SetBlurVisual(wux::UIElement const& host, float amount,
                                           ToneLimit tone = {}) {
    if (amount <= 0 && !tone.Limits()) {
        wuxh::ElementCompositionPreview::SetElementChildVisual(host, nullptr);
        return nullptr;
    }
    auto hostVisual = wuxh::ElementCompositionPreview::GetElementVisual(host);
    auto compositor = hostVisual.Compositor();

    wge::IGraphicsEffectSource source = wuc::CompositionEffectSourceParameter(L"Backdrop");
    wge::IGraphicsEffect effect{nullptr};
    auto chain = [&](wge::IGraphicsEffect const& next) {
        effect = next;
        source = next.as<wge::IGraphicsEffectSource>();
    };
    if (amount > 0) chain(winrt::make<GaussianBlurEffect>(amount, source));
    if (tone.ceiling < 1) {
        float c = std::max(tone.ceiling, 0.01f);
        chain(winrt::make<ColorMatrixEffect>(1 / c, 0.0f, true, source));
        chain(winrt::make<ColorMatrixEffect>(c, 0.0f, false, source));
    }
    if (tone.floor > 0) {
        float room = std::max(1 - tone.floor, 0.01f);  // from the floor up to white
        chain(winrt::make<ColorMatrixEffect>(-1 / room, 1 / room, true, source));
        chain(winrt::make<ColorMatrixEffect>(-room, 1.0f, false, source));
    }
    auto brush = compositor.CreateEffectFactory(effect).CreateBrush();
    brush.SetSourceParameter(L"Backdrop", compositor.CreateBackdropBrush());

    auto sprite = compositor.CreateSpriteVisual();
    sprite.Brush(brush);
    auto size = compositor.CreateExpressionAnimation(L"host.Size");
    size.SetReferenceParameter(L"host", hostVisual);
    sprite.StartAnimation(L"Size", size);
    auto shape = compositor.CreatePathGeometry();
    sprite.Clip(compositor.CreateGeometricClip(shape));

    wuxh::ElementCompositionPreview::SetElementChildVisual(host, sprite);
    return shape;
}

// ---- Surface ----
// A background like the dock's, as layers in a grid: blur, color, and a border:
// a line, or the MacOS Style border's lines and glows. The dock's plate has
// one, and so does the tray.

struct Surface {
    wuxc::Grid root{nullptr};
    wuxc::Border blurHost{nullptr};
    wuxs::Path fill{nullptr}, edgeInner{nullptr}, edgeOuter{nullptr};
    // The MacOS Style border, drawn as a picture in three slices (see MAC
    // BORDER): its ends, and its middle stretched between them.
    wuxc::Grid mac{nullptr};
    wuxc::Image macLeft{nullptr}, macMiddle{nullptr}, macRight{nullptr};
    bool macShown = false;
    Color macFill{};               // the background it's drawn for
    uint8_t macLineAlpha = 0;      // its dark lines'; the light ones are half
    std::wstring macDrawn;         // what it was last drawn for
    wuc::CompositionPathGeometry blurShape{nullptr};
    float appliedBlur = -1;
    ToneLimit appliedTone;
    // Liquid Glass, drawn in blurHost in place of the blur (the dock's only;
    // see LIQUID GLASS).
    bool glassShown = false;
    wuc::CompositionPathGeometry glassShape{nullptr};  // its clip
};

// Its layers in drawing order, in a new grid, unrounded so the right edge
// doesn't wobble. Not hit-testable. The caller places s.root.
void BuildSurface(Surface& s) {
    s.root = wuxc::Grid();
    s.blurHost = wuxc::Border();
    s.fill = wuxs::Path();
    s.edgeInner = wuxs::Path();
    s.edgeOuter = wuxs::Path();
    s.root.IsHitTestVisible(false);
    s.root.UseLayoutRounding(false);

    s.mac = wuxc::Grid();
    s.mac.Visibility(Visibility::Collapsed);
    for (auto width : {wux::GridLengthHelper::Auto(), wux::GridLengthHelper::FromValueAndType(
                                                          1, wux::GridUnitType::Star),
                       wux::GridLengthHelper::Auto()}) {
        wuxc::ColumnDefinition column;
        column.Width(width);
        s.mac.ColumnDefinitions().Append(column);
    }
    int i = 0;
    for (auto* image : {&s.macLeft, &s.macMiddle, &s.macRight}) {
        *image = wuxc::Image();
        image->Stretch(wuxm::Stretch::Fill);
        image->UseLayoutRounding(false);
        wuxc::Grid::SetColumn(*image, i++);
        s.mac.Children().Append(*image);
    }

    for (wux::FrameworkElement layer : std::initializer_list<wux::FrameworkElement>{
             s.blurHost, s.fill, s.mac, s.edgeInner, s.edgeOuter}) {
        layer.UseLayoutRounding(false);
        s.root.Children().Append(layer);
    }
}

void RemoveSurfaceBlur(Surface& s) {
    if (s.blurHost) {
        Try([&] { wuxh::ElementCompositionPreview::SetElementChildVisual(s.blurHost, nullptr); });
    }
    s.blurShape = nullptr;
    s.appliedBlur = -1;
    s.appliedTone = {};
    s.glassShown = false;  // its visual went with the blur's
}

// The color behind `look`'s icons, and whether it's light. With System, or no
// background, light follows `systemLight`. With no background, the color it
// would have, which its edges and glow are drawn from.
Color LookFill(Look const& look, bool systemLight, bool& light) {
    uint8_t alpha = (uint8_t)(look.opacity * 255 / 100);
    light = look.background == Background::Light;
    if (look.background == Background::System || look.background == Background::None) {
        light = systemLight;
    }
    if (look.background == Background::Custom) {
        auto [r, g, b] = look.color;
        light = IsLightColor(r, g, b);
        return Color{alpha, r, g, b};
    }
    return light ? Color{alpha, 0xCC, 0xCC, 0xCC} : Color{alpha, 0x33, 0x33, 0x33};
}

// Dividers and dots: dark on a light background, light on a dark one.
Color MarkColor(Color fill, bool light) {
    Color mark = ShiftLightness(
        fill, (light ? kMarkDarkLightness : kMarkLightLightness) - Lightness(fill));
    mark.A = light ? kMarkAlphaOnLight : kMarkAlphaOnDark;
    return mark;
}

// Frosted glass, in `fill` (from LookFill), with `look`'s border; what's seen
// through it held within `tone`.
void ApplySurfaceLook(Surface& s, Look const& look, Color fill, bool light,
                      ToneLimit tone = {}) {
    bool none = look.background == Background::None;
    s.fill.Fill(none ? nullptr : wuxm::SolidColorBrush(fill));
    s.edgeInner.Fill(nullptr);
    s.edgeOuter.Fill(nullptr);
    s.macShown = look.border == Border::Mac;
    s.mac.Visibility(s.macShown ? Visibility::Visible : Visibility::Collapsed);
    auto scaled = [](uint8_t alpha, int percent) {
        return (uint8_t)std::lround(alpha * percent / 100.0f);
    };

    if (look.border == Border::Standard) {
        // A solid edge in the dividers' color, softer on a light background.
        Color line = MarkColor(fill, light);
        if (light) line.A = kStandardEdgeAlphaOnLight;
        line.A = scaled(line.A, look.borderOpacity);
        s.edgeInner.Fill(wuxm::SolidColorBrush(line));
    } else if (look.border == Border::Custom) {
        auto [r, g, b] = look.borderColor;
        s.edgeInner.Fill(wuxm::SolidColorBrush(Color{scaled(255, look.borderOpacity), r, g, b}));
    } else if (look.border == Border::Mac) {
        // Drawn as the surface is shaped (see MAC BORDER), its lines stronger
        // on a more opaque background.
        float t = std::clamp((float)look.opacity / kEdgeMaxOpacityAt, 0.0f, 1.0f);
        s.macLineAlpha =
            (uint8_t)std::lround(255 * (kEdgeMinOpacity + (kEdgeMaxOpacity - kEdgeMinOpacity) * t));
        s.macFill = fill;
    }

    float blur = none ? 0 : look.blur * kMaxBlur / 100;
    if (s.glassShown) return;  // Liquid Glass is in its place
    if (blur != s.appliedBlur || !(tone == s.appliedTone)) {
        s.appliedBlur = blur;
        s.appliedTone = tone;
        s.blurShape = nullptr;
        Try([&] { s.blurShape = SetBlurVisual(s.blurHost, blur, tone); }, L"Blur");
    }
}

void DrawMacBorder(Surface& s, float w, float h, float r, float reference);

// The squircle at `w` x `h` with corners up to `r`, and its border. The
// MacOS Style border's glows are sized by `reference`, a height.
void ShapeSurface(Surface& s, Look const& look, float w, float h, float r, float reference) {
    if (!s.root || w <= 0 || h <= 0) return;
    r = SquircleRadius(w, h, r);
    auto outline = Squircle(0, 0, w, h, r, r);

    s.fill.Data(SquircleGeometry({outline}));
    s.edgeInner.Data(nullptr);
    s.edgeOuter.Data(nullptr);
    if (look.border == Border::Standard || look.border == Border::Custom) {
        // A line inside all four sides, as wide as set.
        float width = std::min((float)look.borderWidth, std::min(w, h) / 2);
        float inner = std::max(0.0f, r - width);
        if (width > 0) {
            s.edgeInner.Data(SquircleGeometry(
                {outline, Squircle(width, width, w - 2 * width, h - 2 * width, inner, inner)}));
        }
    } else if (look.border == Border::Mac) {
        Try([&] { DrawMacBorder(s, w, h, r, reference); }, L"Mac border");
    }
    if (s.blurShape) Try([&] { s.blurShape.Path(SquirclePath(outline)); }, L"Blur shape");
    if (s.glassShape) Try([&] { s.glassShape.Path(SquirclePath(outline)); }, L"Glass shape");
}

// ---- Plate ----

// A divider between icons, after `after` (or, before the Recycle Bin, the last).
struct Divider {
    wuxc::Border element{nullptr};
    winrt::weak_ref<wux::FrameworkElement> after;
    float shift = 0;          // as applied: magnification's, and its slide
    float magnified = 0;      // magnification's
    float x = NAN;            // in the panel, as last placed
    Slide slide;
};

// A dock's Liquid Glass (see LIQUID GLASS): where it's drawn, and from what.
struct GlassPlate {
    HWND window = nullptr;          // the taskbar it's in, once known
    ULONGLONG lookedAt = 0;         // when that was last looked for
    HMONITOR monitor = nullptr;     // the screen under it
    wuc::CompositionDrawingSurface surface{nullptr};  // in blurHost, in place of the blur
    wuc::SpriteVisual sprite{nullptr};
    SIZE surfaceSize{};
    winrt::com_ptr<ID3D11Texture2D> behind;  // the screen behind it and a margin, at least
    winrt::com_ptr<ID2D1Bitmap1> behindBitmap;
    winrt::com_ptr<ID2D1Bitmap1> map;        // where each pixel takes its color from
    SIZE mapCapacity{};
    std::vector<float> mapPixels;
    float mapScale = 0;
    std::array<float, 8> mapFor{};           // the shape it was built for
    std::array<float, 4> drawnAt{};          // on screen, as last drawn: x, y, width, height
    uint64_t drawnFrame = 0;                 // the picture it was last drawn from
    bool dirty = true;                       // to be drawn again, even where it is
};

struct Plate {
    winrt::weak_ref<wux::UIElement> row;           // the icons' parent
    winrt::weak_ref<wuxc::Panel> panel;            // the row's parent, which holds the plate
    winrt::weak_ref<wux::FrameworkElement> frame;  // the taskbar
    Surface surface;
    float baseLeft = 0, baseWidth = 0;  // when nothing is magnified
    float left = -1, width = -1;        // last applied
    float top = 0;
    float offsetY = 0;                  // how far the icons are moved down
    float originX = 0, originY = 0;     // the row's top-left corner in the panel
    size_t iconCount = 0;               // last measured
    Color dotColor{};
    wux::FrameworkElement::SizeChanged_revoker rowSizeChanged, panelSizeChanged;
    wux::FrameworkElement::LayoutUpdated_revoker panelLayoutUpdated;
    float appliedExtraLeft = 0, appliedExtra = 0;  // magnification's, as last applied
    // Its ends and the bin, sliding (see Sliding) from where they were.
    bool measured = false;
    size_t layoutCount = 0;  // its icons, as last measured
    float lastIcon = 0;      // their size then
    float lastLeft = 0, lastRight = 0, lastTrash = 0;
    Slide slideLeft, slideRight, slideTrash;
    float trashScale = 1, trashShift = 0, trashGapShift = 0;  // magnification's
    wux::FrameworkElement::ActualThemeChanged_revoker panelThemeChanged;

    // The Recycle Bin and its divider, in the panel past the last button.
    wuxc::Grid trash{nullptr};
    wuxm::CompositeTransform trashTransform{nullptr};  // its magnification, see SetTrashScale
    wuxc::Image trashImage{nullptr};
    wuxm::ScaleTransform trashImageScale{nullptr};  // a full bin's image, if bigger or smaller
    wuxc::Border trashMenuAnchor{nullptr};  // at the taskbar's top edge, where jump lists open
    wuxc::Border divider{nullptr};          // none without "Divider Before the Recycle Bin"
    wux::UIElement::Tapped_revoker trashTapped;
    wux::UIElement::RightTapped_revoker trashRightTapped;
    wux::UIElement::DragEnter_revoker trashDragEnter;
    wux::UIElement::DragOver_revoker trashDragOver;
    wux::UIElement::Drop_revoker trashDrop;
    float trashCenter = 0;  // in the row
    wux::Thickness rowMargin{};  // the taskbar's own, before the bin's room
    float rowRoom = 0;
    int trashState = -2;    // icon shown: -1 unknown, 0 empty, 1 full

    // Between icons: after Start, Task View and File Explorer, and the custom ones.
    std::vector<Divider> dividers;
    Color dividerColor{};

    float hideY = 0;     // auto-hide's slide, applied to the panel

    // The largest icons it has room for (see FITTING): 0 until it's measured at
    // the size it's shown at. And where it was last measured.
    float fitIcon = 0;
    float lastCenter0 = -1e6f, lastWidth = -1;
    int unsettled = 0;

    GlassPlate glass;
};

[[clang::no_destroy]] std::optional<std::list<Plate>> g_plates{std::in_place};

std::vector<wux::UIElement> PlateParts(Plate const& p) {
    std::vector<wux::UIElement> parts{p.surface.root, p.trash, p.divider};
    for (auto& d : p.dividers) parts.push_back(d.element);
    return parts;
}

Plate* GetRowPlate(wux::DependencyObject const& row) {
    if (!row || !g_plates) return nullptr;
    for (auto& p : *g_plates) {
        if (p.row.get() == row) return &p;
    }
    return nullptr;
}

float GetRowOffsetY(wux::DependencyObject const& row) {
    Plate* p = GetRowPlate(row);
    return p ? p->offsetY : 0;
}

void ColorDots(Plate& p);

// The squircle at the dock's current width.
void ShapePlate(Plate& p) {
    float w = p.width > 0 ? p.width : p.baseWidth;
    ShapeSurface(p.surface, g_settings.dockLook, w, g_size.dockHeight, g_size.dockRadius,
                 g_size.dockHeight);
}

bool SystemIsLight(wux::FrameworkElement const& el) {
    return el && el.ActualTheme() == wux::ElementTheme::Light;
}

// Frosted glass. Dividers and dots are dark on a light dock, light on a dark one.
// With Cap Per-Pixel Brightness on, what shows through is held no brighter than
// the limit, whatever the dock's color.
void ApplyPlateLook(Plate& p) {
    auto& look = g_settings.dockLook;
    bool light;
    Color fill = LookFill(look, SystemIsLight(p.panel.get()), light);
    Color mark = MarkColor(fill, light);
    p.dividerColor = mark;
    p.dividerColor.A = (uint8_t)std::lround(mark.A * kDividerOpacity);
    if (p.divider) p.divider.Background(wuxm::SolidColorBrush(p.dividerColor));
    for (auto& d : p.dividers) {
        if (d.element) d.element.Background(wuxm::SolidColorBrush(p.dividerColor));
    }
    p.dotColor = mark;
    ColorDots(p);
    ApplySurfaceLook(p.surface, look, fill, light,
                     ToneFor(g_settings.dockBrightnessLimit, true));  // always a ceiling
    ShapePlate(p);
}

// Lays `el` out from the panel's top-left corner, positioned by its margin.
void PlaceInPanel(wuxc::Panel const& panel, wux::FrameworkElement const& el) {
    el.HorizontalAlignment(wux::HorizontalAlignment::Left);
    el.VerticalAlignment(wux::VerticalAlignment::Top);
    el.Visibility(Visibility::Collapsed);
    if (panel.try_as<wuxc::Grid>()) {
        wuxc::Grid::SetRowSpan(el, 100);
        wuxc::Grid::SetColumnSpan(el, 100);
    }
}

// Adds `el` right after the icon row, so it's drawn above it, or right before
// it, so it's drawn beneath it (still above the plate).
bool InsertBesideRow(wuxc::Panel const& panel, wux::UIElement const& row,
                     wux::UIElement const& el, bool above = true) {
    uint32_t index = 0;
    if (!panel.Children().IndexOf(row, index)) return false;
    panel.Children().InsertAt(above ? index + 1 : index, el);
    return true;
}

wuxc::Border AddDivider(wuxc::Panel const& panel, wux::UIElement const& row) {
    wuxc::Border divider;
    PlaceInPanel(panel, divider);
    divider.IsHitTestVisible(false);
    divider.UseLayoutRounding(false);  // allows a fraction of a pixel
    divider.Width(kDividerWidth);
    divider.Height(std::max(1.0f, g_size.dockHeight - 2 * DividerInset()));
    return InsertBesideRow(panel, row, divider) ? divider : nullptr;
}

// =============================================================================
// APP ICONS
// =============================================================================
// File Explorer and any other app can show the user's own icon, and every app a
// squircle tile, as on a Mac. The taskbar reuses buttons and sets new icons, so
// a replacement follows along, keeping the taskbar's own icon to put back. Both
// are drawn bigger than their box, so their artwork matches other icons and
// their shadows spill past.

// Custom: the user's own icon for the app, from "App Icons". Plain: the
// taskbar's own icon, replaced only if it came back too small (see
// Undersized), with "Use High Resolution Icons" on and squircles off.
enum class IconLook { Stock, Finder, Custom, Squircle, Plain };

// What a bitmap loaded from, if it's a file or an address; empty otherwise.
std::wstring UriText(wuxm::ImageSource const& source) {
    auto bitmap = source ? source.try_as<wuxm::Imaging::BitmapImage>() : nullptr;
    auto uri = bitmap ? bitmap.UriSource() : nullptr;
    return uri ? std::wstring(uri.AbsoluteUri()) : std::wstring();
}

// Calls `changed` when the taskbar loads another icon into a bitmap it already
// has, as it can when an app's windows open or close, without setting it on
// the Image again: as it opens (decoded), or as its file or address changes.
class StockWatch {
public:
    StockWatch() = default;
    StockWatch(StockWatch const&) = delete;
    StockWatch& operator=(StockWatch const&) = delete;
    ~StockWatch() { Stop(); }

    void Watch(wuxm::ImageSource const& source, std::function<void(wf::IInspectable const&)> changed) {
        Stop();
        auto bitmap = source ? source.try_as<wuxm::Imaging::BitmapImage>() : nullptr;
        if (!bitmap) return;
        bitmap_ = winrt::make_weak(bitmap);
        opened_ = bitmap.ImageOpened(
            winrt::auto_revoke,
            [changed](wf::IInspectable const& sender, wux::RoutedEventArgs const&) {
                if (!g_unloading) changed(sender);
            });
        uriToken_ = bitmap.RegisterPropertyChangedCallback(
            wuxm::Imaging::BitmapImage::UriSourceProperty(),
            [changed](wux::DependencyObject const& sender, wux::DependencyProperty const&) {
                if (!g_unloading) changed(sender);
            });
    }

    void Stop() {
        opened_.revoke();
        if (uriToken_) {
            if (auto bitmap = bitmap_.get()) {
                try {
                    bitmap.UnregisterPropertyChangedCallback(
                        wuxm::Imaging::BitmapImage::UriSourceProperty(), uriToken_);
                } catch (...) {
                }
            }
        }
        uriToken_ = 0;
        bitmap_ = nullptr;
    }

private:
    winrt::weak_ref<wuxm::Imaging::BitmapImage> bitmap_;
    wuxm::Imaging::BitmapImage::ImageOpened_revoker opened_;
    int64_t uriToken_ = 0;
};

// For the icon of a button the taskbar's given to another app (see UpdateAppIcon).
constexpr auto kNewAppIconWait = std::chrono::milliseconds(300);
// The longest a new app's icon is kept out of sight while its tile's made.
constexpr auto kHideNewIconFor = std::chrono::milliseconds(5000);

struct IconSwap {
    winrt::weak_ref<wuxc::Image> image;
    winrt::weak_ref<wux::FrameworkElement> button;
    IconLook look = IconLook::Stock;
    int custom = -1;                   // Custom: its entry in "App Icons"
    wuxm::ImageSource stock{nullptr};  // the taskbar's latest
    wuxm::ImageSource shown{nullptr};  // what replaces it, once ready
    wuxm::ScaleTransform transform{nullptr};  // the mod's, while a replacement shows
    wf::IAsyncInfo render{nullptr};           // drawing the icon to make a tile from
    bool rendering = false;
    int generation = 0;  // up when a drawing in progress is of an icon since replaced
    bool retry = false;  // drawn again on the retry timer, at `retryAt`
    std::chrono::steady_clock::time_point retryAt{};
    int retries = 0;
    bool renderParent = false;  // drawing the icon alone was refused: what holds it is drawn
    bool checked = false;       // Plain: its pixels looked at, for this icon
    std::wstring tileUri;       // what the taskbar's icon loaded from, as its tile was made
    std::wstring appId;         // the app its button was for, as last processed
    std::chrono::steady_clock::time_point waitUntil{};  // for a new app's icon (see UpdateAppIcon)
    winrt::weak_ref<wux::UIElement> hidden;  // what holds it, while its tile's made (HideTillMade)
    std::chrono::steady_clock::time_point hiddenUntil{};
    StockWatch watch;           // the taskbar's icon, loading anew
};

// Whether its replacement is still to be made from the taskbar's icon's pixels.
bool NeedsPixels(IconSwap const& s) {
    return (s.look == IconLook::Squircle && !s.shown) || (s.look == IconLook::Plain && !s.checked);
}

// What was made from its icon dropped, along with any drawing of it still in
// progress, to be made again.
void ResetSwap(IconSwap& s) {
    if (s.render) Try([&] { s.render.Cancel(); });
    s.render = nullptr;
    s.rendering = false;
    s.generation++;
    s.shown = nullptr;
    s.tileUri.clear();
    s.retry = false;
    s.retries = 0;
    s.renderParent = false;
    s.checked = false;
    s.waitUntil = {};
}

extern bool g_iconsSettling;
void ArmSquircleRetry();

// ---- New apps' icons out of sight till their tiles are made ----
// Rather than the taskbar's own icon first, then the tile. What holds the icon
// is hidden, not the icon: a tile's made from a drawing of the icon, which
// hiding it would leave blank. If drawing the icon alone is refused, what holds
// it is drawn instead, and what holds that is hidden.

wux::UIElement IconHolder(IconSwap const& s, wuxc::Image const& image) {
    auto parent = wuxm::VisualTreeHelper::GetParent(image).try_as<wux::UIElement>();
    if (!parent || !s.renderParent) return parent;
    return wuxm::VisualTreeHelper::GetParent(parent).try_as<wux::UIElement>();
}

void ShowIconAgain(IconSwap& s) {
    if (auto holder = s.hidden.get()) {
        Try([&] { wuxh::ElementCompositionPreview::GetElementVisual(holder).Opacity(1); });
    }
    s.hidden = nullptr;
    s.hiddenUntil = {};
}

// Hidden till its tile's made (or, for a plain icon, till it's been looked
// at), for kHideNewIconFor at most. Not as the dock starts, when every icon
// waits for the rest to settle (see WaitForIconsToSettle).
void HideTillMade(IconSwap& s, wuxc::Image const& image) {
    if (g_iconsSettling || !NeedsPixels(s)) return;
    auto holder = IconHolder(s, image);
    if (!holder || s.hidden.get() == holder) return;
    auto until = s.hidden.get() ? s.hiddenUntil
                                : std::chrono::steady_clock::now() + kHideNewIconFor;
    ShowIconAgain(s);  // what held it before, if it's moved
    wuxh::ElementCompositionPreview::GetElementVisual(holder).Opacity(0);
    s.hidden = winrt::make_weak(holder);
    s.hiddenUntil = until;
    ArmSquircleRetry();
}

// ---- Other apps' icons ----
// Each entry in "App Icons" names an app by its ID (Ctrl+I copies it: see INFO
// CARDS), its name as the dock shows it, or its .exe. A button is for an app
// ID, so that's matched first, then the name, then the .exe, which takes
// finding: Windows makes an app's ID from its .exe's path when it hasn't one of
// its own, Start's shortcut to it points at one, and its windows run from one.

std::wstring AppName(wux::FrameworkElement const& button);
std::wstring ButtonAppId(wux::FrameworkElement const& button);

// The path in an app ID Windows made from a file's path, for an app without an
// ID of its own: the path, or a known folder's ID and the path within it.
// Empty for any other ID.
std::wstring AppIdPath(std::wstring const& appId) {
    std::wstring path;
    if (appId.size() > 38 && appId[0] == L'{' && appId[37] == L'}') {
        GUID folder;
        PWSTR folderPath = nullptr;
        // Not verified: that would check a redirected folder on its server.
        if (SUCCEEDED(CLSIDFromString(appId.substr(0, 38).c_str(), &folder)) &&
            SUCCEEDED(SHGetKnownFolderPath(folder, KF_FLAG_DONT_VERIFY, nullptr, &folderPath))) {
            path = folderPath + appId.substr(38);
        }
        CoTaskMemFree(folderPath);
    } else if (appId.find(L":\\") != std::wstring::npos || appId.rfind(L"\\\\", 0) == 0) {
        path = appId;
    }
    return path;
}

std::wstring_view FileName(std::wstring_view path) {
    size_t slash = path.find_last_of(L"\\/");
    return slash == path.npos ? path : path.substr(slash + 1);
}

// IShellItem2, IPropertyStore and the properties read here, without linking
// uuid.lib.
constexpr GUID kIShellItem2Id = {
    0x7e9fb0d3, 0x919f, 0x4307, {0xab, 0x2e, 0x9b, 0x18, 0x60, 0x31, 0x0c, 0x93}};
constexpr GUID kIPropertyStoreId = {
    0x886d8eeb, 0x8cf2, 0x4446, {0x8d, 0x02, 0xcd, 0xba, 0x1d, 0xbd, 0xcf, 0x99}};
constexpr PROPERTYKEY kLinkTargetKey = {  // PKEY_Link_TargetParsingPath
    {0xb9b4b3fc, 0x2b51, 0x4a42, {0xb5, 0xd8, 0x32, 0x41, 0x46, 0xaf, 0xcf, 0x25}}, 2};
constexpr PROPERTYKEY kAppIdKey = {  // PKEY_AppUserModel_ID
    {0x9f4c2855, 0x9f79, 0x4b39, {0xa8, 0xd0, 0xe1, 0xd4, 0x2d, 0xe1, 0xd5, 0xf3}}, 5};

// The .exe Start's shortcut to the app points at, if it's an .exe.
std::wstring ShortcutExe(std::wstring const& appId) {
    winrt::com_ptr<IShellItem2> item;
    if (FAILED(SHCreateItemFromParsingName((L"shell:AppsFolder\\" + appId).c_str(), nullptr,
                                           kIShellItem2Id, item.put_void()))) {
        return {};
    }
    PWSTR target = nullptr;
    std::wstring exe;
    if (SUCCEEDED(item->GetString(kLinkTargetKey, &target)) && target &&
        EndsWithNoCase(target, L".exe")) {
        exe = target;
    }
    CoTaskMemFree(target);
    return exe;
}

// The app ID a window was given, if it was given one.
std::wstring WindowAppId(HWND w) {
    winrt::com_ptr<IPropertyStore> store;
    if (FAILED(SHGetPropertyStoreForWindow(w, kIPropertyStoreId, store.put_void()))) return {};
    PROPVARIANT value;
    PropVariantInit(&value);
    std::wstring id;
    if (SUCCEEDED(store->GetValue(kAppIdKey, &value)) && value.vt == VT_LPWSTR && value.pwszVal) {
        id = value.pwszVal;
    }
    PropVariantClear(&value);
    return id;
}

std::wstring ProcessPath(HANDLE process) {
    WCHAR path[MAX_PATH];
    DWORD size = ARRAYSIZE(path);
    return QueryFullProcessImageNameW(process, 0, path, &size) ? std::wstring(path, size)
                                                               : std::wstring();
}

// The apps the open windows are for, and their .exes, looked at again at most
// every few seconds: windows given an app ID, and windows of a Store app's own
// process. A Store app's window can be a frame shared by all of them
// (ApplicationFrameHost.exe), whose .exe isn't the app's: it's left out.
struct WindowApp {
    std::wstring appId, exe;
};
constexpr auto kWindowAppsAgain = std::chrono::seconds(5);
std::vector<WindowApp> g_windowApps;
std::chrono::steady_clock::time_point g_windowAppsAt{};

void LookAtWindows(bool now) {
    auto time = std::chrono::steady_clock::now();
    if (!now && g_windowAppsAt != std::chrono::steady_clock::time_point{} &&
        time - g_windowAppsAt < kWindowAppsAgain) {
        return;
    }
    g_windowAppsAt = time;
    struct Process {
        DWORD pid;
        std::wstring storeAppId, exe;
    };
    struct Search {
        std::vector<WindowApp> found;
        std::vector<Process> processes;
    } search;
    EnumWindows(
        [](HWND w, LPARAM param) -> BOOL {
            auto& s = *(Search*)param;
            DWORD pid = 0;
            if (!IsWindowVisible(w) || GetWindow(w, GW_OWNER) ||
                !GetWindowThreadProcessId(w, &pid)) {
                return TRUE;
            }
            auto process = std::ranges::find(s.processes, pid, &Process::pid);
            if (process == s.processes.end()) {
                Process p{pid};
                if (HANDLE h = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid)) {
                    p.exe = ProcessPath(h);
                    WCHAR id[130];  // APPLICATION_USER_MODEL_ID_MAX_LENGTH
                    UINT32 length = ARRAYSIZE(id);
                    if (GetApplicationUserModelId(h, &length, id) == ERROR_SUCCESS) {
                        p.storeAppId = id;
                    }
                    CloseHandle(h);
                }
                if (EndsWithNoCase(p.exe, L"\\ApplicationFrameHost.exe")) p.exe.clear();
                s.processes.push_back(std::move(p));
                process = s.processes.end() - 1;
            }
            if (process->exe.empty()) return TRUE;
            std::wstring id = WindowAppId(w);
            if (id.empty()) id = process->storeAppId;
            if (!id.empty()) s.found.push_back({std::move(id), process->exe});
            return TRUE;
        },
        (LPARAM)&search);
    g_windowApps = std::move(search.found);
}

// The .exes an app's known to run from: the one Windows made its ID from,
// Start's shortcut's, and its windows', as they've been seen.
struct AppExes {
    std::wstring fromId, fromShortcut;
    std::vector<std::wstring> fromWindows;
};
std::unordered_map<std::wstring, AppExes> g_appExes;  // by app ID

AppExes& ExesOf(std::wstring const& appId) {
    auto [it, added] = g_appExes.try_emplace(appId);
    if (added) {
        auto path = AppIdPath(appId);
        if (EndsWithNoCase(path, L".exe")) it->second.fromId = path;
        else it->second.fromShortcut = ShortcutExe(appId);
    }
    return it->second;
}

// Adds the .exes of its windows open now.
void AddWindowExes(std::wstring const& appId, AppExes& exes) {
    for (auto const& w : g_windowApps) {
        if (_wcsicmp(w.appId.c_str(), appId.c_str())) continue;
        bool known = std::ranges::any_of(exes.fromWindows, [&](std::wstring const& exe) {
            return !_wcsicmp(exe.c_str(), w.exe.c_str());
        });
        if (!known) exes.fromWindows.push_back(w.exe);
    }
}

// An .exe as typed in "App Icons": a full path, or a file name, matching that
// file anywhere.
bool IsExe(std::wstring const& typed, std::wstring const& path) {
    if (path.empty()) return false;
    if (typed.find(L'\\') != typed.npos) return !_wcsicmp(typed.c_str(), path.c_str());
    auto name = FileName(path);
    return name.size() == typed.size() && !_wcsnicmp(name.data(), typed.data(), name.size());
}

bool RunsFrom(AppExes const& exes, std::wstring const& typed) {
    return IsExe(typed, exes.fromId) || IsExe(typed, exes.fromShortcut) ||
           std::ranges::any_of(exes.fromWindows,
                               [&](std::wstring const& exe) { return IsExe(typed, exe); });
}

enum class AppMatch { None, Id, Name, Exe };

// Its entry in "App Icons", or -1: the first with its ID, else the first with
// its name, else the first with one of its .exes.
int AppIconFor(wux::FrameworkElement const& button, AppMatch* how = nullptr) {
    auto const& entries = g_settings.appIcons;
    if (how) *how = AppMatch::None;
    if (entries.empty() || !IsAppButton(button)) return -1;
    auto found = [&](int i, AppMatch match) {
        if (how) *how = match;
        return i;
    };
    int count = (int)entries.size();
    std::wstring id = ButtonAppId(button);
    for (int i = 0; i < count && !id.empty(); i++) {
        if (!_wcsicmp(entries[i].app.c_str(), id.c_str())) return found(i, AppMatch::Id);
    }
    std::optional<std::wstring> name;
    for (int i = 0; i < count; i++) {
        if (entries[i].exe) continue;
        if (!name) name = AppName(button);
        if (!name->empty() && !_wcsicmp(entries[i].app.c_str(), name->c_str())) {
            return found(i, AppMatch::Name);
        }
    }
    if (id.empty() || std::ranges::none_of(entries, &AppIcon::exe)) return -1;
    auto& exes = ExesOf(id);
    for (int pass = 0; pass < 2; pass++) {
        for (int i = 0; i < count; i++) {
            if (entries[i].exe && RunsFrom(exes, entries[i].app)) return found(i, AppMatch::Exe);
        }
        if (pass > 0) break;
        // Not yet seen running from one: its windows, if they're due a look.
        size_t known = exes.fromWindows.size();
        LookAtWindows(false);
        AddWindowExes(id, exes);
        if (exes.fromWindows.size() == known) break;
    }
    return -1;
}

wuxm::ImageSource FileTile(std::wstring const& path, int px);
wuxm::ImageSource StartTile(int px);

// The user's image, as a tile if it goes in one (see Squircled).
wuxm::ImageSource CustomIconSource(CustomIcon const& icon, wux::UIElement const& el) {
    return Squircled(icon) ? FileTile(icon.path, MagnifiedPixels(el, 1))
                           : LoadImageFile(icon.path, MagnifiedPixels(el, icon.scale));
}

// Loaded once per entry. An unreadable image leaves Windows' own icon.
[[clang::no_destroy]] std::vector<std::optional<wuxm::ImageSource>> g_appIconSources;

wuxm::ImageSource AppIconSource(int i, wux::UIElement const& el) {
    auto const& entries = g_settings.appIcons;
    if (i < 0 || i >= (int)entries.size()) return nullptr;
    if (g_appIconSources.size() != entries.size()) {
        g_appIconSources.assign(entries.size(), std::nullopt);
    }
    auto& source = g_appIconSources[i];
    if (!source) source = CustomIconSource(entries[i].icon, el);
    return *source;
}

float AppIconScale(int i) {
    auto const& entries = g_settings.appIcons;
    return i >= 0 && i < (int)entries.size() ? CustomIconScale(entries[i].icon) : kMacIconScale;
}

[[clang::no_destroy]] std::list<IconSwap> g_iconSwaps;
[[clang::no_destroy]] std::optional<wuxm::ImageSource> g_finderIconSource;  // none if unreadable

// With `custom`, its entry in "App Icons", for Custom.
IconLook LookFor(wux::FrameworkElement const& button, int* custom = nullptr) {
    if (custom) *custom = -1;
    if (HasFinderIcon() && IsFileExplorer(button)) return IconLook::Finder;
    if (!IsAppButton(button)) return IconLook::Stock;
    if (int i = AppIconFor(button); i >= 0) {
        if (custom) *custom = i;
        return IconLook::Custom;
    }
    if (g_settings.squircleIcons) return IconLook::Squircle;
    if (g_size.iconLoadSize > 0) return IconLook::Plain;
    return IconLook::Stock;
}

IconSwap* FindSwap(wux::FrameworkElement const& image) {
    for (auto& s : g_iconSwaps) {
        if (s.image.get() == image) return &s;
    }
    return nullptr;
}

// Loaded once. An unreadable custom image leaves Windows' own icon.
wuxm::ImageSource FinderIconSource(wux::UIElement const& el) {
    if (!g_finderIconSource) g_finderIconSource = CustomIconSource(g_settings.customFinder, el);
    return *g_finderIconSource;
}

// Bigger while a replacement shows; the taskbar's own icon keeps its size.
void ApplyIconScale(wux::FrameworkElement const& el) {
    IconSwap* s = FindSwap(el);
    if (!s) return;
    auto dp = wux::UIElement::RenderTransformProperty();
    bool replaced = s->shown && el.as<wuxc::Image>().Source() == s->shown;
    bool ours = s->transform && el.RenderTransform() == s->transform;
    if (!replaced || s->look == IconLook::Plain) {
        if (ours) PutBack(el, dp);
        return;
    }
    float k = s->look == IconLook::Finder   ? CustomIconScale(g_settings.customFinder)
              : s->look == IconLook::Custom ? AppIconScale(s->custom)
                                            : kMacIconScale;
    float center = g_size.icon / 2;
    if (ours && s->transform.ScaleX() == k && s->transform.CenterX() == center) return;
    s->transform = wuxm::ScaleTransform();
    s->transform.ScaleX(k);
    s->transform.ScaleY(k);
    s->transform.CenterX(center);
    s->transform.CenterY(center);
    el.RenderTransform(s->transform);
}

void RequestSquircle(IconSwap& s, wuxc::Image const& image);
wuxm::ImageSource CachedSquircle(wuxm::ImageSource const& stock, std::wstring const& appId);
void ArmSquircleRetry();
void NoteIconChange();
void OnStockChanged(wf::IInspectable const& sender);
std::wstring ButtonAppId(wux::FrameworkElement const& button);

// Only tiles and plain icons are made from the taskbar's icon, so only they
// need to know when it changes in place.
void WatchStock(IconSwap& s) {
    if (s.look != IconLook::Squircle && s.look != IconLook::Plain) return s.watch.Stop();
    s.watch.Watch(s.stock, [](wf::IInspectable const& sender) {
        Try([&] { OnStockChanged(sender); }, L"Squircle icon");
    });
}

void ShowSwap(IconSwap& s, wuxc::Image const& image) {
    auto source = s.shown ? s.shown : s.stock;
    if (source && image.Source() != source) image.Source(source);
    ApplyIconSize(image);
    ApplyIconScale(image);
}

void UpdateSwap(IconSwap& s, wuxc::Image const& image) {
    if (s.look == IconLook::Finder) s.shown = FinderIconSource(image);
    if (s.look == IconLook::Custom) s.shown = AppIconSource(s.custom, image);
    if (s.look == IconLook::Squircle && !s.shown) {
        s.shown = CachedSquircle(s.stock, s.appId);
        if (s.shown) s.tileUri = UriText(s.stock);
    }
    ShowSwap(s, image);
    if (NeedsPixels(s)) RequestSquircle(s, image);
    if (!NeedsPixels(s)) ShowIconAgain(s);
}

// The taskbar set an icon: kept to put back, and replaced again.
void OnIconSourceChanged(wux::FrameworkElement const& el) {
    IconSwap* s = FindSwap(el);
    if (!s) return;
    auto image = el.as<wuxc::Image>();
    auto source = image.Source();
    if (source == s->shown || source == s->stock) return;
    NoteIconChange();
    auto dp = wuxc::Image::SourceProperty();
    if (Override* o = FindOverride(el, dp)) o->original = image.ReadLocalValue(dp);
    auto button = s->button.get();
    s->stock = source;
    s->custom = -1;
    s->look = button ? LookFor(button, &s->custom) : IconLook::Stock;
    if (button) s->appId = ButtonAppId(button);
    ResetSwap(*s);
    WatchStock(*s);
    UpdateSwap(*s, image);
}

void UpdateAppIcon(wux::FrameworkElement const& el, wux::FrameworkElement const& button) {
    auto image = el.try_as<wuxc::Image>();
    if (!image) return;
    auto dp = wuxc::Image::SourceProperty();
    int custom = -1;
    IconLook look = LookFor(button, &custom);
    IconSwap* s = FindSwap(el);

    if (look == IconLook::Stock) {
        if (!s) return;
        ShowIconAgain(*s);
        g_iconSwaps.remove_if([&](IconSwap const& swap) { return &swap == s; });
        Release(el, dp);
        Release(el, wux::UIElement::RenderTransformProperty());
        ApplyIconSize(el);
        return;
    }
    bool fresh = !s;
    if (!s) {
        // A binding couldn't be put back once replaced.
        auto original = image.ReadLocalValue(dp);
        if (original && original.try_as<wux::Data::BindingExpression>()) return;
        s = &g_iconSwaps.emplace_back();
        s->image = winrt::make_weak(image);
        s->stock = image.Source();
        NoteIconChange();
        Track(el, dp, OnIconSourceChanged);
        Track(el, wux::UIElement::RenderTransformProperty(), ApplyIconScale);
    }
    s->button = winrt::make_weak(button);
    auto appId = ButtonAppId(button);
    if (s->look != look || s->custom != custom) {
        s->look = look;
        s->custom = custom;
        ResetSwap(*s);
        WatchStock(*s);
    } else if (appId != s->appId && !s->appId.empty()) {
        // The taskbar gave this button to another app, as when one opens and
        // the rest move along. It can draw the new app's icon into the bitmap
        // it has, without setting it anew, so what was made from the old one
        // has to go. The new icon may still be on its way into the bitmap, so
        // it's given a moment, unless there's a tile for it already.
        NoteIconChange();
        ResetSwap(*s);
        fresh = true;
        if (s->look != IconLook::Squircle || !CachedSquircle(s->stock, appId)) {
            s->waitUntil = std::chrono::steady_clock::now() + kNewAppIconWait;
            s->retry = true;
            s->retryAt = s->waitUntil;
            ArmSquircleRetry();
        }
    }
    s->appId = appId;
    UpdateSwap(*s, image);
    if (fresh) HideTillMade(*s, image);
}

// ---- Start ----
// In the dock without "Hide Windows Start Button", it can show the user's own
// icon, or with Squircle Icons on, a tile of the mod's own (see ModStartIcon).
// Windows' is an animation, not an image, so it can't be made into a tile: it's
// made transparent, and the mod's image goes over it in an Image of its own.
// That's added as the plates are measured, as the taskbar doesn't like its tree
// changing while it updates a button.

struct StartIcon {
    winrt::weak_ref<wux::FrameworkElement> stock;  // AnimatedVisualPlayer#Icon
    winrt::weak_ref<wuxc::Panel> panel;            // where the image is
    wuxc::Image image{nullptr};
};

[[clang::no_destroy]] std::optional<std::list<StartIcon>> g_startIcons{std::in_place};
[[clang::no_destroy]] std::optional<wuxm::ImageSource> g_startIconSource;  // none if unreadable

void ApplyTransparent(wux::FrameworkElement const& el) {
    if (el.Opacity() != 0) el.Opacity(0);
}

// Windows' Start icon in `button`. Nothing on a layout it doesn't know: hiding
// the wrong element could leave Start unusable.
wux::FrameworkElement FindStockStartIcon(wux::FrameworkElement const& button) {
    wux::FrameworkElement found{nullptr};
    ForEachDescendant(button, 8, [&](wux::FrameworkElement const& el) {
        if (found) return false;
        if (el.Name() == L"Icon" &&
            std::wstring_view(winrt::get_class_name(el)).find(L"AnimatedVisualPlayer") !=
                std::wstring_view::npos) {
            found = el;
            return false;
        }
        return true;
    });
    return found;
}

void AddStartIcon(wux::FrameworkElement const& button) {
    auto stock = FindStockStartIcon(button);
    if (!stock) return;
    for (auto& s : *g_startIcons) {
        if (s.stock.get() == stock) return;
    }
    // The first panel above it, and its child that holds it.
    wux::DependencyObject child = stock;
    wuxc::Panel panel{nullptr};
    while (child && child != button) {
        auto parent = wuxm::VisualTreeHelper::GetParent(child);
        if (!parent || parent == button) return;
        panel = parent.try_as<wuxc::Panel>();
        if (panel) break;
        child = parent;
    }
    // Only over it in a grid; in another panel, the image would sit beside it.
    uint32_t index;
    auto holder = child.try_as<wux::FrameworkElement>();
    auto grid = panel ? panel.try_as<wuxc::Grid>() : nullptr;
    if (!grid || !holder || !panel.Children().IndexOf(holder, index)) return;

    auto& custom = g_settings.customStart;
    if (!g_startIconSource) {
        g_startIconSource = HasStartIcon() ? CustomIconSource(custom, button)
                                           : StartTile(MagnifiedPixels(button, 1));
    }
    if (!*g_startIconSource) return;  // unreadable: Windows' own stays
    float k = CustomIconScale(custom);

    wuxc::Image image;
    image.Source(*g_startIconSource);
    image.Stretch(wuxm::Stretch::Uniform);
    image.Width(g_size.icon);
    image.Height(g_size.icon);
    image.HorizontalAlignment(wux::HorizontalAlignment::Center);
    image.VerticalAlignment(wux::VerticalAlignment::Center);
    image.IsHitTestVisible(false);
    wuxm::ScaleTransform scale;
    scale.ScaleX(k);
    scale.ScaleY(k);
    image.RenderTransformOrigin({0.5, 0.5});
    image.RenderTransform(scale);
    wuxc::Grid::SetRow(image, wuxc::Grid::GetRow(holder));
    wuxc::Grid::SetColumn(image, wuxc::Grid::GetColumn(holder));
    wuxc::Grid::SetRowSpan(image, wuxc::Grid::GetRowSpan(holder));
    wuxc::Grid::SetColumnSpan(image, wuxc::Grid::GetColumnSpan(holder));
    panel.Children().InsertAt(index + 1, image);
    Track(stock, wux::UIElement::OpacityProperty(), ApplyTransparent);
    ApplyTransparent(stock);
    g_startIcons->push_back({winrt::make_weak(stock), winrt::make_weak(panel), image});
}

// Windows' own logo fills its box and sits a little low and left in it, so
// beside macOS-style icons it looks too big and off center: it's shrunk and
// moved up and right.
constexpr float kStartLogoScale = 0.85f;
constexpr float kStartLogoRaise = 0.02f;  // of the icon size: 1px at Size 70
constexpr float kStartLogoShift = 0.02f;  // rightward, the same

void ApplyStartLogoFit(wux::FrameworkElement const& el) {
    float half = g_size.icon / 2, raise = -std::round(kStartLogoRaise * g_size.icon);
    float shift = std::round(kStartLogoShift * g_size.icon);
    auto have = el.RenderTransform().try_as<wuxm::CompositeTransform>();
    if (have && have.ScaleX() == kStartLogoScale && have.ScaleY() == kStartLogoScale &&
        have.CenterX() == half && have.CenterY() == half && have.TranslateX() == shift &&
        have.TranslateY() == raise) {
        return;
    }
    wuxm::CompositeTransform fit;
    fit.CenterX(half);
    fit.CenterY(half);
    fit.ScaleX(kStartLogoScale);
    fit.ScaleY(kStartLogoScale);
    fit.TranslateX(shift);
    fit.TranslateY(raise);
    el.RenderTransform(fit);
}

// `el` is an icon in `button`: fitted if it's Start's own logo, showing.
void UpdateStartLogo(wux::FrameworkElement const& el, wux::FrameworkElement const& button) {
    if (!IsStartButton(button) ||
        std::wstring_view(winrt::get_class_name(el)).find(L"AnimatedVisualPlayer") ==
            std::wstring_view::npos) {
        return;
    }
    auto dp = wux::UIElement::RenderTransformProperty();
    if (g_settings.hideStart || ModStartIcon()) {
        if (FindOverride(el, dp)) Release(el, dp);
        return;
    }
    Track(el, dp, ApplyStartLogoFit);
    ApplyStartLogoFit(el);
}

void RemoveStartIcons() {
    if (!g_startIcons) return;
    for (auto& s : *g_startIcons) {
        if (auto stock = s.stock.get()) {
            Try([&] { Release(stock, wux::UIElement::OpacityProperty()); });
        }
        auto panel = s.panel.get();
        uint32_t index;
        if (panel && s.image) Try([&] {
            if (panel.Children().IndexOf(s.image, index)) panel.Children().RemoveAt(index);
        });
    }
    g_startIcons->clear();
    g_startIconSource.reset();
}

// While the plates are measured.
void EnsureStartIcons() {
    g_startIcons->remove_if([](StartIcon const& s) { return !s.stock.get(); });
    if (!ModStartIcon()) return;
    for (auto& b : *g_buttons) {
        auto button = b.element.get();
        if (button && IsStartButton(button)) Try([&] { AddStartIcon(button); }, L"Start icon");
    }
}

// ---- Squircle tiles ----
// The icon's pixels, read straight from its bitmap, or else from the icon as
// drawn. If it's mostly opaque and square, it's a tile already: cropped to fill
// the squircle, but only if each side is flat between its corners, right up to
// its edge. Otherwise it's a shape, shrunk onto a tile of the Squircle color:
// for Auto, light, or dark if its outline is light (see TileFill).

constexpr int kAlphaShown = 64;              // counts as part of the icon
constexpr int kAlphaSolid = 224;             // counts as solid
constexpr float kTileMinCoverage = 0.84f;    // solid share of its bounds, to be a tile
constexpr float kTileMinAspect = 0.9f;
constexpr float kTileFlatFrom = 0.25f;       // a side's flat middle starts this far along it
constexpr float kTileFlatShare = 0.9f;       // of that middle, solid
constexpr float kTileEdgeDepth = 0.03f;      // how far in from its edge, of the icon's size
constexpr float kTileTrim = 0.015f;          // of a tile's own edge, cut off
constexpr float kShapeSize = 0.72f;          // a shape on its tile, of the tile's size
constexpr float kLongShapeSize = 0.8f;       // a long one, by its longer side
constexpr float kDarkTileFrom = 0.55f;       // a shape's edge lightness that gets a dark tile
constexpr float kPreferLightDarkFrom = 0.75f;  // the same, for Prefer Light
constexpr float kPreferDarkLightUpTo = 0.35f;  // and the lightest that's light, for Prefer Dark
constexpr float kTileShadowBlurStep = 0.003f;   // per Drop Shadow Spread, of the tile's size
constexpr float kTileShadowDropStep = 0.0025f;  // per Drop Shadow Distance, of the tile's size
// A side's glow or shadow is an inner shadow: the tile's shape moved in from
// that side by this much of its reach, and softened by this much, leaving the
// gap to be colored.
constexpr float kTileEdgeShift = 0.4f;
constexpr float kTileEdgeSoftness = 0.2f;
constexpr int kSquircleRetries = 30;         // while the icon isn't laid out or drawn yet,
constexpr int kSquircleSlowRetries = 30;     // then these, as with a button that arrives late
constexpr auto kSquircleSlowRetryDelay = std::chrono::milliseconds(1000);
constexpr size_t kSquircleCacheSize = 64;

ULONG_PTR g_gdiplus = 0;

bool EnsureGdiplus() {
    Gdiplus::GdiplusStartupInput input;
    if (!g_gdiplus && Gdiplus::GdiplusStartup(&g_gdiplus, &input, nullptr) != Gdiplus::Ok) {
        g_gdiplus = 0;
    }
    return g_gdiplus != 0;
}

void ShutdownGdiplus() {
    if (g_gdiplus) Gdiplus::GdiplusShutdown(g_gdiplus);
    g_gdiplus = 0;
}

Gdiplus::Color GdiColor(Color c) { return Gdiplus::Color(c.A, c.R, c.G, c.B); }

// Three box blurs, close to a Gaussian blur with standard deviation `sigma`.
void Blur(std::vector<float>& v, int w, int h, float sigma) {
    int r = (int)std::lround((std::sqrt(4 * sigma * sigma + 1) - 1) / 2);
    if (r < 1) return;
    std::vector<float> tmp(v.size());
    auto pass = [r](float const* src, float* dst, int lines, int length, int step, int lineStep) {
        for (int line = 0; line < lines; line++) {
            float const* s = src + (size_t)line * lineStep;
            float* d = dst + (size_t)line * lineStep;
            float sum = 0;
            for (int k = -r; k <= r; k++) sum += s[std::clamp(k, 0, length - 1) * step];
            for (int i = 0; i < length; i++) {
                d[i * step] = sum / (2 * r + 1);
                sum += s[std::min(i + r + 1, length - 1) * step] - s[std::max(i - r, 0) * step];
            }
        }
    };
    for (int i = 0; i < 3; i++) {
        pass(v.data(), tmp.data(), h, w, 1, w);  // rows
        pass(tmp.data(), v.data(), w, h, w, 1);  // columns
    }
}

struct IconPixels {
    int size = 0;
    std::vector<BYTE> pixels;  // premultiplied BGRA
};

// A shape's tile color, by how light its outline is (0-1).
// Auto gives a dark tile from kDarkTileFrom up; Prefer Light only to the
// lightest outlines, Prefer Dark to all but the darkest.
Color TileFill(float outline) {
    auto& s = g_settings;
    auto rgb = [](uint8_t const (&c)[3]) { return Color{255, c[0], c[1], c[2]}; };
    Color light = rgb(s.tileLightColor), dark = rgb(s.tileDarkColor);
    switch (s.tileColor) {
        case TileColor::AlwaysLight: return light;
        case TileColor::AlwaysDark: return dark;
        case TileColor::PreferLight: return outline >= kPreferLightDarkFrom ? dark : light;
        case TileColor::PreferDark: return outline > kPreferDarkLightUpTo ? dark : light;
        case TileColor::Custom: return rgb(s.tileCustomColor);
        case TileColor::Auto: break;
    }
    return outline >= kDarkTileFrom ? dark : light;
}

// The tile's outline, `t` across at `o`, `o`: a squircle (Apple's smooth
// curve) or plain rounded corners, as set.
void AddTileShape(Gdiplus::GraphicsPath& path, float o, float t) {
    namespace gp = Gdiplus;
    float r = g_settings.tileCornerRadius / 100.0f * t;
    if (g_settings.tileCorner == CornerStyle::Rounded) {
        r = std::min(r, t / 2);
        if (r < 0.5f) {
            path.AddRectangle(gp::RectF(o, o, t, t));
            return;
        }
        float d = 2 * r;
        path.AddArc(o, o, d, d, 180, 90);
        path.AddArc(o + t - d, o, d, d, 270, 90);
        path.AddArc(o + t - d, o + t - d, d, d, 0, 90);
        path.AddArc(o, o + t - d, d, d, 90, 90);
        path.CloseFigure();
        return;
    }
    r = SquircleRadius(t, t, r);
    std::vector<gp::PointF> points;
    for (auto& p : Squircle(o, o, t, t, r, r)) points.push_back({p.X, p.Y});
    path.AddBeziers(points.data(), (INT)points.size());
    path.CloseFigure();
}

// `r`, `g`, `b` at `a` over a premultiplied BGRA pixel.
void Overlay(BYTE* p, uint8_t r, uint8_t g, uint8_t b, float a) {
    p[0] = (BYTE)std::lround(b * a + p[0] * (1 - a));
    p[1] = (BYTE)std::lround(g * a + p[1] * (1 - a));
    p[2] = (BYTE)std::lround(r * a + p[2] * (1 - a));
    p[3] = (BYTE)std::lround(255 * a + p[3] * (1 - a));
}

// The tile's colors in `pixels` (premultiplied BGRA) made more vivid or duller,
// as "Vibrance" is set. Above 100, as vibrance does: dull colors gain the most,
// the most vivid hardly any. Below, all fade toward their gray alike, all the
// way at 0. Grays, the tile's light and dark colors among them, are unchanged.
void ApplyTileVibrance(std::vector<BYTE>& pixels) {
    int vibrance = g_settings.tileVibrance;
    if (vibrance == 100) return;
    float v = (vibrance - 100) / 100.0f;
    for (size_t i = 0; i + 3 < pixels.size(); i += 4) {
        BYTE* p = &pixels[i];
        if (!p[3]) continue;
        float b = p[0], g = p[1], r = p[2], a = p[3];
        float gray = 0.299f * r + 0.587f * g + 0.114f * b;
        float vivid = std::clamp((std::max({r, g, b}) - std::min({r, g, b})) / a, 0.0f, 1.0f);
        float k = v < 0 ? 1 + v : 1 + v * (1 - vivid);
        auto mix = [&](float c) {
            return (BYTE)std::lround(std::clamp(gray + (c - gray) * k, 0.0f, a));
        };
        p[0] = mix(b);
        p[1] = mix(g);
        p[2] = mix(r);
    }
}

// The sheen, if on: white over the tile in `pixels`, as for ApplyTileEdges,
// fading out from its top (`o` down, `t` across).
void ApplyTileSheen(std::vector<BYTE>& pixels, int size, std::vector<float> const& shape, float o,
                    float t) {
    auto& s = g_settings;
    if (!s.tileSheen || s.tileSheenOpacity <= 0 || s.tileSheenSize <= 0) return;
    float reach = s.tileSheenSize / 100.0f * t, opacity = s.tileSheenOpacity / 100.0f;
    for (int y = 0; y < size; y++) {
        float fade = std::clamp(1 - (y + 0.5f - o) / reach, 0.0f, 1.0f);
        if (fade <= 0) break;
        for (int x = 0; x < size; x++) {
            size_t i = (size_t)y * size + x;
            float a = opacity * fade * shape[i];
            if (a > 0) Overlay(&pixels[i * 4], 255, 255, 255, a);
        }
    }
}

// A glow or shadow along one side of a shape: `reach` pixels in from its edge.
struct InnerEdge {
    Color color;
    float opacity = 0;  // 0-1
    float reach = 0;    // none at 0
};

// `edges` (top, bottom, left, right) over the shape in `pixels` (premultiplied
// BGRA, `w` by `h`), which covers `shape`. Each is an inner shadow from its
// side: the shape moved in from that side and softened, the gap it leaves
// colored. So it follows the corners round, and fades out with no visible end.
void ApplyInnerEdges(std::vector<BYTE>& pixels, int w, int h, std::vector<float> const& shape,
                     std::array<InnerEdge, 4> const& edges) {
    // Which way each side's shadow is cast: top, bottom, left, right.
    const int casts[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    std::vector<float> moved(shape.size());
    for (size_t side = 0; side < edges.size(); side++) {
        InnerEdge const& edge = edges[side];
        if (edge.opacity <= 0 || edge.reach <= 0) continue;
        float shift = edge.reach * kTileEdgeShift;
        int whole = (int)shift;
        float part = shift - whole;  // between two pixels: the two mixed
        auto [cx, cy] = casts[side];
        auto at = [&](int x, int y) {
            return x >= 0 && y >= 0 && x < w && y < h ? shape[(size_t)y * w + x] : 0.0f;
        };
        for (int y = 0; y < h; y++) {
            for (int x = 0; x < w; x++) {
                moved[(size_t)y * w + x] = at(x - cx * whole, y - cy * whole) * (1 - part) +
                                           at(x - cx * (whole + 1), y - cy * (whole + 1)) * part;
            }
        }
        Blur(moved, w, h, edge.reach * kTileEdgeSoftness);
        auto [_, r, g, b] = edge.color;
        for (size_t i = 0; i < shape.size(); i++) {
            float a = edge.opacity * shape[i] * std::clamp(1 - moved[i], 0.0f, 1.0f);
            if (a > 0) Overlay(&pixels[i * 4], r, g, b, a);
        }
    }
}

// Each side's glow or shadow, as set, over the tile in `pixels` (premultiplied
// BGRA, `size` square), whose shape covers `shape` and is `t` across.
void ApplyTileEdges(std::vector<BYTE>& pixels, int size, std::vector<float> const& shape,
                    float t) {
    std::array<InnerEdge, 4> edges;
    for (size_t side = 0; side < edges.size(); side++) {
        TileEdge const& edge = g_settings.tileEdges[side];
        auto [r, g, b] = edge.color;
        edges[side] = {{255, r, g, b}, edge.opacity / 100.0f, edge.size / 100.0f * t};
    }
    ApplyInnerEdges(pixels, size, size, shape, edges);
}

// =============================================================================
// MAC BORDER
// =============================================================================
// The dock's MacOS Style border, and the tray's: each side's glow or shadow, as
// set, drawn as squircle tiles' edges are, so it follows the corners round; and
// a thin line along each edge, light inside one that glows, faintly dark
// outside any other. It's drawn at the screen's scale for a short surface, a
// pixel bigger all round for the lines outside. Past its corners it doesn't
// change along its length, so it's shown in three slices: its two ends, and a
// column from its middle stretched between them. As the dock widens while it
// magnifies, nothing is drawn again.

// `shape` (`w` by `h`) moved `distance` pixels along (`ux`, `uy`), a unit step
// along one axis; a fraction mixes the two nearest pixels.
std::vector<float> MovedShape(std::vector<float> const& shape, int w, int h, int ux, int uy,
                              float distance) {
    int whole = (int)distance;
    float part = distance - whole;
    auto at = [&](int x, int y) {
        return x >= 0 && y >= 0 && x < w && y < h ? shape[(size_t)y * w + x] : 0.0f;
    };
    std::vector<float> moved(shape.size());
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            moved[(size_t)y * w + x] = at(x - ux * whole, y - uy * whole) * (1 - part) +
                                       at(x - ux * (whole + 1), y - uy * (whole + 1)) * part;
        }
    }
    return moved;
}

// For a surface `w` by `h` (view pixels) with corners `r` (as ShapeSurface
// has them), its glows sized by `reference`; drawn again only when that or
// its look changes.
void DrawMacBorder(Surface& s, float w, float h, float r, float reference) {
    namespace gp = Gdiplus;
    float k = 1;
    if (auto root = s.root.XamlRoot()) k = (float)root.RasterizationScale();
    Color fill = s.macFill;
    float fillLightness = Lightness(fill);
    Color lighter = ShiftLightness(fill, (1 - fillLightness) * kEdgeHighlight);
    Color darker = ShiftLightness(fill, -fillLightness * kEdgeShadow);
    lighter.A = darker.A = 255;

    // Each side's glow, in view pixels, and whether it's light.
    std::array<InnerEdge, 4> glows;
    std::array<bool, 4> light{};
    for (size_t side = 0; side < glows.size(); side++) {
        DockEdge const& edge = g_settings.dockEdges[side];
        Color color = edge.lighter ? lighter : Color{255, edge.color[0], edge.color[1], edge.color[2]};
        glows[side] = {color, edge.opacity / 100.0f, edge.size / 100.0f * reference};
        light[side] = glows[side].opacity > 0 && glows[side].reach > 0 &&
                      Lightness(color) >= fillLightness;
    }

    // How far in from each end it changes: the corners, and the top and bottom
    // glows' softening around them, or the sides' glows, whichever's further.
    float reachTB = std::max(glows[0].reach, glows[1].reach);
    float reachLR = std::max(glows[2].reach, glows[3].reach);
    float end = std::max(kCornerReach * r + reachTB * (kTileEdgeShift + 3 * kTileEdgeSoftness),
                         reachLR) + 2;
    int pad = std::max(1, (int)std::ceil(k));  // a view pixel, for the lines outside
    int widthPx = std::max(1, (int)std::round(w * k));
    int endPx = std::min((int)std::ceil(end * k), (widthPx - 1) / 2);  // a short one's meet
    int shapeW = 2 * endPx + 1, shapeH = std::max(1, (int)std::round(h * k));
    int W = shapeW + 2 * pad, H = shapeH + 2 * pad;

    std::wstring key;
    auto add = [&](double v) { key += std::to_wstring(v) + L","; };
    for (double v : {(double)k, (double)endPx, (double)shapeH, (double)r,
                     (double)s.macLineAlpha}) {
        add(v);
    }
    for (Color c : {fill, lighter}) add((double)(c.A << 24 | c.R << 16 | c.G << 8 | c.B));
    for (size_t side = 0; side < glows.size(); side++) {
        auto const& g = glows[side];
        add((double)(g.color.R << 16 | g.color.G << 8 | g.color.B));
        add(g.opacity);
        add(g.reach);
        add(light[side]);
    }
    if (key == s.macDrawn) return;
    if (!EnsureGdiplus()) return;

    // Its shape's coverage.
    std::vector<float> shape((size_t)W * H);
    {
        gp::Bitmap mask(W, H, PixelFormat32bppPARGB);
        {
            gp::Graphics g(&mask);
            g.SetSmoothingMode(gp::SmoothingModeAntiAlias);
            g.Clear(gp::Color(0, 0, 0, 0));
            gp::GraphicsPath path;
            std::vector<gp::PointF> points;
            for (auto& p : Squircle((float)pad, (float)pad, (float)shapeW, (float)shapeH, r * k,
                                    r * k)) {
                points.push_back({p.X, p.Y});
            }
            path.AddBeziers(points.data(), (INT)points.size());
            path.CloseFigure();
            gp::SolidBrush solid(gp::Color(255, 255, 255, 255));
            g.FillPath(&solid, &path);
        }
        gp::Rect all(0, 0, W, H);
        gp::BitmapData data;
        if (mask.LockBits(&all, gp::ImageLockModeRead, PixelFormat32bppPARGB, &data) != gp::Ok) {
            return;
        }
        for (int y = 0; y < H; y++) {
            auto row = (BYTE const*)data.Scan0 + (size_t)y * data.Stride;
            for (int x = 0; x < W; x++) shape[(size_t)y * W + x] = row[x * 4 + 3] / 255.0f;
        }
        mask.UnlockBits(&data);
    }

    // The glows, then the lines over them.
    std::vector<BYTE> pixels(shape.size() * 4, 0);
    std::array<InnerEdge, 4> scaled = glows;
    for (auto& g : scaled) g.reach *= k;
    ApplyInnerEdges(pixels, W, H, shape, scaled);
    const int casts[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};  // inward from each side
    std::vector<float> inside(shape.size()), outside(shape.size());
    for (size_t side = 0; side < glows.size(); side++) {
        auto [cx, cy] = casts[side];
        if (light[side]) {
            auto moved = MovedShape(shape, W, H, cx, cy, k);
            for (size_t i = 0; i < shape.size(); i++) {
                inside[i] = std::max(inside[i], shape[i] * (1 - moved[i]));
            }
        } else {
            auto moved = MovedShape(shape, W, H, -cx, -cy, k);
            for (size_t i = 0; i < shape.size(); i++) {
                outside[i] = std::max(outside[i], moved[i] * (1 - shape[i]));
            }
        }
    }
    float lightAlpha = s.macLineAlpha / 255.0f * kEdgeHighlightOpacity;
    float darkAlpha = s.macLineAlpha / 255.0f;
    for (size_t i = 0; i < shape.size(); i++) {
        if (inside[i] > 0) {
            Overlay(&pixels[i * 4], lighter.R, lighter.G, lighter.B, lightAlpha * inside[i]);
        }
        if (outside[i] > 0) {
            Overlay(&pixels[i * 4], darker.R, darker.G, darker.B, darkAlpha * outside[i]);
        }
    }

    // The three slices: its ends, and the column between them.
    auto slice = [&](int x0, int width) {
        std::vector<BYTE> part((size_t)width * H * 4);
        for (int y = 0; y < H; y++) {
            memcpy(&part[(size_t)y * width * 4], &pixels[((size_t)y * W + x0) * 4], width * 4);
        }
        return BitmapFromPixels(width, H, part);
    };
    int endW = pad + endPx;
    float viewEnd = endW / k, viewH = H / k, viewPad = pad / k;
    s.macLeft.Source(slice(0, endW));
    s.macMiddle.Source(slice(endW, 1));
    s.macRight.Source(slice(endW + 1, W - endW - 1));
    for (auto const& image : {s.macLeft, s.macRight}) {
        image.Width(viewEnd);
        image.Height(viewH);
    }
    s.macMiddle.Height(viewH);
    s.mac.Margin({-viewPad, -viewPad, -viewPad, -viewPad});
    s.macDrawn = key;
}

// A `w` x `h` icon as a squircle tile, on a canvas kMacIconScale times bigger.
IconPixels MakeSquircleIcon(std::vector<BYTE> source, int w, int h) {
    namespace gp = Gdiplus;
    int x0 = w, y0 = h, x1 = -1, y1 = -1;  // what's shown
    int sx0 = w, sy0 = h, sx1 = -1, sy1 = -1;  // what's solid
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            BYTE alpha = source[((size_t)y * w + x) * 4 + 3];
            if (alpha < kAlphaShown) continue;
            x0 = std::min(x0, x), x1 = std::max(x1, x);
            y0 = std::min(y0, y), y1 = std::max(y1, y);
            if (alpha < kAlphaSolid) continue;
            sx0 = std::min(sx0, x), sx1 = std::max(sx1, x);
            sy0 = std::min(sy0, y), sy1 = std::max(sy1, y);
        }
    }
    if (x1 < 0 || !EnsureGdiplus()) return {};

    // How much of its bounds is solid, and how light its outline is: its pixels
    // next to a transparent one, which are what meet the tile.
    auto shown = [&](int x, int y) {
        return x >= 0 && y >= 0 && x < w && y < h &&
               source[((size_t)y * w + x) * 4 + 3] >= kAlphaShown;
    };
    int bw = x1 - x0 + 1, bh = y1 - y0 + 1, solid = 0;
    double weight = 0, lightness = 0;
    for (int y = y0; y <= y1; y++) {
        for (int x = x0; x <= x1; x++) {
            BYTE const* p = &source[((size_t)y * w + x) * 4];
            if (p[3] >= kAlphaSolid) solid++;
            if (!shown(x, y) ||
                (shown(x - 1, y) && shown(x + 1, y) && shown(x, y - 1) && shown(x, y + 1))) {
                continue;
            }
            lightness += (0.299 * p[2] + 0.587 * p[1] + 0.114 * p[0]) / 255;  // premultiplied
            weight += p[3] / 255.0;
        }
    }
    float aspect = (float)std::min(bw, bh) / std::max(bw, bh);

    // A side is flat if the middle of it, past any rounded corners, is solid
    // within a few pixels of the solid part's edge (soft edges and a baked-in
    // shadow aside).
    int depth = std::max(1, (int)std::round(std::max(bw, bh) * kTileEdgeDepth));
    auto flat = [&](bool vertical, bool end) {
        int length = vertical ? sy1 - sy0 + 1 : sx1 - sx0 + 1;
        int from = (int)(length * kTileFlatFrom), to = length - from, found = 0;
        for (int i = from; i < to; i++) {
            for (int d = 0; d < depth; d++) {
                int x = vertical ? (end ? sx1 - d : sx0 + d) : sx0 + i;
                int y = vertical ? sy0 + i : (end ? sy1 - d : sy0 + d);
                if (source[((size_t)y * w + x) * 4 + 3] >= kAlphaSolid) {
                    found++;
                    break;
                }
            }
        }
        return found >= kTileFlatShare * (to - from);
    };
    bool tile = aspect >= kTileMinAspect && solid >= kTileMinCoverage * bw * bh && sx1 >= 0 &&
                flat(false, false) && flat(false, true) && flat(true, false) && flat(true, true);
    float outline = weight > 0 ? (float)(lightness / weight) : 0;

    int t = std::max(w, h), size = (int)std::ceil(t * kMacIconScale);
    float o = (size - t) / 2.0f;
    gp::Bitmap icon(w, h, w * 4, PixelFormat32bppPARGB, source.data());
    gp::Bitmap face(t, t, PixelFormat32bppPARGB);
    {
        gp::Graphics g(&face);
        g.SetInterpolationMode(gp::InterpolationModeHighQualityBicubic);
        g.SetPixelOffsetMode(gp::PixelOffsetModeHalf);
        gp::ImageAttributes edges;
        edges.SetWrapMode(gp::WrapModeTileFlipXY);
        if (tile) {
            float trim = std::max(bw, bh) * kTileTrim;
            g.DrawImage(&icon, gp::RectF(0, 0, (gp::REAL)t, (gp::REAL)t), x0 + trim, y0 + trim,
                        bw - 2 * trim, bh - 2 * trim, gp::UnitPixel, &edges);
        } else {
            gp::SolidBrush back(GdiColor(TileFill(outline)));
            g.FillRectangle(&back, 0, 0, t, t);
            float k = t * (aspect >= 0.85f ? kShapeSize : kLongShapeSize) / std::max(bw, bh);
            gp::RectF at((t - bw * k) / 2, (t - bh * k) / 2, bw * k, bh * k);
            g.DrawImage(&icon, at, (gp::REAL)x0, (gp::REAL)y0, (gp::REAL)bw, (gp::REAL)bh,
                        gp::UnitPixel, &edges);
        }
    }

    gp::GraphicsPath path;
    AddTileShape(path, o, (float)t);

    // The shadow, from the tile's shape blurred and moved as set, then the
    // face cut to the shape.
    IconPixels out{size, std::vector<BYTE>((size_t)size * size * 4)};
    {
        gp::Bitmap mask(size, size, size * 4, PixelFormat32bppPARGB, out.pixels.data());
        gp::Graphics g(&mask);
        g.SetSmoothingMode(gp::SmoothingModeAntiAlias);
        gp::SolidBrush black(gp::Color(255, 0, 0, 0));
        g.FillPath(&black, &path);
    }
    std::vector<float> shape((size_t)size * size);
    for (size_t i = 0; i < shape.size(); i++) shape[i] = out.pixels[i * 4 + 3] / 255.0f;
    std::vector<float> shadow = shape;
    auto& set = g_settings;
    float opacity = set.tileShadowOpacity / 100.0f;
    Blur(shadow, size, size, set.tileShadowSpread * kTileShadowBlurStep * t);
    // Which way it falls, as a step in x and y; diagonals as far as the rest.
    float dx = 0, dy = 0;
    switch (set.tileShadowDirection) {
        case ShadowDirection::Down: dy = 1; break;
        case ShadowDirection::DownLeft: dx = -0.7071f, dy = 0.7071f; break;
        case ShadowDirection::DownRight: dx = 0.7071f, dy = 0.7071f; break;
        case ShadowDirection::Left: dx = -1; break;
        case ShadowDirection::Right: dx = 1; break;
        case ShadowDirection::Up: dy = -1; break;
        case ShadowDirection::Centered: break;
    }
    float drop = set.tileShadowDistance * kTileShadowDropStep * t;
    int shiftX = (int)std::lround(dx * drop), shiftY = (int)std::lround(dy * drop);
    for (int y = 0; y < size; y++) {
        for (int x = 0; x < size; x++) {
            int fromX = x - shiftX, fromY = y - shiftY;
            bool inside = fromX >= 0 && fromY >= 0 && fromX < size && fromY < size;
            float a = inside ? shadow[(size_t)fromY * size + fromX] : 0;
            BYTE* p = &out.pixels[((size_t)y * size + x) * 4];
            p[0] = p[1] = p[2] = 0;
            p[3] = (BYTE)std::lround(a * opacity * 255);
        }
    }
    {
        gp::Bitmap canvas(size, size, size * 4, PixelFormat32bppPARGB, out.pixels.data());
        gp::Graphics g(&canvas);
        g.SetSmoothingMode(gp::SmoothingModeAntiAlias);
        // Mirrored past its edges, not repeated: the soft edge of the shape
        // reaches just past the face, and would show the far side's color
        // there, as a thin line along the bottom of a tile lighter at the top.
        gp::TextureBrush brush(&face, gp::WrapModeTileFlipXY);
        brush.TranslateTransform(o, o);
        g.FillPath(&brush, &path);
    }
    ApplyTileVibrance(out.pixels);
    ApplyTileSheen(out.pixels, size, shape, o, (float)t);
    ApplyTileEdges(out.pixels, size, shape, (float)t);
    return out;
}

// ---- Icons that came back small ----
// "Use High Resolution Icons" has the taskbar load icons at the dock's fully
// magnified size. An app that gives Windows only a small icon gets it back
// unenlarged, in the middle of an image that size, and would look tiny. Such an
// icon is swapped for the one Start shows for the app, or, if that's small
// too, enlarged.

constexpr float kUndersizedArtwork = 0.5f;  // of its image, below which an icon came back small
constexpr float kEnlargedArtwork = 0.875f;  // a small icon's artwork, enlarged, of its image

// The box around what's shown of `w` x `h` premultiplied BGRA pixels;
// `right` < `left` if nothing is.
RECT ShownBounds(std::vector<BYTE> const& pixels, int w, int h) {
    RECT r{w, h, -1, -1};
    if (pixels.size() < (size_t)w * h * 4) return r;
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            if (pixels[((size_t)y * w + x) * 4 + 3] < kAlphaShown) continue;
            r.left = std::min<LONG>(r.left, x), r.right = std::max<LONG>(r.right, x);
            r.top = std::min<LONG>(r.top, y), r.bottom = std::max<LONG>(r.bottom, y);
        }
    }
    return r;
}

bool Undersized(std::vector<BYTE> const& pixels, int w, int h) {
    RECT r = ShownBounds(pixels, w, h);
    if (r.right < r.left) return false;
    int side = std::max(r.right - r.left, r.bottom - r.top) + 1;
    return side < kUndersizedArtwork * std::max(w, h);
}

// The artwork of an icon that came back small, enlarged to fill as much of a
// square image as other icons' do. Softer than they are, but the same size.
IconPixels EnlargeArtwork(std::vector<BYTE> source, int w, int h) {
    namespace gp = Gdiplus;
    RECT r = ShownBounds(source, w, h);
    if (r.right < r.left || !EnsureGdiplus()) return {};
    // Its soft edge too, just past what counts as shown.
    r.left = std::max<LONG>(0, r.left - 1), r.top = std::max<LONG>(0, r.top - 1);
    r.right = std::min<LONG>(w - 1, r.right + 1), r.bottom = std::min<LONG>(h - 1, r.bottom + 1);
    int bw = r.right - r.left + 1, bh = r.bottom - r.top + 1, size = std::max(w, h);
    float k = size * kEnlargedArtwork / std::max(bw, bh);
    IconPixels out{size, std::vector<BYTE>((size_t)size * size * 4)};
    gp::Bitmap icon(w, h, w * 4, PixelFormat32bppPARGB, source.data());
    gp::Bitmap canvas(size, size, size * 4, PixelFormat32bppPARGB, out.pixels.data());
    {
        gp::Graphics g(&canvas);
        g.SetInterpolationMode(gp::InterpolationModeHighQualityBicubic);
        g.SetPixelOffsetMode(gp::PixelOffsetModeHalf);
        gp::ImageAttributes edges;
        // Clear past the artwork's box (left out, the color is opaque black).
        edges.SetWrapMode(gp::WrapModeClamp, gp::Color(0, 0, 0, 0));
        gp::RectF at((size - bw * k) / 2, (size - bh * k) / 2, bw * k, bh * k);
        g.DrawImage(&icon, at, (gp::REAL)r.left, (gp::REAL)r.top, (gp::REAL)bw, (gp::REAL)bh,
                    gp::UnitPixel, &edges);
    }
    return out;
}

// Tiles by the taskbar's icon they were made from. The taskbar can load another
// icon into one it has, so each is also by what it loaded from, and forgotten
// when it loads anew (see StockWatch). And it can give a button, bitmap and
// all, to another app, so each is also by the app it was made for.
struct CachedTile {
    wuxm::ImageSource icon{nullptr};
    std::wstring uri;
    std::wstring appId;
    wuxm::ImageSource tile{nullptr};
    bool stale = false;
    StockWatch watch;
};

[[clang::no_destroy]] std::list<CachedTile> g_squircleCache;

// `icon` loaded anew, from `uri`: its tiles are out of date, unless it's the
// same file again.
void ForgetCachedSquircle(wf::IInspectable const& icon, std::wstring const& uri) {
    for (auto& c : g_squircleCache) {
        if (c.icon == icon && (uri.empty() || uri != c.uri)) c.stale = true;
    }
}

wuxm::ImageSource CachedSquircle(wuxm::ImageSource const& stock, std::wstring const& appId) {
    if (!stock) return nullptr;
    auto uri = UriText(stock);
    for (auto& c : g_squircleCache) {
        if (!c.stale && c.icon == stock && c.uri == uri && c.appId == appId) return c.tile;
    }
    return nullptr;
}

void CacheSquircle(wuxm::ImageSource const& stock, std::wstring const& appId,
                   wuxm::ImageSource const& tile) {
    g_squircleCache.remove_if([&](CachedTile const& c) { return c.stale || c.icon == stock; });
    auto& c = g_squircleCache.emplace_front();
    c.icon = stock;
    c.uri = UriText(stock);
    c.appId = appId;
    c.tile = tile;
    c.watch.Watch(stock, [](wf::IInspectable const& sender) {
        ForgetCachedSquircle(sender, UriText(sender.try_as<wuxm::ImageSource>()));
    });
    while (g_squircleCache.size() > kSquircleCacheSize) g_squircleCache.pop_back();
}

// Tiles are forgotten when their color or the size they're drawn at changes
// since `old`, and drawn again as the buttons are next processed.
void RecolorSquircles(Settings const& old) {
    auto& s = g_settings;
    bool same = old.size == s.size && old.scale == s.scale && old.tileColor == s.tileColor &&
                std::equal(std::begin(s.tileLightColor), std::end(s.tileLightColor),
                           std::begin(old.tileLightColor)) &&
                std::equal(std::begin(s.tileDarkColor), std::end(s.tileDarkColor),
                           std::begin(old.tileDarkColor)) &&
                old.tileVibrance == s.tileVibrance &&
                old.tileSheen == s.tileSheen && old.tileSheenOpacity == s.tileSheenOpacity &&
                old.tileSheenSize == s.tileSheenSize &&
                old.tileEdges == s.tileEdges && old.tileShadowSpread == s.tileShadowSpread &&
                old.tileShadowDistance == s.tileShadowDistance &&
                old.tileShadowOpacity == s.tileShadowOpacity &&
                old.tileShadowDirection == s.tileShadowDirection &&
                old.tileCorner == s.tileCorner && old.tileCornerRadius == s.tileCornerRadius &&
                (s.tileColor != TileColor::Custom ||
                 std::equal(std::begin(s.tileCustomColor), std::end(s.tileCustomColor),
                            std::begin(old.tileCustomColor)));
    // Plain icons are looked at again at the new size.
    if (old.size != s.size || old.scale != s.scale) {
        for (auto& swap : g_iconSwaps) {
            if (swap.look != IconLook::Plain) continue;
            swap.shown = nullptr;
            swap.checked = false;
            swap.retries = 0;
        }
    }
    if (same) return;
    g_squircleCache.clear();
    for (auto& swap : g_iconSwaps) {
        if (swap.look != IconLook::Squircle) continue;
        swap.shown = nullptr;
        swap.retries = 0;
    }
}

// ---- Settling ----
// Tiles are made from the icons as drawn, which are in flux while the dock
// starts up and the taskbar reloads its icons. So they wait till no icon has
// changed for a second, or 5 seconds at most. Again after a settings change.

constexpr auto kIconsQuietFor = std::chrono::milliseconds(1000);
constexpr auto kIconsSettleWithin = std::chrono::milliseconds(5000);

bool g_iconsSettling = true;
bool g_iconsSettleStarted = false;
std::chrono::steady_clock::time_point g_iconsSettleStart, g_iconsLastChange;
[[clang::no_destroy]] winrt::Windows::System::DispatcherQueueTimer g_iconsSettleTimer{nullptr};

void NoteIconChange() {
    g_iconsLastChange = std::chrono::steady_clock::now();
}

void SettleIconsAgain() {
    g_iconsSettling = true;
    g_iconsSettleStarted = false;
}

void StopSettlingIcons() {
    if (g_iconsSettleTimer) g_iconsSettleTimer.Stop();
    g_iconsSettleTimer = nullptr;
}

// Checked a few times a second; once settled, the waiting icons are drawn.
void WaitForIconsToSettle() {
    auto now = std::chrono::steady_clock::now();
    if (!g_iconsSettleStarted) {
        g_iconsSettleStarted = true;
        g_iconsSettleStart = g_iconsLastChange = now;
    }
    if (g_iconsSettleTimer) return;
    auto queue = winrt::Windows::System::DispatcherQueue::GetForCurrentThread();
    if (!queue) {
        g_iconsSettling = false;
        return;
    }
    g_iconsSettleTimer = queue.CreateTimer();
    g_iconsSettleTimer.Interval(std::chrono::milliseconds(200));
    g_iconsSettleTimer.IsRepeating(true);
    g_iconsSettleTimer.Tick([](auto&&, auto&&) {
        if (g_unloading) return;
        auto now = std::chrono::steady_clock::now();
        if (now - g_iconsLastChange < kIconsQuietFor &&
            now - g_iconsSettleStart < kIconsSettleWithin) {
            return;
        }
        StopSettlingIcons();
        g_iconsSettling = false;
        for (auto& s : g_iconSwaps) {
            auto image = s.image.get();
            if (image && NeedsPixels(s)) Try([&] { UpdateSwap(s, image); }, L"Squircle icon");
        }
    });
    g_iconsSettleTimer.Start();
}

// Async work's callbacks run code from the mod. Each holds a count, which
// unloading waits on after cancelling the work (see Wh_ModBeforeUninit).
std::atomic<int> g_pendingCallbacks = 0;

std::shared_ptr<void> TrackPendingCallback() {
    g_pendingCallbacks++;
    return std::shared_ptr<void>(nullptr, [](void*) { g_pendingCallbacks--; });
}

void CancelSquircleRenders() {
    for (auto& s : g_iconSwaps) {
        if (s.render) Try([&] { s.render.Cancel(); });
        s.render = nullptr;
    }
}

// The taskbar loaded another icon into a bitmap it already had, without setting
// it on the Image again: a tile made from what it held is out of date, unless
// it's loaded from the same file again. Any drawing in progress is of the old
// icon, so it's dropped.
void OnStockChanged(wf::IInspectable const& sender) {
    auto uri = UriText(sender.try_as<wuxm::ImageSource>());
    ForgetCachedSquircle(sender, uri);
    for (auto& s : g_iconSwaps) {
        if (s.look != IconLook::Squircle && s.look != IconLook::Plain) continue;
        if (!s.stock || s.stock != sender) continue;
        if ((s.shown || s.checked) && !uri.empty() && uri == s.tileUri) continue;  // the same again
        NoteIconChange();
        ResetSwap(s);
        if (auto image = s.image.get()) UpdateSwap(s, image);
    }
}

// The retry timer, set for the soonest retry due, if any.
void ArmSquircleRetry() {
    HWND window = EnsureModWindow();
    if (!window) return;
    auto next = std::chrono::steady_clock::time_point::max();
    for (auto& s : g_iconSwaps) {
        if (s.retry) next = std::min(next, s.retryAt);
        if (s.hidden.get()) next = std::min(next, s.hiddenUntil);
    }
    if (next == std::chrono::steady_clock::time_point::max()) {
        KillTimer(window, kSquircleRetryTimer);
        return;
    }
    auto wait = std::chrono::duration_cast<std::chrono::milliseconds>(
        next - std::chrono::steady_clock::now());
    SetTimer(window, kSquircleRetryTimer, (UINT)std::max<long long>(10, wait.count()), nullptr);
}

// Icons not drawn yet, tried again when due.
void RetrySquircles() {
    auto now = std::chrono::steady_clock::now();
    for (auto& s : g_iconSwaps) {
        if (s.hidden.get() && s.hiddenUntil <= now) ShowIconAgain(s);  // its tile's too slow
        if (!s.retry || s.retryAt > now) continue;
        s.retry = false;
        if (auto image = s.image.get()) Try([&] { UpdateSwap(s, image); }, L"Squircle icon");
    }
    ArmSquircleRetry();
}

// The app id of a taskbar button, from its automation id ("Appid: ...").
std::wstring ButtonAppId(wux::FrameworkElement const& button) {
    std::wstring id{wux::Automation::AutomationProperties::GetAutomationId(button)};
    constexpr std::wstring_view prefix = L"Appid: ";
    if (id.size() <= prefix.size() || id.compare(0, prefix.size(), prefix) != 0) return {};
    return id.substr(prefix.size());
}

// IShellItemImageFactory, without linking uuid.lib.
constexpr GUID kIShellItemImageFactoryId = {
    0xbcc18b79, 0xba16, 0x442f, {0x80, 0xc4, 0x8a, 0x59, 0xc3, 0x0c, 0x46, 0x3b}};

// An `px` pixel icon of `name` (a shell path) from the shell, as premultiplied
// BGRA, top row first; empty if there's none.
std::vector<BYTE> ShellIconPixels(std::wstring const& name, int px, int& w, int& h) {
    winrt::com_ptr<IShellItemImageFactory> factory;
    if (FAILED(SHCreateItemFromParsingName(name.c_str(), nullptr, kIShellItemImageFactoryId,
                                           factory.put_void()))) {
        return {};
    }
    HBITMAP bitmap = nullptr;
    if (FAILED(factory->GetImage({px, px}, (SIIGBF)(SIIGBF_ICONONLY | SIIGBF_BIGGERSIZEOK), &bitmap)) ||
        !bitmap) {
        return {};
    }
    std::vector<BYTE> pixels;
    BITMAP bm{};
    if (GetObject(bitmap, sizeof(bm), &bm) && bm.bmWidth > 0 && bm.bmHeight > 0) {
        BITMAPINFO bi{};
        bi.bmiHeader = {sizeof(BITMAPINFOHEADER), bm.bmWidth, -bm.bmHeight, 1, 32, BI_RGB};
        pixels.resize((size_t)bm.bmWidth * bm.bmHeight * 4);
        HDC dc = GetDC(nullptr);
        if (GetDIBits(dc, bitmap, 0, bm.bmHeight, pixels.data(), &bi, DIB_RGB_COLORS) !=
            bm.bmHeight) {
            pixels.clear();
        }
        ReleaseDC(nullptr, dc);
    }
    DeleteObject(bitmap);
    if (pixels.empty()) return {};

    // Usually premultiplied already; with no alpha at all, it's opaque.
    bool anyAlpha = false, straight = false;
    for (size_t i = 0; i < pixels.size(); i += 4) {
        BYTE a = pixels[i + 3];
        anyAlpha |= a != 0;
        straight |= pixels[i] > a || pixels[i + 1] > a || pixels[i + 2] > a;
    }
    for (size_t i = 0; i < pixels.size(); i += 4) {
        if (!anyAlpha) {
            pixels[i + 3] = 255;
        } else if (straight) {
            BYTE a = pixels[i + 3];
            for (int c = 0; c < 3; c++) pixels[i + c] = (BYTE)(pixels[i + c] * a / 255);
        }
    }
    w = bm.bmWidth;
    h = bm.bmHeight;
    return pixels;
}

// Whether `path` is on a local drive (fixed, removable or a RAM disk), so its
// icon can be read without waiting on the network: not a UNC share, a mapped
// network drive, or anything else.
bool IsLocalPath(std::wstring const& path) {
    if (path.size() < 3 || !iswalpha(path[0]) || path[1] != L':' || path[2] != L'\\') {
        return false;
    }
    WCHAR root[] = {path[0], L':', L'\\', L'\0'};
    UINT type = GetDriveTypeW(root);
    return type == DRIVE_FIXED || type == DRIVE_REMOVABLE || type == DRIVE_RAMDISK;
}

// An app's icon as Start shows it, by its app id; or, for an app without an id
// of its own, from its program file: its id is then the file's path, or a known
// folder's id and the path within it. This runs on the taskbar's thread, and
// the shell blocks while it reads an icon, so a program that isn't on a local
// drive is skipped: a slow or offline share would freeze the taskbar.
std::vector<BYTE> AppIconPixels(std::wstring const& appId, int px, int& w, int& h) {
    std::wstring path = AppIdPath(appId);
    if (!path.empty() && !IsLocalPath(path)) {
        Wh_Log(L"Not reading Start's icon for %s: not on a local drive", appId.c_str());
        return {};
    }
    auto pixels = ShellIconPixels(L"shell:AppsFolder\\" + appId, px, w, h);
    if (!pixels.empty() || path.empty()) return pixels;
    return ShellIconPixels(path, px, w, h);
}

// `w` x `h` pixels as a squircle tile, as an image to show; none if there's
// nothing to see in them.
wuxm::ImageSource PixelsTile(std::vector<BYTE> pixels, int w, int h) {
    wuxm::ImageSource result{nullptr};
    if (pixels.empty()) return result;
    IconPixels tile = MakeSquircleIcon(std::move(pixels), w, h);
    if (tile.size) {
        Try([&] { result = BitmapFromPixels(tile.size, tile.size, tile.pixels); }, L"Icon tile");
    }
    return result;
}

// An image file as a tile, its artwork `px` across.
wuxm::ImageSource FileTile(std::wstring const& path, int px) {
    int w = 0, h = 0;
    auto pixels = LoadImagePixels(path, px, w, h);
    return PixelsTile(std::move(pixels), w, h);
}

// Start's own tile, without an icon of the user's: a square of four blues, no
// gaps between them, lightest at the top left and darkest at the bottom right,
// as Windows' logo is shaded. Square, it's trimmed to the tile's shape.
wuxm::ImageSource StartTile(int px) {
    constexpr BYTE kBlues[4][3] = {
        {0x4F, 0xB8, 0xF8},  // top left
        {0x2C, 0x9B, 0xEF},  // top right
        {0x17, 0x82, 0xE2},  // bottom left
        {0x0A, 0x63, 0xC9},  // bottom right
    };
    if (px <= 0) return nullptr;
    std::vector<BYTE> pixels((size_t)px * px * 4);
    for (int y = 0; y < px; y++) {
        for (int x = 0; x < px; x++) {
            auto const& rgb = kBlues[(2 * y >= px ? 2 : 0) + (2 * x >= px ? 1 : 0)];
            BYTE* p = &pixels[((size_t)y * px + x) * 4];
            p[0] = rgb[2];
            p[1] = rgb[1];
            p[2] = rgb[0];
            p[3] = 255;
        }
    }
    return PixelsTile(std::move(pixels), px, px);
}

// For an icon that came back small: the app's icon as Start shows it, in its
// place, if Start's isn't small too. Whether it was.
bool UseStartIcon(IconSwap& s, wuxc::Image const& image, std::vector<BYTE>& pixels, int& w,
                  int& h) {
    if (s.appId.empty()) return false;
    int sw = 0, sh = 0;
    auto start = AppIconPixels(s.appId, MagnifiedPixels(image, 1), sw, sh);
    if (start.empty() || Undersized(start, sw, sh)) return false;
    pixels = std::move(start);
    w = sw;
    h = sh;
    return true;
}

// A tile from the app's icon as Start shows it, for an icon the taskbar's never
// let the mod draw. Not cached: it isn't the taskbar's icon.
bool SquircleFromShell(IconSwap& s, wuxc::Image const& image) {
    auto button = s.button.get();
    std::wstring appId = button ? ButtonAppId(button) : std::wstring();
    if (appId.empty()) return false;
    int w = 0, h = 0;
    auto pixels = AppIconPixels(appId, MagnifiedPixels(image, 1), w, h);
    if (pixels.empty()) return false;
    IconPixels tile = MakeSquircleIcon(std::move(pixels), w, h);
    if (!tile.size) return false;
    s.shown = BitmapFromPixels(tile.size, tile.size, tile.pixels);
    s.tileUri = UriText(s.stock);
    ShowSwap(s, image);
    ShowIconAgain(s);
    return true;
}

// Not laid out or drawn yet, as with a button still sliding in: tried again
// shortly, a limited number of times, then each second for a while. Once the
// quick tries are used up, the tile's made from Start's icon for the app if it
// can be.
void RetrySquircleSoon(IconSwap& s) {
    ++s.retries;
    if (s.retries == kSquircleRetries + 1 && s.look == IconLook::Squircle) {
        auto image = s.image.get();
        if (image && SquircleFromShell(s, image)) return;
    }
    if (s.retries > kSquircleRetries + kSquircleSlowRetries) return;
    auto delay = s.retries > kSquircleRetries
                     ? std::chrono::steady_clock::duration(kSquircleSlowRetryDelay)
                     : std::chrono::steady_clock::duration(
                           std::chrono::milliseconds(kSquircleRetryMs));
    s.retryAt = std::chrono::steady_clock::now() + delay;
    s.retry = true;
    ArmSquircleRetry();
}

// `refused` if drawing it failed outright, as it can for an icon on its own:
// next time, what holds it is drawn instead.
void OnStockPixels(winrt::weak_ref<wuxc::Image> const& weak, wuxm::ImageSource const& stock,
                   int generation, bool refused, std::vector<BYTE> pixels, int w, int h) {
    auto image = weak.get();
    IconSwap* s = image ? FindSwap(image) : nullptr;
    if (!s || s->generation != generation) return;  // gone, or its icon changed since
    s->rendering = false;
    s->render = nullptr;
    bool plain = s->look == IconLook::Plain;
    if (s->stock != stock || (s->look != IconLook::Squircle && !plain)) {
        return UpdateSwap(*s, image);
    }
    if (refused && !s->renderParent) {
        s->renderParent = true;
        if (s->hidden.get()) HideTillMade(*s, image);
        return RetrySquircleSoon(*s);
    }
    if (pixels.empty() || w <= 0 || h <= 0) return RetrySquircleSoon(*s);
    if (RECT r = ShownBounds(pixels, w, h); r.right < r.left) {
        // Nothing drawn, maybe as hiding it hid it from the drawing too:
        // shown, and tried again.
        ShowIconAgain(*s);
        return RetrySquircleSoon(*s);
    }
    bool small = Undersized(pixels, w, h);
    bool fromStart = small && UseStartIcon(*s, image, pixels, w, h);
    if (small) {
        Wh_Log(L"Icon for %s came back small: %s", s->appId.c_str(),
               fromStart ? L"Start's used instead" : L"enlarged");
    }

    if (plain) {
        s->checked = true;
        s->tileUri = UriText(stock);
        ShowIconAgain(*s);
        if (!small) return;  // the taskbar's own is fine
        if (fromStart) {
            s->shown = BitmapFromPixels(w, h, pixels);
        } else {
            IconPixels big = EnlargeArtwork(std::move(pixels), w, h);
            if (!big.size) return;
            s->shown = BitmapFromPixels(big.size, big.size, big.pixels);
        }
        return ShowSwap(*s, image);
    }

    // A tile scales the artwork up anyway, but Start's icon is sharper.
    IconPixels tile = MakeSquircleIcon(std::move(pixels), w, h);
    if (!tile.size) return RetrySquircleSoon(*s);
    s->shown = BitmapFromPixels(tile.size, tile.size, tile.pixels);
    s->tileUri = UriText(stock);
    CacheSquircle(stock, s->appId, s->shown);
    ShowSwap(*s, image);
    ShowIconAgain(*s);
}

std::vector<BYTE> BufferBytes(wss::IBuffer const& buffer) {
    BYTE* data = nullptr;
    winrt::check_hresult(buffer.as<IDockBufferByteAccess>()->Buffer(&data));
    return std::vector<BYTE>(data, data + buffer.Length());
}

// Of `w` x `h` pixels drawn from something `whole` big, the part `rect` covers
// (both in its own units). `w` and `h` become the part's size.
std::vector<BYTE> CropPixels(std::vector<BYTE> const& pixels, int& w, int& h, wf::Rect rect,
                             wf::Size whole) {
    if (whole.Width <= 0 || whole.Height <= 0 || pixels.size() < (size_t)w * h * 4) {
        w = h = 0;
        return {};
    }
    float fx = w / whole.Width, fy = h / whole.Height;
    int x0 = std::clamp((int)std::floor(rect.X * fx), 0, w);
    int y0 = std::clamp((int)std::floor(rect.Y * fy), 0, h);
    int x1 = std::clamp((int)std::ceil((rect.X + rect.Width) * fx), 0, w);
    int y1 = std::clamp((int)std::ceil((rect.Y + rect.Height) * fy), 0, h);
    if (x1 <= x0 || y1 <= y0) {
        w = h = 0;
        return {};
    }
    int cw = x1 - x0, ch = y1 - y0;
    std::vector<BYTE> out((size_t)cw * ch * 4);
    for (int y = 0; y < ch; y++) {
        memcpy(&out[(size_t)y * cw * 4], &pixels[((size_t)(y0 + y) * w + x0) * 4], (size_t)cw * 4);
    }
    w = cw;
    h = ch;
    return out;
}

// Its own pixels if it's a bitmap the mod can read, or else the icon as drawn,
// at its fully magnified size: on its own, or if that's been refused, what
// holds it, cut down to the icon.
void RequestSquircle(IconSwap& s, wuxc::Image const& image) {
    if (s.rendering || !s.stock || s.retries > kSquircleRetries + kSquircleSlowRetries) return;
    if (std::chrono::steady_clock::now() < s.waitUntil) return;  // on the retry timer
    if (g_iconsSettling) return WaitForIconsToSettle();
    if (image.Source() != s.stock) return;
    if (image.ActualWidth() <= 0 || image.ActualHeight() <= 0) return RetrySquircleSoon(s);
    auto weak = winrt::make_weak(image);
    auto stock = s.stock;
    int generation = s.generation;
    if (auto bitmap = stock.try_as<wuxm::Imaging::WriteableBitmap>()) {
        s.rendering = true;
        return OnStockPixels(weak, stock, generation, false, BufferBytes(bitmap.PixelBuffer()),
                             bitmap.PixelWidth(), bitmap.PixelHeight());
    }
    auto queue = winrt::Windows::System::DispatcherQueue::GetForCurrentThread();
    if (!queue) return;

    int px = (int)std::ceil(g_size.icon * g_settings.scale);
    wux::UIElement drawn = image;
    int drawnW = px, drawnH = px;
    wf::Rect crop{0, 0, 0, 0};  // the icon in what's drawn; empty for the icon alone
    wf::Size whole{0, 0};       // what's drawn, in the same units
    if (s.renderParent) {
        auto parent = wuxm::VisualTreeHelper::GetParent(image).try_as<wux::FrameworkElement>();
        if (parent && parent.ActualWidth() > 0 && parent.ActualHeight() > 0) {
            crop = image.TransformToVisual(parent).TransformBounds(
                {0, 0, (float)image.ActualWidth(), (float)image.ActualHeight()});
            whole = {(float)parent.ActualWidth(), (float)parent.ActualHeight()};
            float k = px / std::max(1.0f, std::max(crop.Width, crop.Height));
            drawnW = std::max(1, (int)std::ceil(whole.Width * k));
            drawnH = std::max(1, (int)std::ceil(whole.Height * k));
            drawn = parent;
        }
    }

    s.rendering = true;
    wuxm::Imaging::RenderTargetBitmap target;
    auto render = target.RenderAsync(drawn, drawnW, drawnH);
    s.render = render;
    // Each callback holds the count till it's done, the next one included.
    render.Completed([=, pending = TrackPendingCallback()](wf::IAsyncAction const&,
                                                           wf::AsyncStatus status) {
        queue.TryEnqueue([=, pending = pending] {
            if (g_unloading) return;
            Try([&] {
                if (status != wf::AsyncStatus::Completed) {
                    return OnStockPixels(weak, stock, generation,
                                         status == wf::AsyncStatus::Error, {}, 0, 0);
                }
                auto read = target.GetPixelsAsync();
                if (auto image = weak.get()) {
                    IconSwap* swap = FindSwap(image);
                    if (swap && swap->generation == generation) swap->render = read;
                }
                read.Completed([=, pending = pending](auto const& op, wf::AsyncStatus status) {
                    queue.TryEnqueue([=, pending = pending] {
                        if (g_unloading) return;
                        Try([&] {
                            std::vector<BYTE> pixels;
                            if (status == wf::AsyncStatus::Completed) {
                                pixels = BufferBytes(op.GetResults());
                            }
                            int w = target.PixelWidth(), h = target.PixelHeight();
                            if (crop.Width > 0 && !pixels.empty()) {
                                pixels = CropPixels(pixels, w, h, crop, whole);
                            }
                            OnStockPixels(weak, stock, generation, false, std::move(pixels), w,
                                          h);
                        }, L"Squircle icon");
                    });
                });
            }, L"Squircle icon");
        });
    });
}

// =============================================================================
// RECYCLE BIN
// =============================================================================

std::atomic<int> g_trashFull = -1;  // -1 unknown, 0 empty, 1 full
std::atomic<bool> g_trashChecking = false;
PTP_WORK g_trashWork = nullptr;
ULONG g_trashNotify = 0;
[[clang::no_destroy]] wuxm::ImageSource g_trashIcons[2] = {nullptr, nullptr};

wuxm::ImageSource LoadStockTrashIcon(bool full, int px) {
    SHSTOCKICONINFO info{sizeof(info)};
    HICON icon = nullptr;
    if (FAILED(SHGetStockIconInfo(full ? SIID_RECYCLERFULL : SIID_RECYCLER, SHGSI_ICONLOCATION,
                                  &info)) ||
        SHDefExtractIconW(info.szPath, info.iIcon, 0, &icon, nullptr, px) != S_OK || !icon) {
        Wh_Log(L"Couldn't load Windows' Recycle Bin icon");
        return nullptr;
    }

    ICONINFO ii{};
    BITMAP bm{};
    std::vector<BYTE> pixels;
    if (GetIconInfo(icon, &ii)) {
        if (ii.hbmColor && GetObject(ii.hbmColor, sizeof(bm), &bm)) {
            BITMAPINFO bi{};
            bi.bmiHeader = {sizeof(BITMAPINFOHEADER), bm.bmWidth, -bm.bmHeight, 1, 32, BI_RGB};
            pixels.resize((size_t)bm.bmWidth * bm.bmHeight * 4);
            HDC dc = GetDC(nullptr);
            if (GetDIBits(dc, ii.hbmColor, 0, bm.bmHeight, pixels.data(), &bi, DIB_RGB_COLORS) !=
                bm.bmHeight) {
                pixels.clear();
            }
            ReleaseDC(nullptr, dc);
        }
        if (ii.hbmColor) DeleteObject(ii.hbmColor);
        if (ii.hbmMask) DeleteObject(ii.hbmMask);
    }
    DestroyIcon(icon);
    if (pixels.empty()) return nullptr;

    for (size_t i = 0; i < pixels.size(); i += 4) {  // premultiply
        BYTE a = pixels[i + 3];
        for (int c = 0; c < 3; c++) pixels[i + c] = (BYTE)(pixels[i + c] * a / 255);
    }
    return BitmapFromPixels(bm.bmWidth, bm.bmHeight, pixels);
}

// Loaded once, at the size shown fully magnified, whatever "Use High Resolution
// Icons" is set to. Windows' own without a custom image, or if it's unreadable.
wuxm::ImageSource TrashIcon(bool full, wux::UIElement const& el) {
    auto& icon = g_trashIcons[full];
    if (icon) return icon;
    int px = MagnifiedPixels(el, TrashImageScale(full));
    icon = LoadImageFile(TrashPath(full), px);
    if (!icon) icon = LoadStockTrashIcon(full, px);
    return icon;
}

// A full bin's image can be bigger or smaller than the empty one's, whose size
// the bin is laid out at; it's scaled from its center.
void ApplyTrashImageScale(Plate& p, bool full) {
    float k = TrashImageScale(full) / TrashIconScale();
    if (k == 1 && !p.trashImageScale) return;
    if (!p.trashImageScale) {
        p.trashImageScale = wuxm::ScaleTransform();
        p.trashImage.RenderTransformOrigin({0.5, 0.5});
        p.trashImage.RenderTransform(p.trashImageScale);
    }
    p.trashImageScale.ScaleX(k);
    p.trashImageScale.ScaleY(k);
}

void UpdateTrashIcons() {
    int full = g_trashFull;
    for (auto& p : *g_plates) {
        if (!p.trashImage || p.trashState == full) continue;
        p.trashState = full;
        Try([&] {
            p.trashImage.Source(TrashIcon(full == 1, p.trashImage));
            ApplyTrashImageScale(p, full == 1);
        }, L"Recycle Bin icon");
    }
}

// ---- Watching it ----

void CALLBACK CheckRecycleBin(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK) {
    HRESULT co = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
    SHQUERYRBINFO info{sizeof(info)};
    if (SUCCEEDED(SHQueryRecycleBinW(nullptr, &info))) g_trashFull = info.i64NumItems > 0;
    if (SUCCEEDED(co)) CoUninitialize();
    g_trashChecking = false;
    if (HWND w = g_modWindow) PostMessage(w, kTrashCheckedMessage, 0, 0);
}

void CheckRecycleBinSoon() {
    if (g_trashWork && !g_trashChecking.exchange(true)) SubmitThreadpoolWork(g_trashWork);
}

void StartTrash() {
    if (!g_trashWork) g_trashWork = CreateThreadpoolWork(CheckRecycleBin, nullptr, nullptr);
    HWND w = EnsureModWindow();
    CheckRecycleBinSoon();
    if (g_trashNotify) return;
    PIDLIST_ABSOLUTE bin;
    if (!w || FAILED(SHGetFolderLocation(nullptr, CSIDL_BITBUCKET, nullptr, 0, &bin))) return;
    SHChangeNotifyEntry entry{bin, TRUE};
    g_trashNotify = SHChangeNotifyRegister(w, SHCNRF_ShellLevel, SHCNE_ALLEVENTS,
                                           kTrashChangedMessage, 1, &entry);
    CoTaskMemFree(bin);
    if (!g_trashNotify) Wh_Log(L"Can't watch the Recycle Bin for changes");
}

// A check still running is waited for in Wh_ModBeforeUninit.
void StopTrash() {
    if (g_trashNotify) {
        SHChangeNotifyDeregister(g_trashNotify);
        g_trashNotify = 0;
    }
    g_trashIcons[0] = g_trashIcons[1] = nullptr;
}

// ---- Using it ----

void OpenRecycleBin() {
    ShellExecuteW(nullptr, L"open", L"shell:RecycleBinFolder", nullptr, nullptr, SW_SHOWNORMAL);
}

// `paths` are null-terminated, one after another. Run as a shell job.
void RecycleFiles(std::wstring const& paths) {
    SHFILEOPSTRUCTW op{};
    op.wFunc = FO_DELETE;
    op.pFrom = paths.c_str();
    op.fFlags = FOF_ALLOWUNDO | FOF_NOCONFIRMATION | FOF_WANTNUKEWARNING;
    if (int error = SHFileOperationW(&op)) Wh_Log(L"Recycling failed: %d", error);
    CheckRecycleBinSoon();
}

void EmptyRecycleBin() {
    SHEmptyRecycleBinW(nullptr, nullptr, 0);
    CheckRecycleBinSoon();
}

void SuppressLabel();
void StartFrames();

// The Recycle Bin whose menu is open. The menu takes the pointer from the
// taskbar, so the frame loop follows it instead.
winrt::weak_ref<wux::UIElement> g_trashMenuFor;

void ShowTrashMenu(wux::FrameworkElement const& anchor) {
    SuppressLabel();
    wuxc::MenuFlyout menu;
    auto add = [&](PCWSTR text, bool enabled, void (*action)()) {
        wuxc::MenuFlyoutItem item;
        item.Text(text);
        item.IsEnabled(enabled);
        item.Click([action](wf::IInspectable const&, wux::RoutedEventArgs const&) { action(); });
        menu.Items().Append(item);
    };
    add(L"Open", true, OpenRecycleBin);
    add(HasTrashIcon() ? L"Empty Trash" : L"Empty Recycle Bin", g_trashFull != 0,
        [] { QueueShellJob(EmptyRecycleBin); });
    menu.Placement(wuxc::Primitives::FlyoutPlacementMode::Top);
    menu.Opened([trash = winrt::make_weak(wuxm::VisualTreeHelper::GetParent(anchor)
                                              .as<wux::UIElement>())](auto&&, auto&&) {
        g_trashMenuFor = trash;
        StartFrames();
    });
    menu.Closed([](auto&&, auto&&) { g_trashMenuFor = nullptr; });
    menu.ShowAt(anchor);
}

void AcceptTrashDrag(wux::DragEventArgs const& e) {
    if (!e.DataView().Contains(wadt::StandardDataFormats::StorageItems())) return;
    e.AcceptedOperation(wadt::DataPackageOperation::Move);
    if (auto ui = e.DragUIOverride()) {
        ui.Caption(HasTrashIcon() ? L"Move to Trash" : L"Move to Recycle Bin");
    }
    e.Handled(true);
}

// Finishes right away: the source window waits for the drop, and the paths are
// read from it, so waiting would freeze both. Reporting no operation keeps the
// source from deleting the files itself.
void OnTrashDrop(wux::DragEventArgs const& e) {
    e.Handled(true);
    e.AcceptedOperation(wadt::DataPackageOperation::None);
    if (!e.DataView().Contains(wadt::StandardDataFormats::StorageItems())) return;
    QueueShellJob([items = winrt::make_agile(e.DataView().GetStorageItemsAsync())] {
        std::wstring paths;
        try {
            for (auto const& item : items.get().get()) {
                auto path = item.Path();
                if (path.empty()) continue;
                paths.append(path.c_str(), path.size());
                paths.push_back(L'\0');
            }
        } catch (...) {
            Wh_Log(L"Reading the dropped files failed: 0x%08X", winrt::to_hresult());
            return;
        }
        if (!paths.empty()) RecycleFiles(paths);
    });
}

void HookUpTrash(Plate& p) {
    p.trash.AllowDrop(true);
    p.trashTapped = p.trash.Tapped(
        winrt::auto_revoke, [](wf::IInspectable const&, wuxi::TappedRoutedEventArgs const& e) {
            e.Handled(true);
            OpenRecycleBin();
        });
    p.trashRightTapped = p.trash.RightTapped(
        winrt::auto_revoke,
        [anchor = winrt::make_weak(p.trashMenuAnchor)](
            wf::IInspectable const&, wuxi::RightTappedRoutedEventArgs const& e) {
            e.Handled(true);
            if (auto el = anchor.get()) Try([&] { ShowTrashMenu(el); });
        });
    auto accept = [](wf::IInspectable const&, wux::DragEventArgs const& e) {
        Try([&] { AcceptTrashDrag(e); });
    };
    p.trashDragEnter = p.trash.DragEnter(winrt::auto_revoke, accept);
    p.trashDragOver = p.trash.DragOver(winrt::auto_revoke, accept);
    p.trashDrop = p.trash.Drop(
        winrt::auto_revoke, [](wf::IInspectable const&, wux::DragEventArgs const& e) {
            Try([&] { OnTrashDrop(e); }, L"Recycle Bin drop");
        });
}

// As wide as its spot in the dock, which its label covers too, so clicks and
// drops reach it wherever the label shows.
float TrashWidth() {
    return std::max(g_size.icon * TrashIconScale(), g_size.trashSlot);
}

void AddTrash(Plate& p, wuxc::Panel const& panel, wux::UIElement const& row) {
    float size = g_size.icon * TrashIconScale();
    wuxc::Grid trash;
    PlaceInPanel(panel, trash);
    trash.Width(TrashWidth());
    trash.Height(size);
    trash.Background(wuxm::SolidColorBrush(Color{0, 0, 0, 0}));  // clickable everywhere
    wuxc::Image image;
    image.Stretch(wuxm::Stretch::Uniform);
    trash.Children().Append(image);

    // Its menu opens above this, the width of the icon.
    wuxc::Border anchor;
    anchor.VerticalAlignment(wux::VerticalAlignment::Top);
    anchor.Height(0);
    anchor.Margin({0, -kTrashMenuLift * g_size.icon / kDefaultIconSize, 0, 0});
    anchor.IsHitTestVisible(false);
    trash.Children().Append(anchor);
    if (!InsertBesideRow(panel, row, trash)) return;

    p.trash = trash;
    p.trashImage = image;
    p.trashMenuAnchor = anchor;
    if (g_settings.dividerBeforeTrash) p.divider = AddDivider(panel, row);
    HookUpTrash(p);
    StartTrash();
}

// As big as the dock's icons are now: they may have shrunk to fit, or grown back.
void SizeTrash(Plate& p) {
    if (!p.trash) return;
    double width = TrashWidth(), height = g_size.icon * TrashIconScale();
    if (p.trash.Width() == width && p.trash.Height() == height) return;
    p.trash.Width(width);
    p.trash.Height(height);
    if (p.trashMenuAnchor) {
        p.trashMenuAnchor.Margin({0, -kTrashMenuLift * g_size.icon / kDefaultIconSize, 0, 0});
    }
    p.trashState = -2;  // its icon loaded again, at the new size
    UpdateTrashIcons();
}

// Grows from its bottom edge like a button, and shifts with its divider. A
// XAML transform rather than its composition visual (as for buttons), so the
// area that takes clicks and drops grows and moves with it: XAML hit-tests by
// layout and render transforms, not by what composition does to the visual.
void SetTrashScale(Plate& p, float s, float tx, float dividerTx) {
    if (!p.trash) return;
    p.trashScale = s;
    p.trashShift = tx;
    p.trashGapShift = dividerTx;
    float slide = p.slideTrash.At(NowMs());
    p.slideTrash.applied = slide;
    tx += slide;
    dividerTx += slide;
    if (!p.trashTransform) {
        p.trashTransform = wuxm::CompositeTransform();
        p.trash.RenderTransform(p.trashTransform);
    }
    float size = g_size.icon * TrashIconScale();
    auto& t = p.trashTransform;
    t.CenterX(TrashWidth() / 2);
    t.CenterY(size / 2 + g_size.icon / 2);
    t.ScaleX(s);
    t.ScaleY(s);
    t.TranslateX(tx);
    if (p.divider) SetTranslation(p.divider, dividerTx);
}

// =============================================================================
// RUNNING INDICATORS
// =============================================================================
// A round dot in place of Windows' pill. It lives beside the dock, not in the
// button, so it follows its icon sideways without growing. With "App Activity
// Indicators" set to Windows 11 Style, Windows' own pill shows instead, or with
// Hybrid Dots, that pill made round; with None, neither. Its progress bar
// always shows. Windows' own are moved up under the icon.

struct Indicator {
    winrt::weak_ref<wux::FrameworkElement> button;
    winrt::weak_ref<wux::FrameworkElement> element;  // Windows' indicator
    winrt::weak_ref<wux::VisualStateGroup> states;
    wux::VisualStateGroup::CurrentStateChanged_revoker stateChanged;
    wux::FrameworkElement::SizeChanged_revoker sizeChanged;
    winrt::weak_ref<wux::FrameworkElement> progress;  // Windows' progress bar
    wux::FrameworkElement::SizeChanged_revoker progressSizeChanged;
    int64_t progressVisibilityToken = 0;
    wuxc::Border dot{nullptr};
    winrt::weak_ref<wuxc::Panel> dotPanel;
    float dotLeft = NAN, dotTop = NAN, dotShift = NAN;  // last applied
};

[[clang::no_destroy]] std::optional<std::list<Indicator>> g_indicators{std::in_place};

// Set while the plates are measured. Dots are only added then, as the taskbar
// doesn't like its tree changing while it updates a button.
bool g_measuringPlates = false;

// While an app's dragged (the taskbar's own drag), nothing's magnified and the
// dots are hidden.
bool g_dragging = false;

void ReapplyButton(wux::FrameworkElement const& button);

Indicator* FindIndicator(wux::FrameworkElement const& button) {
    if (!g_indicators) return nullptr;
    for (auto& i : *g_indicators) {
        if (i.button.get() == button) return &i;
    }
    return nullptr;
}

Indicator& IndicatorFor(wux::FrameworkElement const& button) {
    if (Indicator* i = FindIndicator(button)) return *i;
    auto& i = g_indicators->emplace_back();
    i.button = winrt::make_weak(button);
    return i;
}

void RefreshButton(winrt::weak_ref<wux::FrameworkElement> const& weak) {
    Try([&] {
        if (auto button = weak.get()) ReapplyButton(button);
    });
}

bool ProgressShown(Indicator const& i) {
    auto el = i.progress.get();
    return el && el.Visibility() == Visibility::Visible && el.ActualWidth() > 0;
}

constexpr float kDotSize = 4;     // the same at every Size, as on a Mac
constexpr float kDotRise = 0.4f;  // its center, up from the dock's bottom, of the padding

wux::VisualStateGroup FindRunningStates(wux::FrameworkElement const& indicator,
                                        wux::FrameworkElement const& button) {
    for (auto current = wuxm::VisualTreeHelper::GetParent(indicator); current;
         current = wuxm::VisualTreeHelper::GetParent(current)) {
        if (auto fe = current.try_as<wux::FrameworkElement>()) {
            for (auto group : wux::VisualStateManager::GetVisualStateGroups(fe)) {
                if (group.Name() == L"RunningIndicatorStates") return group;
            }
        }
        if (current == button) break;
    }
    return nullptr;
}

bool IsRunning(Indicator& i) {
    auto group = i.states.get();
    if (auto state = group ? group.CurrentState() : nullptr) {
        winrt::hstring name = state.Name();
        if (name == L"ActiveRunningIndicator" || name == L"InactiveRunningIndicator" ||
            name == L"RequestingAttentionRunningIndicator") {
            return true;
        }
        if (std::wstring_view(name).find(L"RunningIndicator") != std::wstring_view::npos) {
            return false;  // another of its states
        }
    }
    // No states to go by: whether Windows shows its indicator.
    auto el = i.element.get();
    return el && el.Visibility() == Visibility::Visible && el.Opacity() > 0.01 &&
           el.ActualWidth() > 0 && el.ActualHeight() > 0;
}

void HideDot(Indicator& i) {
    if (i.dot && i.dot.Visibility() != Visibility::Collapsed) {
        i.dot.Visibility(Visibility::Collapsed);
    }
}

void RemoveDot(Indicator& i) {
    if (!i.dot) return;
    Try([&] {
        uint32_t index;
        auto panel = i.dotPanel.get();
        if (panel && panel.Children().IndexOf(i.dot, index)) panel.Children().RemoveAt(index);
    });
    i.dot = nullptr;
    i.dotPanel = nullptr;
}

// Where indicators are centered: under the icon, in the dock's bottom padding.
float IndicatorCenterY(Plate const& p) {
    return p.top + g_size.dockHeight - g_size.padY * kDotRise;
}

// Windows' pill or progress bar, in its button: moved to the dots' spot at its
// own size, undoing the button's magnification `s` (see SetScale).
void PlaceStockIndicator(wux::FrameworkElement const& el, wux::FrameworkElement const& button,
                         float s) {
    Plate* p = GetRowPlate(wuxm::VisualTreeHelper::GetParent(button));
    auto visual = wuxh::ElementCompositionPreview::GetElementVisual(el);
    float width = (float)el.ActualWidth(), height = (float)el.ActualHeight();
    float centerY = height / 2;  // in the button, as laid out
    wux::DependencyObject current = el;
    while (current && current != button) {
        if (auto ui = current.try_as<wux::UIElement>()) centerY += ui.ActualOffset().y;
        current = wuxm::VisualTreeHelper::GetParent(current);
    }
    if (!p || !current || s <= 0) {
        visual.Scale({1, 1, 1});
        return SetTranslation(el, 0, 0);
    }
    auto slot = wuxc::Primitives::LayoutInformation::GetLayoutSlot(button);
    float buttonTop = p->originY + slot.Y + (float)button.Margin().Top;
    float pivotY = (float)button.ActualHeight() / 2 + g_size.icon / 2;
    float y = pivotY + (IndicatorCenterY(*p) - p->offsetY - buttonTop - pivotY) / s;
    visual.CenterPoint({width / 2, height / 2, 0});
    visual.Scale({1 / s, 1 / s, 1});
    SetTranslation(el, 0, y - centerY);
}

// ---- Hybrid dots ----
// Windows' own pill made round (as in notdominicc's version), so its states
// still show: the active app in the accent color, an app asking for attention
// in orange. Those states only set its fill; otherwise it's the dots' color.

void ApplyHybridDotShape(wux::FrameworkElement const& el) {
    if (el.Width() != kDotSize) el.Width(kDotSize);
    if (el.Height() != kDotSize) el.Height(kDotSize);
    if (auto r = el.try_as<wuxs::Rectangle>()) {
        if (r.RadiusX() != kDotSize / 2) r.RadiusX(kDotSize / 2);
        if (r.RadiusY() != kDotSize / 2) r.RadiusY(kDotSize / 2);
    }
}

void ShapeHybridDot(wux::FrameworkElement const& el) {
    if (el.try_as<wuxs::Shape>()) Track(el, wuxs::Shape::FillProperty());  // see ColorHybridDot
    Track(el, wux::FrameworkElement::WidthProperty(), ApplyHybridDotShape);
    Track(el, wux::FrameworkElement::HeightProperty(), ApplyHybridDotShape);
    if (el.try_as<wuxs::Rectangle>()) {
        Track(el, wuxs::Rectangle::RadiusXProperty(), ApplyHybridDotShape);
        Track(el, wuxs::Rectangle::RadiusYProperty(), ApplyHybridDotShape);
    }
    ApplyHybridDotShape(el);
}

void UnshapeHybridDot(wux::FrameworkElement const& el) {
    if (!FindOverride(el, wux::FrameworkElement::WidthProperty())) return;
    for (auto& dp : {wux::FrameworkElement::WidthProperty(),
                     wux::FrameworkElement::HeightProperty(), wuxs::Rectangle::RadiusXProperty(),
                     wuxs::Rectangle::RadiusYProperty(), wuxs::Shape::FillProperty()}) {
        Release(el, dp);
    }
}

// Its own fill, under the states' colors. Tracked by ShapeHybridDot.
void ColorHybridDot(wux::FrameworkElement const& el, wux::FrameworkElement const& button) {
    auto shape = el.try_as<wuxs::Shape>();
    Plate* p = GetRowPlate(wuxm::VisualTreeHelper::GetParent(button));
    if (!shape || !p) return;
    auto local = el.ReadLocalValue(wuxs::Shape::FillProperty()).try_as<wuxm::SolidColorBrush>();
    if (!local || local.Color() != p->dotColor) shape.Fill(wuxm::SolidColorBrush(p->dotColor));
}

void PlaceStockIndicators(wux::FrameworkElement const& button, float s) {
    Indicator* i = FindIndicator(button);
    if (!i) return;
    if (auto progress = i->progress.get()) {
        Try([&] { PlaceStockIndicator(progress, button, s); });
    }
    auto el = i->element.get();
    auto shown = g_settings.indicators;
    if (!el || shown == Indicators::Dots || shown == Indicators::None) return;
    Try([&] {
        PlaceStockIndicator(el, button, s);
        if (g_settings.indicators == Indicators::HybridDots) ColorHybridDot(el, button);
    });
}

// Centered under the icon. `tx` is how far magnification moves the icon
// sideways. Not while Windows' own pill or progress bar shows there.
void PlaceDot(wux::FrameworkElement const& button, float tx) {
    Indicator* i = FindIndicator(button);
    if (!i) return;
    Plate* p = GetRowPlate(wuxm::VisualTreeHelper::GetParent(button));
    auto panel = p ? p->panel.get() : nullptr;
    auto row = p ? p->row.get() : nullptr;
    if (!panel || !row || p->baseWidth <= 0 || button.Visibility() != Visibility::Visible ||
        button.ActualWidth() <= 0 || !IsRunning(*i) || g_dragging ||
        g_settings.indicators != Indicators::Dots || ProgressShown(*i)) {
        return HideDot(*i);
    }
    auto slot = wuxc::Primitives::LayoutInformation::GetLayoutSlot(button);
    auto margin = button.Margin();
    float y = slot.Y + (float)margin.Top;
    if (y < -button.ActualHeight() || y > button.ActualHeight()) return HideDot(*i);

    if (i->dot && i->dotPanel.get() != panel) RemoveDot(*i);
    if (!i->dot) {
        if (!g_measuringPlates) return MarkPlatesDirty();
        wuxc::Border dot;
        PlaceInPanel(panel, dot);
        dot.IsHitTestVisible(false);
        dot.UseLayoutRounding(false);
        dot.Background(wuxm::SolidColorBrush(p->dotColor));
        if (!InsertBesideRow(panel, row, dot, false)) return;  // under icons sliding by
        i->dot = dot;
        i->dotPanel = winrt::make_weak(panel);
        i->dotLeft = i->dotTop = i->dotShift = NAN;
    }

    float size = kDotSize;
    if (i->dot.Width() != size) {
        i->dot.Width(size);
        i->dot.Height(size);
        i->dot.CornerRadius({size / 2, size / 2, size / 2, size / 2});
    }
    float centerX = p->originX + slot.X + (float)margin.Left + (float)button.ActualWidth() / 2;
    float centerY = IndicatorCenterY(*p);
    float left = std::round(centerX - size / 2);
    float top = std::round(centerY - size / 2);
    if (left != i->dotLeft || top != i->dotTop) {
        i->dot.Margin({left, top, 0, 0});
        i->dotLeft = left;
        i->dotTop = top;
    }
    if (tx != i->dotShift) {
        SetTranslation(i->dot, tx);
        i->dotShift = tx;
    }
    if (i->dot.Visibility() != Visibility::Visible) i->dot.Visibility(Visibility::Visible);
}

void ColorDots(Plate& p) {
    auto panel = p.panel.get();
    if (!panel || !g_indicators) return;
    for (auto& i : *g_indicators) {
        if (i.dot && i.dotPanel.get() == panel) i.dot.Background(wuxm::SolidColorBrush(p.dotColor));
        auto el = i.element.get();
        auto button = i.button.get();
        if (el && button && g_settings.indicators == Indicators::HybridDots) {
            Try([&] { ColorHybridDot(el, button); });
        }
    }
}

// Hides every dot, as while dragging.
void HideDots() {
    for (auto& i : *g_indicators) HideDot(i);
}

// The taskbar lifts a dragged app by growing it; it's kept at its size and
// dimmed instead.
constexpr double kDraggedOpacity = 0.7;

winrt::weak_ref<wux::FrameworkElement> g_draggedButton, g_draggedIcon;
double g_draggedIconOpacity = 1;

void FlattenDragged() {
    auto button = g_draggedButton.get();
    if (!button) return;
    std::vector<wux::UIElement> parts{button};
    if (wuxm::VisualTreeHelper::GetChildrenCount(button) > 0) {
        if (auto root = wuxm::VisualTreeHelper::GetChild(button, 0).try_as<wux::UIElement>()) {
            parts.push_back(root);
        }
    }
    if (auto icon = g_draggedIcon.get()) parts.push_back(icon);
    for (auto& part : parts) {
        auto visual = wuxh::ElementCompositionPreview::GetElementVisual(part);
        for (PCWSTR property : {L"Scale", L"Scale.X", L"Scale.Y"}) visual.StopAnimation(property);
        if (visual.Scale() != wf::Numerics::float3{1, 1, 1}) visual.Scale({1, 1, 1});
    }
}

void DimDragged(wux::FrameworkElement const& button) {
    g_draggedButton = winrt::make_weak(button);
    g_draggedIcon = nullptr;
    ForEachDescendant(button, 6, [](wux::FrameworkElement const& el) {
        if (g_draggedIcon.get() || el.Name() != L"Icon") return true;
        g_draggedIcon = winrt::make_weak(el);
        g_draggedIconOpacity = el.Opacity();
        el.Opacity(kDraggedOpacity);
        return false;
    });
    FlattenDragged();
}

void UndimDragged() {
    if (auto icon = g_draggedIcon.get()) icon.Opacity(g_draggedIconOpacity);
    g_draggedButton = g_draggedIcon = nullptr;
}

// The dragged app follows the pointer (Windows moves it), so it doesn't slide
// as the others move round it, nor as it's dropped into its place.
constexpr float kDropSettleMs = 400;
winrt::weak_ref<wux::FrameworkElement> g_droppedButton;
float g_droppedAt = -kDropSettleMs;  // NowMs

bool FollowsPointer(wux::FrameworkElement const& button) {
    if (g_dragging && g_draggedButton.get() == button) return true;
    return NowMs() < g_droppedAt + kDropSettleMs && g_droppedButton.get() == button;
}

void EndDragging() {
    if (g_dragging && g_draggedButton.get()) {
        g_droppedButton = g_draggedButton;
        g_droppedAt = NowMs();
    }
    UndimDragged();
    if (!g_dragging) return;
    g_dragging = false;
    for (auto& b : *g_buttons) {
        if (auto el = b.element.get()) ReapplyButton(el);  // its dot back
    }
    MarkPlatesDirty();
}

// Ended without word from the taskbar, once the button's up.
void CheckDragging() {
    int primary = GetSystemMetrics(SM_SWAPBUTTON) ? VK_RBUTTON : VK_LBUTTON;
    if (g_dragging && !(GetAsyncKeyState(primary) & 0x8000)) EndDragging();
}

// Hides dots in `panel` whose buttons aren't among `icons`.
void HideStrayDots(wuxc::Panel const& panel, std::vector<Icon> const& icons) {
    for (auto& i : *g_indicators) {
        if (!i.dot || i.dotPanel.get() != panel) continue;
        auto button = i.button.get();
        if (!button || std::none_of(icons.begin(), icons.end(),
                                    [&](Icon const& icon) { return icon.element == button; })) {
            HideDot(i);
        }
    }
}

// Hides Windows' indicator (unless it's the one shown) and follows its state.
// The taskbar can replace it.
void TrackIndicator(wux::FrameworkElement const& el, wux::FrameworkElement const& button) {
    auto shown = g_settings.indicators;
    float opacity = shown == Indicators::Dots || shown == Indicators::None ? 0.0f : 1.0f;
    wuxh::ElementCompositionPreview::GetElementVisual(el).Opacity(opacity);
    if (g_settings.indicators == Indicators::HybridDots) ShapeHybridDot(el);
    else UnshapeHybridDot(el);
    Indicator& i = IndicatorFor(button);
    if (i.element.get() == el) return;
    i.element = winrt::make_weak(el);
    i.stateChanged.revoke();
    i.states = nullptr;
    if (auto group = FindRunningStates(el, button)) {
        i.states = winrt::make_weak(group);
        i.stateChanged = group.CurrentStateChanged(
            winrt::auto_revoke,
            [weak = i.button](wf::IInspectable const&, wux::VisualStateChangedEventArgs const&) {
                RefreshButton(weak);
            });
    }
    i.sizeChanged = el.SizeChanged(
        winrt::auto_revoke, [weak = i.button](wf::IInspectable const&,
                                              wux::SizeChangedEventArgs const&) {
            RefreshButton(weak);
        });
    MarkPlatesDirty();
}

// Followed as it appears, disappears and resizes.
void TrackProgress(wux::FrameworkElement const& el, wux::FrameworkElement const& button) {
    Indicator& i = IndicatorFor(button);
    if (i.progress.get() == el) return;
    if (auto old = i.progress.get(); old && i.progressVisibilityToken) {
        old.UnregisterPropertyChangedCallback(wux::UIElement::VisibilityProperty(),
                                              i.progressVisibilityToken);
    }
    i.progress = winrt::make_weak(el);
    i.progressSizeChanged = el.SizeChanged(
        winrt::auto_revoke, [weak = i.button](wf::IInspectable const&,
                                              wux::SizeChangedEventArgs const&) {
            RefreshButton(weak);
        });
    i.progressVisibilityToken = el.RegisterPropertyChangedCallback(
        wux::UIElement::VisibilityProperty(),
        [weak = i.button](wux::DependencyObject const&, wux::DependencyProperty const&) {
            RefreshButton(weak);
        });
    MarkPlatesDirty();
}

void ForgetGoneIndicators() {
    g_indicators->remove_if([](Indicator& i) {
        if (i.button.get()) return false;
        RemoveDot(i);
        return true;
    });
}

void RestoreStockIndicator(wux::FrameworkElement const& el) {
    Try([&] {
        auto visual = wuxh::ElementCompositionPreview::GetElementVisual(el);
        visual.Opacity(1);
        visual.Scale({1, 1, 1});
        SetTranslation(el, 0, 0);
    });
}

void RestoreIndicators() {
    for (auto& i : *g_indicators) {
        i.stateChanged.revoke();
        i.sizeChanged.revoke();
        i.progressSizeChanged.revoke();
        RemoveDot(i);
        if (auto el = i.element.get()) RestoreStockIndicator(el);
        if (auto el = i.progress.get()) {
            Try([&] {
                el.UnregisterPropertyChangedCallback(wux::UIElement::VisibilityProperty(),
                                                     i.progressVisibilityToken);
            });
            RestoreStockIndicator(el);
        }
    }
    g_indicators->clear();
}

// =============================================================================
// MAGNIFICATION
// =============================================================================

// The row under the pointer, re-read every frame.
struct RowItem {
    winrt::weak_ref<wux::FrameworkElement> element;
    float center = 0;  // in the row
    float width = 0;
    float scale = 1.0f;
    float shift = 0;
    bool trash = false;
};

std::vector<RowItem> g_row;
winrt::weak_ref<wux::UIElement> g_rowParent;

bool g_pointerOver = false;
float g_pointerX = 0;
bool g_dockExpanded = false;  // magnified, or about to be
bool g_anchorLeftEnd = true;  // which end stays put as the dock grows
float g_maxGrowth = 0, g_lastGrowth = 0;
float g_growLeftEase = 0;     // what's left of a jump when the end that stays put switches

// Scales the icon from its bottom edge, shifts it by `tx`, and moves it down
// onto the dock.
void SetScale(wux::FrameworkElement const& el, float s, float tx = 0) {
    if (Button* b = FindButton(el)) {
        b->slide.applied = b->slide.At(NowMs());
        tx += b->slide.applied;
    }
    auto visual = wuxh::ElementCompositionPreview::GetElementVisual(el);
    float pivotY = (float)el.ActualHeight() / 2 + g_size.icon / 2;
    visual.CenterPoint({(float)el.ActualWidth() / 2, pivotY, 0});
    visual.Scale({s, s, 1});
    SetTranslation(el, tx, GetRowOffsetY(wuxm::VisualTreeHelper::GetParent(el)));
    PlaceDot(el, tx);
    PlaceStockIndicators(el, s);
}

void ReapplyButton(wux::FrameworkElement const& button) {
    for (auto& item : g_row) {
        if (item.element.get() == button) return SetScale(button, item.scale, item.shift);
    }
    SetScale(button, 1.0f);
}

void SetDividerShift(Divider& d, float tx) {
    d.magnified = tx;
    d.slide.applied = d.slide.At(NowMs());
    tx += d.slide.applied;
    if (!d.element || std::fabs(tx - d.shift) < 0.01f) return;
    d.shift = tx;
    SetTranslation(d.element, tx);
}

// (Re)builds the row in `parent`, keeping sizes in progress. Icons that left
// it go back to normal size.
void BuildRow(wux::UIElement const& parent) {
    std::vector<RowItem> old = std::move(g_row);
    Plate* oldPlate = GetRowPlate(g_rowParent.get());
    if (g_rowParent.get() != parent) g_maxGrowth = g_lastGrowth = g_growLeftEase = 0;
    g_row.clear();
    g_rowParent = nullptr;

    // Carries over an item's size in progress, if it was in the row.
    auto carryOver = [&old](RowItem& item, auto matches) {
        for (auto& o : old) {
            if (!matches(o)) continue;
            item.scale = o.scale;
            item.shift = o.shift;
            o = RowItem{};  // still in the row; don't reset it below
            return;
        }
    };

    if (parent) {
        for (auto& icon : GetIcons(parent)) {
            float pitch = std::max(1.0f, icon.width + 2 * g_size.buttonMargin);
            RowItem item{winrt::make_weak(icon.element), icon.left + icon.width / 2, pitch};
            carryOver(item, [&](RowItem const& o) { return o.element.get() == icon.element; });
            g_row.push_back(item);
        }
        std::sort(g_row.begin(), g_row.end(),
                  [](RowItem const& a, RowItem const& b) { return a.center < b.center; });
        g_rowParent = winrt::make_weak(parent);

        Plate* p = GetRowPlate(parent);
        if (p && p->trash && !g_row.empty() && p->trash.Visibility() == Visibility::Visible) {
            RowItem item{nullptr, p->trashCenter, g_size.trashSlot};
            item.trash = true;
            if (oldPlate == p) carryOver(item, [](RowItem const& o) { return o.trash; });
            g_row.push_back(item);
        }
    }

    for (auto& o : old) {
        if (auto icon = o.element.get()) SetScale(icon, 1.0f);
        if (o.trash && oldPlate) SetTrashScale(*oldPlate, 1.0f, 0, 0);
    }
    if (oldPlate && oldPlate != GetRowPlate(parent)) {
        for (auto& d : oldPlate->dividers) SetDividerShift(d, 0);
    }
}

// =============================================================================
// LAYOUT
// =============================================================================

void MoveExplorerFirst(wux::FrameworkElement const& explorer);
void NoteExplorerFirst();

// The bin's room past the last app, as the row's margin, not the last button's,
// so the taskbar sees each app at its real size when dragging. Kept on top of
// any margin the taskbar sets.
void ApplyRowMargin(wux::FrameworkElement const& row) {
    Plate* p = GetRowPlate(row);
    if (!p) return;
    auto current = row.Margin();
    auto want = p->rowMargin;
    want.Right += p->rowRoom;
    if (current == want) return;
    if (current != p->rowMargin) p->rowMargin = current;  // the taskbar set its own
    want = p->rowMargin;
    want.Right += p->rowRoom;
    row.Margin(want);
}

void ApplyRowRoom(Plate& p, float room) {
    auto row = p.row.get().try_as<wux::FrameworkElement>();
    if (!row) return;
    auto dp = wux::FrameworkElement::MarginProperty();
    if (!FindOverride(row, dp)) {
        p.rowMargin = row.Margin();
        Track(row, dp, ApplyRowMargin);
    }
    p.rowRoom = room;
    auto want = p.rowMargin;
    want.Right += room;
    if (row.Margin() != want) row.Margin(want);
}

// Space for the Recycle Bin's divider, if it has one.
float TrashDividerSpace() { return g_settings.dividerBeforeTrash ? g_size.dividerSpace : 0; }

struct ButtonLayout {
    wux::FrameworkElement last{nullptr};                // the bin follows it
    std::vector<wux::FrameworkElement> beforeDividers;  // left to right
};

// Room for dividers, as extra margin. File Explorer is moved first for real, if
// it isn't.
ButtonLayout LayOutButtons(Plate& p, std::vector<Icon> const& icons) {
    // The taskbar's own order.
    std::vector<size_t> order(icons.size());
    std::iota(order.begin(), order.end(), 0);
    std::sort(order.begin(), order.end(),
              [&](size_t a, size_t b) { return icons[a].slotLeft < icons[b].slotLeft; });

    constexpr size_t kNone = SIZE_MAX;
    size_t firstApp = kNone, explorer = kNone;
    for (size_t i : order) {
        if (!IsAppButton(icons[i].element)) continue;
        if (firstApp == kNone) firstApp = i;
        if (explorer == kNone && IsFileExplorer(icons[i].element)) explorer = i;
    }
    if (g_settings.explorerFirst && explorer != kNone) {
        if (explorer != firstApp) {
            if (!g_dragging) MoveExplorerFirst(icons[explorer].element);
        } else {
            NoteExplorerFirst();
        }
    }

    std::vector<float> left(icons.size()), right(icons.size());
    ApplyRowRoom(p, p.trash ? g_size.trashSpace : 0);

    // Dividers go after the icon at these places in the order, counted from 1:
    // after Start, Task View and a leading File Explorer, with apps after them,
    // and the custom ones. None after the last, where the bin's goes.
    std::vector<size_t> after;
    if (g_settings.dividerAfterLeft) {
        size_t i = 0;
        while (i < order.size() && !IsAppButton(icons[order[i]].element)) i++;
        if (i < order.size() && IsFileExplorer(icons[order[i]].element)) i++;
        if (i > 0) after.push_back(i);
    }
    for (int at : g_settings.customDividers) after.push_back((size_t)at);
    std::sort(after.begin(), after.end());
    after.erase(std::unique(after.begin(), after.end()), after.end());

    ButtonLayout layout;
    layout.last = icons[order.back()].element;
    for (size_t at : after) {
        if (at < 1 || at >= order.size()) continue;
        right[order[at - 1]] += g_size.dividerSpace;
        layout.beforeDividers.push_back(icons[order[at - 1]].element);
    }

    bool changed = false;
    for (size_t i = 0; i < icons.size(); i++) {
        Button* b = FindButton(icons[i].element);
        if (!b || (std::fabs(b->extraLeft - left[i]) < 0.5f &&
                   std::fabs(b->extraRight - right[i]) < 0.5f)) {
            continue;
        }
        b->extraLeft = left[i];
        b->extraRight = right[i];
        ApplySpacing(icons[i].element);
        changed = true;
    }
    if (changed) MarkPlatesDirty();
    return layout;
}

void NoteIconsMoving();
ULONGLONG g_slideLogSince = 0;  // [slide] logging, to be removed
bool g_inLayoutMeasure = false;  // see MeasureAfterLayout
void ApplyTrayLooks();

// As many dividers as `count`, added or removed at the end.
void MatchDividerCount(Plate& p, wuxc::Panel const& panel, wux::UIElement const& row,
                       size_t count) {
    while (p.dividers.size() > count) {
        auto& d = p.dividers.back();
        uint32_t index;
        if (d.element && panel.Children().IndexOf(d.element, index)) {
            panel.Children().RemoveAt(index);
        }
        p.dividers.pop_back();
    }
    while (p.dividers.size() < count) {
        auto element = AddDivider(panel, row);
        if (!element) return;
        element.Background(wuxm::SolidColorBrush(p.dividerColor));
        p.dividers.push_back({element});
    }
}

// =============================================================================
// FITTING
// =============================================================================
// As on a Mac, the dock shrinks rather than run into the tray: its icons as
// big as leaves room for it, with every one at its widest as magnification
// spreads them, between the screen's edges, or the tray (unless it's hidden
// for good), as far from them as the dock is from the bottom. It grows back as
// apps close. Windows moves centered icons left rather than let them reach the
// tray; if it does anyway, it's keeping more room there than the tray takes,
// and the dock leaves that too. The taskbar keeps its height, and icons their
// resolution, so nothing else moves.

constexpr float kFitHysteresis = 4;  // more room needed to grow back than to stay
constexpr float kPushedBy = 3;       // Windows has moved the dock this far left: pushed

// How much more room than the tray's Windows keeps at the right of a screen
// this wide, learned as it pushes the dock left (see FitPlate). It only grows,
// so the dock doesn't flip between sizes as Windows moves an app in and out
// of its overflow menu.
struct {
    float screen = 0;
    float extra = 0;
} g_windowsRoom;

// How far left of center Windows puts the dock anyway, measured away from the
// edges, on a screen this wide.
struct {
    float screen = 0;
    float off = 0;
} g_naturalOffset;

std::wstring g_fitLogged;  // [fit] logging, to be removed: what was last logged

float TrayRoomFor(wux::XamlRoot const& root, bool background);

// Whether Windows' taskbar settings center the icons, as the dock needs.
bool TaskbarCentered() {
    DWORD value = 1, size = sizeof(value);
    RegGetValueW(HKEY_CURRENT_USER, LR"(Software\Microsoft\Windows\CurrentVersion\Explorer\Advanced)",
                 L"TaskbarAl", RRF_RT_REG_DWORD, nullptr, &value, &size);
    return value != 0;
}

// The dock's width, unmagnified, with `buttons` icons of size `z`, `dividers`
// between them, and the bin or not (as MeasurePlate measures it).
float DockWidthFor(Sizes const& z, size_t buttons, size_t dividers, bool trash) {
    if (!buttons) return 0;
    return buttons * (z.icon + z.gap) - z.gap + 2 * z.padX + dividers * z.dividerSpace +
           (trash ? z.trashSpace : 0);
}

// How much wider `items` icons of size `z` get, at most, as they magnify: with
// the pointer over the middle, anywhere across an icon.
float GrowthRoom(Sizes const& z, size_t items) {
    float grow = g_settings.scale - 1;
    if (grow <= 0 || !items || z.radius <= 0) return 0;
    float pitch = z.icon + z.gap, middle = items * pitch / 2, most = 0;
    for (int step = 0; step < 8; step++) {
        float x = middle + step * pitch / 8, sum = 0;
        for (size_t i = 0; i < items; i++) {
            float d = std::fabs(x - (i + 0.5f) * pitch);
            if (d < z.radius) sum += (std::cos(d / z.radius * 3.14159265f) + 1) / 2;
        }
        most = std::max(most, sum);
    }
    return grow * most * pitch;
}

// The largest icons `p` has room for, now that it's measured with `icons` and
// `dividers`; left as it was while the taskbar's still laying them out.
void FitPlate(Plate& p, std::vector<Icon> const& icons, size_t dividers) {
    auto panel = p.panel.get();
    auto root = panel ? panel.XamlRoot() : nullptr;
    auto content = root ? root.Content().try_as<wux::FrameworkElement>() : nullptr;
    if (!content || icons.empty() || g_fullIcon <= 0) return;
    size_t laidOut = 0;
    for (auto& icon : icons) {
        if (std::fabs(icon.width - g_size.buttonWidth) <= 1) laidOut++;
    }
    if (laidOut * 2 < icons.size()) return;

    float screen = (float)content.ActualWidth(), center = screen / 2;
    float gap = SizesFor(g_fullIcon).bottomGap;
    bool trash = (bool)p.trash;
    size_t items = icons.size() + (trash ? 1 : 0);
    if (g_windowsRoom.screen != screen) g_windowsRoom = {screen, 0};
    auto trayRoom = [&] {
        return (g_settings.tray == Show::Hidden ? 0 : TrayRoomFor(root, true)) +
               g_windowsRoom.extra;
    };

    // Pushed left anyway, near the tray, from where Windows centers it while
    // it's short (which may not be quite the middle): Windows keeps more room
    // than the tray's, as much more as it takes to stop where it was pushed to.
    // Only once the taskbar's done: it centers the icons a moment after they're
    // resized, so two measurements in a row must agree.
    float x = panel.TransformToVisual(content).TransformPoint({0, 0}).X;
    float center0 = center - (x + p.baseLeft + p.baseWidth / 2);  // left of the middle
    float right = x + p.baseLeft + p.baseWidth;
    float trayFrame = TrayRoomFor(root, false);
    bool nearTray = right > screen - trayFrame - 3 * g_size.buttonWidth;
    if (!nearTray || g_naturalOffset.screen != screen) {
        g_naturalOffset = {screen, nearTray ? 0 : center0};
    }
    float off = center0 - g_naturalOffset.off;
    bool settled = std::fabs(center0 - p.lastCenter0) < 0.5f &&
                   std::fabs(p.baseWidth - p.lastWidth) < 0.5f;
    p.lastCenter0 = center0;
    p.lastWidth = p.baseWidth;
    p.unsettled = settled ? 0 : p.unsettled + 1;
    if (!settled && p.unsettled < 10) MarkPlatesDirty();  // measured again
    if (settled && TaskbarCentered() && off > kPushedBy && nearTray) {
        // The unmagnified right end that's allowed, and where Windows stopped it.
        float allowed = screen - trayRoom() - gap - GrowthRoom(g_size, items) / 2;
        float more = allowed - right + 2;
        if (more > 0) {
            g_windowsRoom.extra += more;
            Wh_Log(L"Windows moved the dock %.0f px left, near the tray: it keeps %.0f px more "
                   L"room there than the tray takes",
                   off, g_windowsRoom.extra);
        }
    }

    float tray = trayRoom();
    float room = 2 * std::min(center - gap, screen - tray - gap - center);
    // What the sum misses, as wider buttons (Windows' search box) and rounding.
    float extra = p.baseWidth - DockWidthFor(g_size, icons.size(), dividers, trash);
    auto need = [&](float icon) {
        Sizes z = SizesFor(icon);
        return DockWidthFor(z, icons.size(), dividers, trash) + extra + GrowthRoom(z, items);
    };
    float current = g_size.icon, fit = kMinFitIcon;
    for (float icon = g_fullIcon; icon >= kMinFitIcon; icon--) {
        if (need(icon) + (icon > current ? kFitHysteresis : 0) <= room) {
            fit = icon;
            break;
        }
    }
    p.fitIcon = fit;

    // [fit] logging, to be removed: once per change.
    wchar_t line[400];
    swprintf_s(line,
               L"[fit] %zu icons%s, screen %.0f, tray %s %.0f (its frame %.0f, Windows keeps "
               L"%.0f more), room %.0f; dock %.0f at %.0f px (extra %.0f), magnified up to "
               L"%.0f more, needs %.0f; %.0f left of the middle (usually %.0f), right end "
               L"%.0f%s%s; fits %.0f px",
               icons.size(), trash ? L" and the bin" : L"", screen,
               g_settings.tray == Show::Hidden ? L"hidden," : L"", tray, trayFrame,
               g_windowsRoom.extra, room, p.baseWidth, current, extra,
               GrowthRoom(g_size, items), need(current), center0, g_naturalOffset.off, right,
               nearTray ? L" (near the tray)" : L"", settled ? L"" : L" (still moving)", fit);
    if (g_fitLogged != line) {
        g_fitLogged = line;
        Wh_Log(L"%s", line);
    }
}

// Re-measures the plate around the icons, as if nothing were magnified.
void MeasurePlate(Plate& p) {
    auto row = p.row.get();
    auto panel = p.panel.get();
    if (!row || !panel || !p.surface.root) return;
    if (!p.frame.get()) {
        if (auto frame = FindTaskbarFrame(row.as<wux::FrameworkElement>())) {
            p.frame = winrt::make_weak(frame);
        }
    }

    auto icons = GetIcons(row);
    if (icons.size() != p.iconCount) {
        if (p.iconCount) NoteIconsMoving();  // an app opened or closed
        if (p.iconCount) g_slideLogSince = GetTickCount64();  // [slide] logging, to be removed
        p.iconCount = icons.size();
    }
    if (icons.empty()) {
        for (auto& el : PlateParts(p)) {
            if (el) el.Visibility(Visibility::Collapsed);
        }
        HideStrayDots(panel, icons);
        return;
    }

    constexpr float kMax = std::numeric_limits<float>::max();
    float minLeft = kMax, maxRight = -kMax, minTop = kMax, maxBottom = -kMax, widths = 0;
    for (auto& icon : icons) {
        minLeft = std::min(minLeft, icon.left);
        maxRight = std::max(maxRight, icon.left + icon.width);
        minTop = std::min(minTop, icon.top);
        maxBottom = std::max(maxBottom, icon.top + icon.height);
        widths += icon.width;
    }

    // Buttons are wider than their icons; the padding is from the icons.
    float empty = std::max(0.0f, (widths / icons.size() - g_size.icon) / 2);
    float pad = g_size.padX - empty;
    auto origin = row.TransformToVisual(panel).TransformPoint({0, 0});
    p.baseLeft = origin.X + minLeft - pad;
    p.baseWidth = maxRight - minLeft + 2 * pad;

    // The taskbar centers icons in its full height; they move down onto the dock.
    float height = g_size.dockHeight;
    p.top = (float)panel.ActualHeight() - g_size.bottomGap - height;
    float centerY = p.top + g_size.padY + g_size.icon / 2;
    float offsetY = centerY - (origin.Y + (minTop + maxBottom) / 2);

    auto& root = p.surface.root;
    double current = root.Height();  // NaN when new
    if (std::isnan(current) || std::fabs(current - height) > 0.5) {
        root.Height(height);
        p.left = p.width = -1;  // ApplyPlate shapes it again
    }
    if (root.Visibility() != Visibility::Visible) root.Visibility(Visibility::Visible);

    auto layout = LayOutButtons(p, icons);
    auto iconOf = [&](wux::FrameworkElement const& el) -> Icon const& {
        for (auto& icon : icons) {
            if (icon.element == el) return icon;
        }
        return icons.back();
    };
    // `offset` into the space after `icon`.
    auto placeDivider = [&](wuxc::Border const& divider, Icon const& icon, float offset) {
        float x = origin.X + icon.left + icon.width + g_size.buttonMargin + offset;
        divider.Margin({x - kDividerWidth / 2, p.top + DividerInset(), 0, 0});
        double dividerHeight = std::max(1.0f, g_size.dockHeight - 2 * DividerInset());
        if (divider.Height() != dividerHeight) divider.Height(dividerHeight);  // shrunk to fit
        if (divider.Visibility() != Visibility::Visible) divider.Visibility(Visibility::Visible);
    };

    if (p.trash) {
        SizeTrash(p);  // the dock may have shrunk to fit, or grown back
        auto& last = iconOf(layout.last);
        float size = g_size.icon * TrashIconScale();
        p.trashCenter = last.left + last.width + g_size.buttonMargin + TrashDividerSpace() +
                        g_size.trashSlot / 2;
        if (g_settings.dividerBeforeTrash) {
            p.trashCenter -= kTrashShift * g_size.icon / kDefaultIconSize;  // at Size 60
        }
        p.baseWidth += g_size.trashSpace;
        p.trash.Margin({origin.X + p.trashCenter - TrashWidth() / 2, centerY - size / 2, 0, 0});
        p.trash.Visibility(Visibility::Visible);
        if (p.divider) placeDivider(p.divider, last, g_size.dividerLeft);
        UpdateTrashIcons();
    }

    // Whatever layout moved slides there (see Sliding), apps moving aside for
    // one that's dragged too (but not that one: see FollowsPointer). As one
    // goes (fewer icons, or the dock narrowing at the same icon size), after
    // its icon's left.
    float now = NowMs();
    bool closing = p.measured && !g_dragging &&
                   (icons.size() < p.layoutCount ||
                    (icons.size() == p.layoutCount && g_size.icon == p.lastIcon &&
                     p.baseWidth < p.lastRight - p.lastLeft - 0.25f));
    if (closing && g_closeHoldUntil <= now) g_closeHoldUntil = now + kCloseHoldMs;
    float begin = closing ? g_closeHoldUntil : now;

    MatchDividerCount(p, panel, row, layout.beforeDividers.size());
    for (size_t i = 0; i < p.dividers.size(); i++) {
        auto& d = p.dividers[i];
        auto before = layout.beforeDividers[i];
        if (d.after.get() != before) d.after = winrt::make_weak(before);
        placeDivider(d.element, iconOf(before), g_size.dividerLeft);
        float x = (float)d.element.Margin().Left;
        if (!std::isnan(d.x) && std::fabs(x - d.x) > 0.25f) {
            d.slide.Moved(x - d.x, now, begin);
            SetDividerShift(d, d.magnified);
        }
        d.x = x;
    }

    p.offsetY = offsetY;
    p.originX = origin.X;
    p.originY = origin.Y;
    // [slide] logging, to be removed: for a second after the icons change.
    if (ULONGLONG since = GetTickCount64() - g_slideLogSince; since < 1000) {
        float narrowest = 1e6f, widest = 0;
        for (auto& icon : icons) {
            narrowest = std::min(narrowest, icon.width);
            widest = std::max(widest, icon.width);
        }
        Wh_Log(L"[slide] +%llu ms%s: %zu icons (%.1f to %.1f wide, %.1f expected), dock %.1f "
               L"to %.1f (%.1f wide), first icon at %.1f",
               since, g_inLayoutMeasure ? L" after layout" : L"", icons.size(), narrowest,
               widest, g_size.buttonWidth, p.baseLeft, p.baseLeft + p.baseWidth, p.baseWidth,
               origin.X + minLeft);
    }
    for (auto& icon : icons) {
        Button* b = FindButton(icon.element);
        if (!b) continue;
        float center = origin.X + icon.left + icon.width / 2;
        if (!std::isnan(b->layoutCenter) && std::fabs(center - b->layoutCenter) > 0.25f) {
            bool follows = FollowsPointer(icon.element);
            if (!follows) b->slide.Moved(center - b->layoutCenter, now, begin);
            if (g_dragging || follows) {  // [slide] logging, to be removed
                Wh_Log(L"[slide] %s %s moved %.1f%s", g_dragging ? L"dragging:" : L"dropped:",
                       follows ? L"the dragged app" : L"an app", center - b->layoutCenter,
                       follows ? L" (not slid)" : L"");
            }
        }
        b->layoutCenter = center;
        b->rowCenter = icon.left + icon.width / 2;
    }
    float left = p.baseLeft, right = p.baseLeft + p.baseWidth, trashX = origin.X + p.trashCenter;
    if (p.measured) {
        if (std::fabs(left - p.lastLeft) > 0.25f) {
            p.slideLeft.Moved(left - p.lastLeft, now, begin);
        }
        if (std::fabs(right - p.lastRight) > 0.25f) {
            p.slideRight.Moved(right - p.lastRight, now, begin);
        }
        if (p.trash && std::fabs(trashX - p.lastTrash) > 0.25f) {
            p.slideTrash.Moved(trashX - p.lastTrash, now, begin);
            SetTrashScale(p, p.trashScale, p.trashShift, p.trashGapShift);
        }
    }
    p.measured = true;
    p.lastIcon = g_size.icon;
    p.layoutCount = icons.size();
    p.lastLeft = left;
    p.lastRight = right;
    p.lastTrash = trashX;
    for (auto& icon : icons) ReapplyButton(icon.element);
    HideStrayDots(panel, icons);
    Try([&] { FitPlate(p, icons, layout.beforeDividers.size()); }, L"Fitting");
}

// Positions the plate, widened by `extra` in all, `extraLeft` of it leftward.
void ApplyPlate(Plate& p, float extraLeft, float extra) {
    auto& root = p.surface.root;
    if (!root) return;
    p.appliedExtraLeft = extraLeft;
    p.appliedExtra = extra;
    float now = NowMs();
    p.slideLeft.applied = p.slideLeft.At(now);
    p.slideRight.applied = p.slideRight.At(now);
    float left = p.baseLeft + p.slideLeft.applied - extraLeft;
    float width = p.baseWidth + p.slideRight.applied - p.slideLeft.applied + extra;
    if (std::fabs(left - p.left) > 0.25f || std::fabs(width - p.width) > 0.25f) {
        root.Margin({left, p.top, 0, 0});
        root.Width(width);
        p.left = left;
        p.width = width;
        ShapePlate(p);
    }
}

// While the buttons are changing (apps opening and closing, the dock shrinking
// to fit), the plates are measured again once XAML's laid them out, where
// they really are for this frame: the taskbar centers its buttons in a second
// layout pass, after the frame loop has measured them. What's changed is laid
// out again before the frame's drawn. A few times a frame at most, so changes
// that lead to more layout can't go round forever.
extern int g_platesDirtyFrames;
int g_frameNumber = 0;
int g_layoutMeasuresFrame = -1, g_layoutMeasures = 0;

void MeasureAfterLayout() {
    // Not while the frame loop's measuring them (UpdateLayout lays them out).
    if (g_unloading || g_inLayoutMeasure || g_measuringPlates || !g_plates) return;
    if (g_layoutMeasuresFrame != g_frameNumber) {
        g_layoutMeasuresFrame = g_frameNumber;
        g_layoutMeasures = 0;
    }
    if (g_layoutMeasures >= 3) return;
    g_inLayoutMeasure = true;
    g_measuringPlates = true;
    bool any = false;
    for (auto& p : *g_plates) {
        // Measured again while they're changing, or as soon as layout's moved
        // any icon: an app opening or closing doesn't change the row's size
        // (it spans the taskbar), so nothing else says so before it's drawn,
        // and its icons would be drawn in their new places a frame before they
        // started sliding there.
        if (g_platesDirtyFrames <= 0) {
            auto row = p.row.get();
            if (!row || !p.measured) continue;
            auto icons = GetIcons(row);
            if (icons.size() == p.layoutCount && !IconsMoved(icons)) continue;
            MarkPlatesDirty();  // and again over the next frames
        }
        any = true;
        float left = p.baseLeft, width = p.baseWidth;
        Try([&] { MeasurePlate(p); }, L"MeasurePlate");
        if (p.baseLeft != left || p.baseWidth != width) {
            p.left = p.width = -1;  // where it is now, this frame
            ApplyPlate(p, p.appliedExtraLeft, p.appliedExtra);
        }
    }
    if (any) g_layoutMeasures++;
    g_measuringPlates = false;
    g_inLayoutMeasure = false;
}

void EnsurePlate(wux::FrameworkElement const& button) {
    auto row = wuxm::VisualTreeHelper::GetParent(button).try_as<wux::FrameworkElement>();
    if (!row || GetRowPlate(row) || !FindTaskbarFrame(button)) return;
    auto panel = wuxm::VisualTreeHelper::GetParent(row).try_as<wuxc::Panel>();
    if (!panel) return;

    auto& p = g_plates->emplace_back();
    BuildSurface(p.surface);
    PlaceInPanel(panel, p.surface.root);
    // Just before the icon row: above the taskbar's background, below the icons.
    uint32_t index = 0;
    if (!panel.Children().IndexOf(row, index)) index = 0;
    panel.Children().InsertAt(index, p.surface.root);
    p.row = winrt::make_weak(row.as<wux::UIElement>());
    p.panel = winrt::make_weak(panel);

    auto onSize = [](wf::IInspectable const&, wux::SizeChangedEventArgs const&) {
        MarkPlatesDirty();
    };
    p.rowSizeChanged = row.SizeChanged(winrt::auto_revoke, onSize);
    p.panelSizeChanged = panel.SizeChanged(winrt::auto_revoke, onSize);
    p.panelLayoutUpdated = panel.LayoutUpdated(
        winrt::auto_revoke, [](wf::IInspectable const&, wf::IInspectable const&) {
            Try(MeasureAfterLayout, L"MeasureAfterLayout");
        });
    p.panelThemeChanged = panel.ActualThemeChanged(
        winrt::auto_revoke, [](wux::FrameworkElement const&, wf::IInspectable const&) {
            for (auto& plate : *g_plates) Try([&] { ApplyPlateLook(plate); });
            ApplyTrayLooks();
        });
    if (g_settings.recycleBin) AddTrash(p, panel, row);
    ApplyPlateLook(p);
}

// Clearing the list also revokes the plates' event handlers. Dots go too, and
// come back over the new plates when they're measured.
void RemovePlates() {
    for (auto& i : *g_indicators) RemoveDot(i);
    for (auto& p : *g_plates) {
        RemoveSurfaceBlur(p.surface);
        if (auto row = p.row.get().try_as<wux::FrameworkElement>()) {
            Try([&] { Release(row, wux::FrameworkElement::MarginProperty()); });
        }
        auto panel = p.panel.get();
        if (!panel) continue;
        if (p.hideY != 0) Try([&] { SetTranslation(panel, 0, 0); });
        for (auto& el : PlateParts(p)) {
            uint32_t index;
            if (el && panel.Children().IndexOf(el, index)) panel.Children().RemoveAt(index);
        }
    }
    g_plates->clear();
}

// =============================================================================
// AUTO-HIDE
// =============================================================================
// The dock slides down out of view; the taskbar window stays, so the hot
// corners keep working. It comes back when the pointer reaches the bottom edge
// below it, and slides away once the pointer and any menu it opened are gone.
// Hybrid does this only while a window is maximized.

constexpr float kDockSlideMs = 250;
constexpr int kDockHideTicks = 6;  // polls, about half a second

bool g_dockRevealed = false;
float g_dockShown = 1;  // 0 hidden to 1 shown, animated
int g_dockAwayTicks = 0;
bool g_windowMaximized = false;  // for Hybrid
bool g_taskViewOpen = false;

void ScheduleOverWindows(bool autoHide);
bool IsFlyout(HWND hwnd, bool popups);
int StripHeight(UINT dpi);

bool DockHides() {
    return g_settings.autoHide == AutoHide::On || g_taskViewOpen ||
           (g_settings.autoHide == AutoHide::Hybrid && g_windowMaximized);
}
bool DockHidden() { return DockHides() && !g_dockRevealed; }
bool DockFullyHidden() { return DockHidden() && g_dockShown <= 0; }

void RevealDock(bool reveal) {
    g_dockAwayTicks = 0;
    if (reveal == g_dockRevealed) return;
    g_dockRevealed = reveal;
    if (!reveal) g_pointerOver = false;
    ScheduleOverWindows(false);  // the window is clipped to what's shown
    StartFrames();
}

// The dock's span along the bottom of monitor `m`, in pixels.
bool DockSpanOn(RECT const& m, LONG& left, LONG& right) {
    bool found = false;
    for (auto& p : *g_plates) {
        auto panel = p.panel.get();
        auto root = panel ? panel.XamlRoot() : nullptr;
        auto content = root ? root.Content().try_as<wux::FrameworkElement>() : nullptr;
        if (!content || p.baseWidth <= 0) continue;
        double scale = root.RasterizationScale();
        bool otherMonitor = std::fabs(content.ActualWidth() * scale - (m.right - m.left)) > 2;
        if (otherMonitor && g_plates->size() > 1) continue;
        float x = panel.TransformToVisual(content).TransformPoint({0, 0}).X + p.baseLeft;
        LONG l = m.left + std::lround(x * scale);
        LONG r = m.left + std::lround((x + p.baseWidth) * scale);
        left = found ? std::min(left, l) : l;
        right = found ? std::max(right, r) : r;
        found = true;
    }
    return found;
}

// ---- Hybrid ----
// Maximized means spanning a dock's screen from edge to edge, or being snapped
// (as in Snap layouts), and reaching down to the dock. A window merely touching
// the dock doesn't count. Checked when a window moves, shows, hides, closes or
// comes to the front, at most every kMaximizedCheckMs, rather than polled.

constexpr UINT kMaximizedCheckMs = 50;
std::vector<HWINEVENTHOOK> g_windowEventHooks;
bool g_maximizedCheckPending = false;

bool IsAppWindow(HWND w) {
    if (!IsWindowVisible(w) || IsIconic(w)) return false;
    if (GetWindowLongPtr(w, GWL_EXSTYLE) & (WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE)) return false;
    BOOL cloaked = FALSE;  // on another desktop, or a closed shell panel
    if (SUCCEEDED(DwmGetWindowAttribute(w, DWMWA_CLOAKED, &cloaked, sizeof(cloaked))) && cloaked) {
        return false;
    }
    WCHAR cls[64];
    if (!GetClassName(w, cls, ARRAYSIZE(cls))) return false;
    for (PCWSTR shell : {L"Progman", L"WorkerW", L"Shell_TrayWnd", L"Shell_SecondaryTrayWnd",
                         L"Windows.UI.Core.CoreWindow", L"XamlExplorerHostIslandWindow",
                         kWindowClass}) {
        if (!wcscmp(cls, shell)) return false;
    }
    return true;
}

// Snapped by Windows, as in Snap layouts (on builds that can tell).
bool IsSnapped(HWND w) {
    using IsWindowArranged_t = BOOL(WINAPI*)(HWND hwnd);
    static auto isArranged = (IsWindowArranged_t)GetProcAddress(GetModuleHandle(L"user32.dll"),
                                                                "IsWindowArranged");
    return isArranged && isArranged(w);
}

// How far above the dock's strip a window's top is kept, for its title bar.
int TitleBarHeight(UINT dpi) {
    return GetSystemMetricsForDpi(SM_CYCAPTION, dpi) +
           GetSystemMetricsForDpi(SM_CYSIZEFRAME, dpi) +
           GetSystemMetricsForDpi(SM_CXPADDEDBORDER, dpi);
}

DWORD IntegrityLevel(HANDLE token) {
    alignas(TOKEN_MANDATORY_LABEL) BYTE buffer[sizeof(TOKEN_MANDATORY_LABEL) +
                                                SECURITY_MAX_SID_SIZE];
    DWORD size;
    if (!GetTokenInformation(token, TokenIntegrityLevel, buffer, sizeof(buffer), &size)) {
        return 0;
    }
    PSID sid = ((TOKEN_MANDATORY_LABEL*)buffer)->Label.Sid;
    return *GetSidSubAuthority(sid, *GetSidSubAuthorityCount(sid) - 1);
}

// An app run as administrator, whose windows Windows doesn't let Explorer move.
bool IsAboveExplorer(HWND w) {
    static DWORD explorer = [] {
        HANDLE token = nullptr;
        DWORD level = OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &token)
                          ? IntegrityLevel(token)
                          : 0;
        if (token) CloseHandle(token);
        return level;
    }();
    DWORD pid = 0;
    GetWindowThreadProcessId(w, &pid);
    HANDLE process = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
    HANDLE token = nullptr;
    bool above = !process || !OpenProcessToken(process, TOKEN_QUERY, &token) ||
                 IntegrityLevel(token) > explorer;
    if (token) CloseHandle(token);
    if (process) CloseHandle(process);
    return above;
}

// Also true for an administrator's window left with its title bar under the
// dock, which can't be moved back up (see KeepTitleBarAboveDock): the dock
// makes way for it instead.
bool IsWindowMaximized() {
    struct Screen {
        RECT rect;
        LONG dockTop;  // where the dock's strip starts
        LONG lowest;   // the lowest a window's top can be, its title bar above that
    };
    std::vector<Screen> screens;
    ForEachTaskbarWindow([&screens](HWND tb, bool) {
        HMONITOR monitor = MonitorFromWindow(tb, MONITOR_DEFAULTTONEAREST);
        MONITORINFO mi{sizeof(mi)};
        UINT dpiX, dpiY;
        if (GetMonitorInfo(monitor, &mi) &&
            SUCCEEDED(GetDpiForMonitor(monitor, MDT_EFFECTIVE_DPI, &dpiX, &dpiY))) {
            LONG dockTop = mi.rcMonitor.bottom - StripHeight(dpiY);
            screens.push_back({mi.rcMonitor, dockTop, dockTop - TitleBarHeight(dpiY)});
        }
    });
    struct Search {
        std::vector<Screen>* screens;
        bool found = false;
    } search{&screens};
    EnumWindows(
        [](HWND w, LPARAM l) -> BOOL {
            auto& search = *(Search*)l;
            RECT r;
            if (!IsAppWindow(w) ||
                (FAILED(DwmGetWindowAttribute(w, DWMWA_EXTENDED_FRAME_BOUNDS, &r, sizeof(r))) &&
                 !GetWindowRect(w, &r))) {
                return TRUE;
            }
            for (auto& s : *search.screens) {
                bool wide = r.left <= s.rect.left + 1 && r.right >= s.rect.right - 1;
                bool on = r.left < s.rect.right && r.right > s.rect.left;
                bool covered = (wide || (on && IsSnapped(w))) && r.top < s.dockTop &&
                               r.bottom >= s.dockTop - 1;
                bool stuck = on && r.top > s.lowest && r.top < s.rect.bottom &&
                             IsAboveExplorer(w);
                if (covered || stuck) {
                    search.found = true;
                    return FALSE;
                }
            }
            return TRUE;
        },
        (LPARAM)&search);
    return search.found;
}

// Windows already have the whole screen in Hybrid, so the dock just slides
// away, unless the pointer's on it, when it waits until it's been gone for half
// a second.
void SetWindowMaximized(bool maximized) {
    if (maximized == g_windowMaximized) return;
    g_windowMaximized = maximized;
    g_dockRevealed = maximized && g_pointerOver;
    g_dockAwayTicks = 0;
    ScheduleOverWindows(false);  // the clip
    StartFrames();
}

void ScheduleMaximizedCheck() {
    if (g_maximizedCheckPending || g_windowEventHooks.empty()) return;
    HWND w = g_modWindow;
    g_maximizedCheckPending = w && SetTimer(w, kMaximizedCheckTimer, kMaximizedCheckMs, nullptr);
}

void CheckWindowMaximized() {
    g_maximizedCheckPending = false;
    if (!g_unloading && g_settings.autoHide == AutoHide::Hybrid) {
        SetWindowMaximized(IsWindowMaximized());
    }
}

void CALLBACK OnWindowEvent(HWINEVENTHOOK, DWORD, HWND hwnd, LONG idObject, LONG idChild, DWORD,
                            DWORD) {
    if (!g_unloading && hwnd && idObject == OBJID_WINDOW && idChild == CHILDID_SELF) {
        ScheduleMaximizedCheck();
    }
}

// On the taskbar's thread, whose message loop delivers the events.
void WatchWindows(bool watch) {
    if (watch == !g_windowEventHooks.empty()) return;
    if (!watch) {
        for (HWINEVENTHOOK hook : g_windowEventHooks) UnhookWinEvent(hook);
        g_windowEventHooks.clear();
        return;
    }
    constexpr std::pair<DWORD, DWORD> kEvents[] = {
        {EVENT_SYSTEM_FOREGROUND, EVENT_SYSTEM_FOREGROUND},
        {EVENT_SYSTEM_MINIMIZESTART, EVENT_SYSTEM_MINIMIZEEND},
        {EVENT_OBJECT_DESTROY, EVENT_OBJECT_HIDE},  // and EVENT_OBJECT_SHOW
        {EVENT_OBJECT_LOCATIONCHANGE, EVENT_OBJECT_LOCATIONCHANGE},
        {EVENT_OBJECT_CLOAKED, EVENT_OBJECT_UNCLOAKED},
    };
    for (auto [first, last] : kEvents) {
        HWINEVENTHOOK hook =
            SetWinEventHook(first, last, nullptr, OnWindowEvent, 0, 0, WINEVENT_OUTOFCONTEXT);
        if (hook) g_windowEventHooks.push_back(hook);
    }
}

// ---- Windows dropped under the dock ----
// In Hybrid, Windows keeps no room for the dock, so a window can be dragged
// down until its title bar is under it, where it can't be grabbed again. As on
// a Mac, one dropped there moves back up until its title bar is just above the
// dock. Windows doesn't let Explorer move an administrator's windows, so for
// those the dock slides away instead (see IsWindowMaximized). With Auto-hide
// Off, Windows stops title bars above the dock's strip itself; with On, the
// dock's hidden.

HWINEVENTHOOK g_windowDropHook = nullptr;

void KeepTitleBarAboveDock(HWND w) {
    RECT r;
    if (!IsAppWindow(w) || IsZoomed(w) ||
        (FAILED(DwmGetWindowAttribute(w, DWMWA_EXTENDED_FRAME_BOUNDS, &r, sizeof(r))) &&
         !GetWindowRect(w, &r))) {
        return;
    }
    HMONITOR monitor = MonitorFromPoint({(r.left + r.right) / 2, r.top}, MONITOR_DEFAULTTONULL);
    bool docked = false;
    ForEachTaskbarWindow([&](HWND tb, bool) {
        docked = docked || MonitorFromWindow(tb, MONITOR_DEFAULTTONEAREST) == monitor;
    });
    MONITORINFO mi{sizeof(mi)};
    UINT dpiX, dpiY;
    RECT window;
    if (!monitor || !docked || !GetMonitorInfo(monitor, &mi) ||
        FAILED(GetDpiForMonitor(monitor, MDT_EFFECTIVE_DPI, &dpiX, &dpiY)) ||
        !GetWindowRect(w, &window)) {
        return;
    }
    LONG lowest = mi.rcMonitor.bottom - StripHeight(dpiY) - TitleBarHeight(dpiY);
    if (r.top <= lowest) return;
    SetWindowPos(w, nullptr, window.left, window.top - (r.top - lowest), 0, 0,
                 SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_ASYNCWINDOWPOS);
}

void CALLBACK OnWindowDropped(HWINEVENTHOOK, DWORD, HWND hwnd, LONG idObject, LONG idChild, DWORD,
                              DWORD) {
    if (!g_unloading && hwnd && idObject == OBJID_WINDOW && idChild == CHILDID_SELF) {
        Try([&] { KeepTitleBarAboveDock(hwnd); });
    }
}

// On the taskbar's thread, like WatchWindows.
void WatchWindowDrops(bool watch) {
    if (watch == (g_windowDropHook != nullptr)) return;
    if (!watch) {
        UnhookWinEvent(g_windowDropHook);
        g_windowDropHook = nullptr;
        return;
    }
    g_windowDropHook = SetWinEventHook(EVENT_SYSTEM_MOVESIZEEND, EVENT_SYSTEM_MOVESIZEEND, nullptr,
                                       OnWindowDropped, 0, 0, WINEVENT_OUTOFCONTEXT);
}

// ---- Task View ----
// The dock slides away while Task View's open, whatever Auto-hide is set to,
// and the tray with it, so Task View's row of desktops can sit at the bottom
// (see TASK VIEW).

std::vector<HWINEVENTHOOK> g_taskViewHooks;
HWND g_taskViewWindow = nullptr;

// Explorer's full-screen Task View window, on the MultitaskingView thread.
bool IsTaskViewWindow(HWND w) {
    constexpr DWORD kAppChromeBand = 5;  // ZBID_IMMERSIVE_APPCHROME
    using GetWindowBand_t = BOOL(WINAPI*)(HWND hwnd, DWORD* band);
    static auto getWindowBand =
        (GetWindowBand_t)GetProcAddress(GetModuleHandle(L"user32.dll"), "GetWindowBand");
    DWORD pid = 0, band = 0;
    DWORD tid = GetWindowThreadProcessId(w, &pid);
    WCHAR cls[64];
    BOOL cloaked = FALSE;
    if (!tid || pid != GetCurrentProcessId() || !IsWindowVisible(w) ||
        (SUCCEEDED(DwmGetWindowAttribute(w, DWMWA_CLOAKED, &cloaked, sizeof(cloaked))) &&
         cloaked) ||
        !GetClassName(w, cls, ARRAYSIZE(cls)) || wcscmp(cls, L"XamlExplorerHostIslandWindow") ||
        !getWindowBand || !getWindowBand(w, &band) || band != kAppChromeBand) {
        return false;
    }
    HANDLE thread = OpenThread(THREAD_QUERY_LIMITED_INFORMATION, FALSE, tid);
    if (!thread) return false;
    PWSTR description = nullptr;
    bool found = SUCCEEDED(GetThreadDescription(thread, &description)) && description &&
                 !wcscmp(description, L"MultitaskingView");
    if (description) LocalFree(description);
    CloseHandle(thread);
    return found;
}

void SetTaskViewOpen(HWND w) {
    if ((w != nullptr) == g_taskViewOpen) return;
    g_taskViewWindow = w;
    g_taskViewOpen = w != nullptr;
    g_dockRevealed = false;
    g_dockAwayTicks = 0;
    ScheduleOverWindows(false);  // the clip
    StartFrames();
}

void CALLBACK OnTaskViewEvent(HWINEVENTHOOK, DWORD event, HWND hwnd, LONG idObject, LONG idChild,
                              DWORD, DWORD) {
    if (g_unloading || !hwnd || idObject != OBJID_WINDOW || idChild != CHILDID_SELF) return;
    bool shown = event == EVENT_OBJECT_SHOW || event == EVENT_OBJECT_UNCLOAKED;
    if (!shown && hwnd == g_taskViewWindow) {
        SetTaskViewOpen(nullptr);
    } else if (shown && !g_taskViewOpen && !(GetAsyncKeyState(VK_MENU) & 0x8000) &&
               IsTaskViewWindow(hwnd)) {
        SetTaskViewOpen(hwnd);  // not Alt+Tab, which shares its thread
    }
}

// On the taskbar's thread, like WatchWindows. Explorer's own windows only.
void WatchTaskView(bool watch) {
    if (watch == !g_taskViewHooks.empty()) return;
    if (!watch) {
        for (HWINEVENTHOOK hook : g_taskViewHooks) UnhookWinEvent(hook);
        g_taskViewHooks.clear();
        SetTaskViewOpen(nullptr);
        return;
    }
    constexpr std::pair<DWORD, DWORD> kEvents[] = {
        {EVENT_OBJECT_DESTROY, EVENT_OBJECT_HIDE},  // and EVENT_OBJECT_SHOW
        {EVENT_OBJECT_CLOAKED, EVENT_OBJECT_UNCLOAKED},
    };
    for (auto [first, last] : kEvents) {
        HWINEVENTHOOK hook = SetWinEventHook(first, last, nullptr, OnTaskViewEvent,
                                             GetCurrentProcessId(), 0, WINEVENT_OUTOFCONTEXT);
        if (hook) g_taskViewHooks.push_back(hook);
    }
}

// ---- Polling ----

void UpdateAutoHide(POINT p, RECT const& m, UINT dpi, bool held, bool fullscreen) {
    if (!DockHides() || g_taskViewOpen) return;
    LONG left = 0, right = 0;
    bool inSpan = DockSpanOn(m, left, right) && p.x >= left && p.x <= right;
    if (!g_dockRevealed) {
        if (inSpan && p.y >= m.bottom - 3 && !fullscreen) RevealDock(true);
        return;
    }
    bool nearDock = inSpan && p.y >= m.bottom - StripHeight(dpi);
    if (nearDock || g_pointerOver || held || IsFlyout(WindowFromPoint(p), true) ||
        IsFlyout(GetForegroundWindow(), false)) {
        g_dockAwayTicks = 0;
    } else if (++g_dockAwayTicks >= kDockHideTicks) {
        RevealDock(false);
    }
}

// =============================================================================
// LABELS
// =============================================================================
// The name of the app under the pointer, above its icon as on a Mac, in place
// of Windows' tooltips. It rises above the taskbar, so it's a click-through
// window of its own: a solid light pill with a soft glow or shadow along each
// side, as squircle icons have, and a tail at the icon. Its color, font and size, its corners'
// radius, the tail and the glows (or shadows) along each side are the user's,
// in "Tooltips", and the Ctrl+I cards (below) share them.

// Its sizes, in view pixels, at kLabelFontSize; they grow with "Font Size".
constexpr float kLabelHeight = 30;       // the box, without its arrow
constexpr float kLabelPadX = 11;
constexpr float kLabelFontSize = 14;
constexpr float kLabelArrow = 7.5f;      // arrow height, when it's shown
constexpr float kLabelArrowHalf = 8.5f;  // half the arrow's width
constexpr float kLabelArrowTip = 2;      // rounding at its tip
constexpr float kLabelArrowBase = 4.5f;  // rounding where it meets the pill
constexpr float kLabelGap = 6;           // between the arrow and a magnified icon
constexpr float kLabelDockGap = 3;       // between the arrow and the dock's top edge
constexpr Color kLabelInkOnLight{255, 0x0A, 0x0A, 0x0A};
constexpr Color kLabelInkOnDark{255, 0xF5, 0xF5, 0xF5};

struct Label {
    HWND hwnd = nullptr;
    std::wstring text;
    RECT rect{};  // on screen, as drawn
    bool shown = false;
};

Label g_label;
bool g_labelSuppressed = false;  // by a menu, until the pointer leaves the dock

// ---- Name ----

// The first text in Windows' own tooltip: the app's name.
std::wstring FirstText(wf::IInspectable const& value, int depth = 0) {
    if (!value || depth > 4) return {};
    if (auto s = value.try_as<wf::IPropertyValue>(); s && s.Type() == wf::PropertyType::String) {
        return std::wstring(s.GetString());
    }
    if (auto text = value.try_as<wuxc::TextBlock>()) return std::wstring(text.Text());
    if (auto control = value.try_as<wuxc::ContentControl>()) {
        return FirstText(control.Content(), depth + 1);
    }
    if (auto panel = value.try_as<wuxc::Panel>()) {
        for (auto const& child : panel.Children()) {
            if (auto text = FirstText(child, depth + 1); !text.empty()) return text;
        }
    }
    return {};
}

std::wstring AppName(wux::FrameworkElement const& button) {
    std::wstring name = FirstText(wuxc::ToolTipService::GetToolTip(button));
    if (name.empty()) {
        // "App - 2 running windows", without the count.
        name = wux::Automation::AutomationProperties::GetName(button);
        size_t dash = name.rfind(L" - ");
        if (dash != name.npos && std::any_of(name.begin() + dash, name.end(),
                                             [](wchar_t c) { return iswdigit(c); })) {
            name.resize(dash);
        }
    }
    return name.substr(0, name.find(L'\n'));
}

// ---- Window ----

void HideLabel() {
    if (g_label.shown) ShowWindow(g_label.hwnd, SW_HIDE);
    g_label.shown = false;
}

void SuppressLabel() {
    g_labelSuppressed = true;
    HideLabel();
}

void MatchGlassCaptureVisibility(HWND hwnd);

HWND EnsureLabelWindow() {
    if (g_label.hwnd) return g_label.hwnd;
    if (!EnsureGdiplus() || !RegisterWindowClass()) return nullptr;
    g_label.hwnd = CreateWindowEx(
        WS_EX_LAYERED | WS_EX_TRANSPARENT | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST,
        kWindowClass, L"", WS_POPUP, 0, 0, 0, 0, nullptr, nullptr, ModuleInstance(), nullptr);
    // Its arrow reaches into the margin of screen Liquid Glass bends.
    if (g_label.hwnd) MatchGlassCaptureVisibility(g_label.hwnd);
    return g_label.hwnd;
}

void ForgetLabelFont();
extern winrt::com_ptr<IDWriteFactory> g_dwrite;

void DestroyLabel() {
    if (g_label.hwnd) DestroyWindow(g_label.hwnd);
    g_label = {};
    ForgetLabelFont();
    g_dwrite = nullptr;
}

// ---- Drawing ----

// How much bigger than at kLabelFontSize the label is, by "Font Size": its
// height, padding and arrow grow with its text.
float LabelGrowth() {
    return g_settings.tooltipFontSize / kLabelFontSize;
}

// The label's height, without its arrow, in view pixels.
float LabelHeight() {
    return kLabelHeight * LabelGrowth();
}

// The arrow's height under the label and cards, in view pixels: none with
// "Show Tail" off.
float LabelArrow() {
    return g_settings.tooltipTail ? kLabelArrow * LabelGrowth() : 0;
}

// The corners' radius of a label `h` pixels tall: "Corner Radius" of its
// height, up to fully round ends.
float LabelRadius(float h) {
    return std::min(g_settings.tooltipRadius / 100.0f * h, (h - 1) / 2);
}

// A box `h` tall with corners `radius` round, and, with "Show Tail" on, its
// arrow, at `cx`, sized by `arrowScale`, as one shape. The arrow's three
// corners are rounded.
void BubbleShape(Gdiplus::GraphicsPath& path, float w, float h, float radius, float cx,
                 float arrowScale) {
    using Gdiplus::PointF;
    // A square corner is drawn as a tiny round one.
    float i = 0.5f, d = std::max(2 * radius, 0.5f), b = h - i;  // b is the box's bottom
    float tipRound = kLabelArrowTip * arrowScale, baseRound = kLabelArrowBase * arrowScale;
    PointF right{cx + kLabelArrowHalf * arrowScale, b}, tip{cx, b + kLabelArrow * arrowScale};
    PointF left{cx - kLabelArrowHalf * arrowScale, b};

    // `distance` from `from` toward `to`.
    auto toward = [](PointF from, PointF to, float distance) {
        float dx = to.X - from.X, dy = to.Y - from.Y, length = std::hypot(dx, dy);
        return PointF{from.X + dx / length * distance, from.Y + dy / length * distance};
    };
    // Rounds the corner at `c`, from `a` to `b`, as a quadratic curve.
    auto corner = [&path](PointF a, PointF c, PointF b) {
        path.AddBezier(a, PointF{a.X + (c.X - a.X) * 2 / 3, a.Y + (c.Y - a.Y) * 2 / 3},
                       PointF{b.X + (c.X - b.X) * 2 / 3, b.Y + (c.Y - b.Y) * 2 / 3}, b);
    };

    path.AddArc(i, i, d, d, 180, 90);
    path.AddArc(w - i - d, i, d, d, 270, 90);
    path.AddArc(w - i - d, b - d, d, d, 0, 90);
    if (g_settings.tooltipTail) {
        corner(PointF{right.X + baseRound, b}, right, toward(right, tip, baseRound));
        corner(toward(tip, right, tipRound), tip, toward(tip, left, tipRound));
        corner(toward(left, tip, baseRound), left, PointF{left.X - baseRound, b});
    }
    path.AddArc(i, b - d, d, d, 90, 90);
    path.CloseFigure();
}

// The fill, the tooltip color.
Color BubbleFill() {
    auto [r, g, b] = g_settings.tooltipColor;
    return {255, r, g, b};
}

// The shape in `path`, filled, and each side's glow or shadow over it, as set,
// following its corners and arrow round as squircle tiles' do. The window's
// `w` by `h`; `reference` is the label's height on screen, which the glows'
// sizes are shares of.
void FillBubble(Gdiplus::Graphics& g, Gdiplus::GraphicsPath& path, int w, int h,
                float reference) {
    namespace gp = Gdiplus;
    Color fill = BubbleFill();
    gp::SolidBrush brush(GdiColor(fill));
    g.FillPath(&brush, &path);

    std::array<InnerEdge, 4> edges;
    bool any = false;
    for (size_t side = 0; side < edges.size(); side++) {
        TileEdge const& edge = g_settings.tooltipEdges[side];
        if (edge.opacity <= 0 || edge.size <= 0) continue;
        auto [r, gr, b] = edge.color;
        edges[side] = {{255, r, gr, b}, edge.opacity / 100.0f, edge.size / 100.0f * reference};
        any = true;
    }
    if (!any || w <= 0 || h <= 0) return;

    // The shape's coverage, drawn on its own, then the glows, drawn over the fill.
    gp::Bitmap layer(w, h, PixelFormat32bppPARGB);
    {
        gp::Graphics m(&layer);
        m.SetSmoothingMode(gp::SmoothingModeAntiAlias);
        m.Clear(gp::Color(0, 0, 0, 0));
        gp::SolidBrush solid(gp::Color(255, 255, 255, 255));
        m.FillPath(&solid, &path);
    }
    gp::Rect all(0, 0, w, h);
    gp::BitmapData data;
    if (layer.LockBits(&all, gp::ImageLockModeRead | gp::ImageLockModeWrite,
                       PixelFormat32bppPARGB, &data) != gp::Ok) {
        return;
    }
    std::vector<float> shape((size_t)w * h);
    for (int y = 0; y < h; y++) {
        auto row = (BYTE const*)data.Scan0 + (size_t)y * data.Stride;
        for (int x = 0; x < w; x++) shape[(size_t)y * w + x] = row[x * 4 + 3] / 255.0f;
    }
    std::vector<BYTE> pixels(shape.size() * 4, 0);
    ApplyInnerEdges(pixels, w, h, shape, edges);
    for (int y = 0; y < h; y++) {
        memcpy((BYTE*)data.Scan0 + (size_t)y * data.Stride, &pixels[(size_t)y * w * 4], w * 4);
    }
    layer.UnlockBits(&data);
    g.DrawImage(&layer, 0, 0, w, h);
}

// Its text's color, dark or light against the fill.
Color LabelInk() {
    auto [r, g, b] = g_settings.tooltipColor;
    return IsLightColor(r, g, b) ? kLabelInkOnLight : kLabelInkOnDark;
}

// ---- The user's font ----
// With "Font" set to a font that's installed, or to a font file, the label's
// and cards' text is drawn with DirectWrite, which, unlike GDI+, also takes
// OpenType fonts with PostScript outlines (many .otf files). Otherwise it's
// Segoe UI, by GDI+.

template <typename F>
F LoadSystemFunction(PCWSTR dll, PCSTR name);

struct LabelDWrite {
    bool checked = false;  // whether "Tooltip Font" has been looked for
    std::wstring family;   // as found; empty for Segoe UI
    winrt::com_ptr<IDWriteFontCollection> fonts;  // a file's; null for the installed ones
    DWRITE_FONT_WEIGHT weight = DWRITE_FONT_WEIGHT_REGULAR;
    DWRITE_FONT_STYLE style = DWRITE_FONT_STYLE_NORMAL;
    DWRITE_FONT_STRETCH stretch = DWRITE_FONT_STRETCH_NORMAL;
    std::map<std::pair<float, bool>, winrt::com_ptr<IDWriteTextFormat>> formats;  // size, bold
    winrt::com_ptr<ID2D1DCRenderTarget> target;
};

winrt::com_ptr<IDWriteFactory> g_dwrite;
LabelDWrite g_labelFont;

// Looked for again as the settings change, as fonts may have been installed.
void ForgetLabelFont() {
    g_labelFont = {};
}

// A weight's name, as fonts' names end with, or 0 if `word` isn't one.
int WeightNamed(std::wstring_view word) {
    static constexpr std::pair<PCWSTR, int> kWeights[] = {
        {L"Thin", 100},     {L"Hairline", 100},  {L"ExtraLight", 200}, {L"UltraLight", 200},
        {L"Light", 300},    {L"SemiLight", 350}, {L"Regular", 400},    {L"Normal", 400},
        {L"Book", 400},     {L"Medium", 500},    {L"SemiBold", 600},   {L"DemiBold", 600},
        {L"Bold", 700},     {L"ExtraBold", 800}, {L"UltraBold", 800},  {L"Heavy", 800},
        {L"Black", 900},    {L"ExtraBlack", 950}};
    for (auto [name, weight] : kWeights) {
        if (word.size() == wcslen(name) && !_wcsnicmp(word.data(), name, word.size())) {
            return weight;
        }
    }
    return 0;
}

// Whether "Tooltip Font" is a file's path rather than a font's name.
bool IsFontPath(std::wstring const& text) {
    static constexpr PCWSTR kExtensions[] = {L".ttf", L".otf", L".ttc", L".otc"};
    return text.find_first_of(L"\\/") != text.npos ||
           std::any_of(std::begin(kExtensions), std::end(kExtensions),
                       [&](PCWSTR end) { return EndsWithNoCase(text, end); });
}

// The family's name, in English if it has one.
std::wstring FamilyName(IDWriteFontFamily* family) {
    winrt::com_ptr<IDWriteLocalizedStrings> names;
    winrt::check_hresult(family->GetFamilyNames(names.put()));
    UINT32 index = 0, length = 0;
    BOOL exists = FALSE;
    if (FAILED(names->FindLocaleName(L"en-us", &index, &exists)) || !exists) index = 0;
    winrt::check_hresult(names->GetStringLength(index, &length));
    std::wstring name(length + 1, L'\0');
    winrt::check_hresult(names->GetString(index, name.data(), length + 1));
    name.resize(length);
    return name;
}

// The font in the file at `path`, as a collection of its own: its regular
// weight, or the nearest it has.
void LoadLabelFontFile(std::wstring const& typed) {
    std::wstring path = ExpandVariables(typed);
    DWORD attributes = GetFileAttributesW(path.c_str());
    if (attributes == INVALID_FILE_ATTRIBUTES || (attributes & FILE_ATTRIBUTE_DIRECTORY)) {
        Wh_Log(L"Tooltip font: no file at %s, so Segoe UI instead", path.c_str());
        return;
    }
    auto factory = g_dwrite.as<IDWriteFactory5>();  // Windows 10 1703 and later
    winrt::com_ptr<IDWriteFontFile> file;
    winrt::com_ptr<IDWriteFontSetBuilder1> builder;
    winrt::com_ptr<IDWriteFontSet> set;
    winrt::com_ptr<IDWriteFontCollection1> fonts;
    winrt::check_hresult(factory->CreateFontFileReference(path.c_str(), nullptr, file.put()));
    winrt::check_hresult(factory->CreateFontSetBuilder(builder.put()));
    if (FAILED(builder->AddFontFile(file.get())) || FAILED(builder->CreateFontSet(set.put())) ||
        FAILED(factory->CreateFontCollectionFromFontSet(set.get(), fonts.put())) ||
        !fonts->GetFontFamilyCount()) {
        Wh_Log(L"Tooltip font: %s isn't a font file Windows can use, so Segoe UI instead",
               path.c_str());
        return;
    }
    winrt::com_ptr<IDWriteFontFamily1> family;
    winrt::com_ptr<IDWriteFont> font;
    winrt::check_hresult(fonts->GetFontFamily(0, family.put()));
    winrt::check_hresult(family->GetFirstMatchingFont(
        DWRITE_FONT_WEIGHT_REGULAR, DWRITE_FONT_STRETCH_NORMAL, DWRITE_FONT_STYLE_NORMAL,
        font.put()));
    g_labelFont.family = FamilyName(family.get());
    g_labelFont.fonts = fonts;
    g_labelFont.weight = font->GetWeight();
    g_labelFont.style = font->GetStyle();
    g_labelFont.stretch = font->GetStretch();
}

// "Tooltip Font" as a font file, or among the installed fonts: as a family,
// or, when it ends with a weight ("Segoe UI Semibold"), as the family before
// it in that weight.
void FindLabelFont() {
    g_labelFont.checked = true;
    std::wstring const& name = g_settings.tooltipFont;
    if (name.empty()) return;
    if (!g_dwrite) {
        using Create = HRESULT(WINAPI*)(DWRITE_FACTORY_TYPE, REFIID, IUnknown**);
        auto create = LoadSystemFunction<Create>(L"dwrite.dll", "DWriteCreateFactory");
        winrt::check_hresult(create(DWRITE_FACTORY_TYPE_SHARED, __uuidof(IDWriteFactory),
                                    reinterpret_cast<IUnknown**>(g_dwrite.put_void())));
    }
    if (IsFontPath(name)) return LoadLabelFontFile(name);
    winrt::com_ptr<IDWriteFontCollection> fonts;
    winrt::check_hresult(g_dwrite->GetSystemFontCollection(fonts.put(), TRUE));
    auto installed = [&](std::wstring const& family) {
        UINT32 index;
        BOOL exists = FALSE;
        return SUCCEEDED(fonts->FindFamilyName(family.c_str(), &index, &exists)) && exists;
    };
    if (installed(name)) {
        g_labelFont.family = name;
        return;
    }
    size_t space = name.find_last_of(L' ');
    if (space != name.npos) {
        int weight = WeightNamed(std::wstring_view(name).substr(space + 1));
        std::wstring family = name.substr(0, name.find_last_not_of(L' ', space) + 1);
        if (weight && !family.empty() && installed(family)) {
            g_labelFont.family = family;
            g_labelFont.weight = (DWRITE_FONT_WEIGHT)weight;
            return;
        }
    }
    Wh_Log(L"Tooltip font \"%s\" isn't installed: Segoe UI instead", name.c_str());
}

// ---- Text ----
// The label's and cards' text is gathered as runs, each one line in a box, and
// drawn after the shapes: by GDI+ in Segoe UI, or by DirectWrite in the user's
// font, over what GDI+ drew.

enum class TextAlign { Left, Center, Right };
enum class TextTrim { None, End, Middle };  // where an ellipsis cuts it short, if it must

struct TextRun {
    std::wstring text;
    float size = 0;  // pixels
    bool bold = false;
    float x = 0, y = 0, w = 0, h = 0;  // its box; the text's centered in it vertically
    TextAlign align = TextAlign::Left;
    TextTrim trim = TextTrim::None;
    Color ink;
};

// Whether text's in the user's font, drawn by DirectWrite.
bool UserFont() {
    if (!g_labelFont.checked && !Try(FindLabelFont, L"Tooltip font")) {
        g_labelFont.family.clear();
    }
    return !g_labelFont.family.empty();
}

// The user's font at `size` pixels, in its own weight or bold.
IDWriteTextFormat* UserTextFormat(float size, bool bold) {
    if (g_labelFont.formats.size() > 16) g_labelFont.formats.clear();  // old scales
    auto& format = g_labelFont.formats[{size, bold}];
    if (format) return format.get();
    auto weight = g_labelFont.weight;
    if (bold) weight = (DWRITE_FONT_WEIGHT)std::max<int>(weight, DWRITE_FONT_WEIGHT_BOLD);
    winrt::com_ptr<IDWriteTextFormat> made;
    winrt::check_hresult(g_dwrite->CreateTextFormat(
        g_labelFont.family.c_str(), g_labelFont.fonts.get(), weight, g_labelFont.style,
        g_labelFont.stretch, size, L"", made.put()));
    winrt::check_hresult(made->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER));
    winrt::check_hresult(made->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP));
    format = made;
    return format.get();
}

// `run` laid out in the user's font, in a box `w` wide.
winrt::com_ptr<IDWriteTextLayout> UserTextLayout(TextRun const& run, float w) {
    IDWriteTextFormat* format = UserTextFormat(run.size, run.bold);
    winrt::com_ptr<IDWriteTextLayout> layout;
    winrt::check_hresult(g_dwrite->CreateTextLayout(run.text.c_str(), (UINT32)run.text.size(),
                                                    format, w, std::max(run.h, 1.0f),
                                                    layout.put()));
    layout->SetTextAlignment(run.align == TextAlign::Center  ? DWRITE_TEXT_ALIGNMENT_CENTER
                             : run.align == TextAlign::Right ? DWRITE_TEXT_ALIGNMENT_TRAILING
                                                             : DWRITE_TEXT_ALIGNMENT_LEADING);
    if (run.trim != TextTrim::None) {
        // In the middle, a path keeps its last part: its file's name.
        bool middle = run.trim == TextTrim::Middle;
        DWRITE_TRIMMING trimming{DWRITE_TRIMMING_GRANULARITY_CHARACTER,
                                 (UINT32)(middle ? L'\\' : 0), middle ? 1u : 0u};
        winrt::com_ptr<IDWriteInlineObject> ellipsis;
        winrt::check_hresult(g_dwrite->CreateEllipsisTrimmingSign(format, ellipsis.put()));
        winrt::check_hresult(layout->SetTrimming(&trimming, ellipsis.get()));
    }
    return layout;
}

// How wide `text` is drawn, at `size` pixels.
float TextWidth(std::wstring const& text, float size, bool bold = false) {
    namespace gp = Gdiplus;
    if (text.empty()) return 0;
    if (UserFont()) {
        float width = 0;
        bool measured = Try([&] {
            TextRun run{text, size, bold};
            run.h = size * 2;
            DWRITE_TEXT_METRICS metrics{};
            winrt::check_hresult(UserTextLayout(run, 100000)->GetMetrics(&metrics));
            width = metrics.widthIncludingTrailingWhitespace;
        }, L"Tooltip font");
        if (measured) return width;
        g_labelFont.family.clear();  // Segoe UI from now on
    }
    gp::FontFamily family(L"Segoe UI");
    gp::Font font(&family, size, bold ? gp::FontStyleBold : gp::FontStyleRegular, gp::UnitPixel);
    gp::StringFormat format;
    format.SetFormatFlags(gp::StringFormatFlagsNoWrap);
    gp::Bitmap probe(1, 1, PixelFormat32bppPARGB);
    gp::Graphics g(&probe);
    g.SetTextRenderingHint(gp::TextRenderingHintAntiAliasGridFit);
    gp::RectF bounds;
    g.MeasureString(text.c_str(), (INT)text.size(), &font, gp::PointF(0, 0), &format, &bounds);
    return bounds.Width;
}

// `runs` in Segoe UI, by GDI+. Its bold, as it can give "Segoe UI Semibold"
// in italics.
void DrawTextRuns(Gdiplus::Graphics& g, std::vector<TextRun> const& runs) {
    namespace gp = Gdiplus;
    gp::FontFamily family(L"Segoe UI");
    for (auto const& run : runs) {
        gp::Font font(&family, run.size, run.bold ? gp::FontStyleBold : gp::FontStyleRegular,
                      gp::UnitPixel);
        gp::StringFormat format;
        format.SetAlignment(run.align == TextAlign::Center  ? gp::StringAlignmentCenter
                            : run.align == TextAlign::Right ? gp::StringAlignmentFar
                                                            : gp::StringAlignmentNear);
        format.SetLineAlignment(gp::StringAlignmentCenter);
        format.SetFormatFlags(gp::StringFormatFlagsNoWrap);
        format.SetTrimming(run.trim == TextTrim::End      ? gp::StringTrimmingEllipsisCharacter
                           : run.trim == TextTrim::Middle ? gp::StringTrimmingEllipsisPath
                                                          : gp::StringTrimmingNone);
        gp::SolidBrush ink(GdiColor(run.ink));
        g.DrawString(run.text.c_str(), (INT)run.text.size(), &font,
                     gp::RectF(run.x, run.y, run.w, run.h), &format, &ink);
    }
}

// `runs` in the user's font, by DirectWrite, over what's in `dc` (`w` by `h`)
// already. Its render target is at 96 DPI, so its units are pixels.
void DrawUserTextRuns(HDC dc, int w, int h, std::vector<TextRun> const& runs) {
    auto& target = g_labelFont.target;
    if (!target) {
        auto props = D2D1::RenderTargetProperties(
            D2D1_RENDER_TARGET_TYPE_SOFTWARE,
            D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED), 96, 96);
        winrt::check_hresult(D2DFactory()->CreateDCRenderTarget(&props, target.put()));
        // Layered windows have no ClearType: their pixels' alpha is their own.
        target->SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE);
    }
    RECT box{0, 0, w, h};
    winrt::check_hresult(target->BindDC(dc, &box));
    target->BeginDraw();
    HRESULT hr = S_OK;
    try {
        winrt::com_ptr<ID2D1SolidColorBrush> brush;
        winrt::check_hresult(target->CreateSolidColorBrush(D2D1::ColorF(0, 0, 0), brush.put()));
        for (auto const& run : runs) {
            Color c = run.ink;
            brush->SetColor(D2D1::ColorF(c.R / 255.0f, c.G / 255.0f, c.B / 255.0f, c.A / 255.0f));
            target->DrawTextLayout({run.x, run.y}, UserTextLayout(run, run.w).get(), brush.get());
        }
    } catch (...) {
        hr = winrt::to_hresult();
    }
    HRESULT ended = target->EndDraw();
    if (FAILED(ended)) target = nullptr;  // made again next time
    winrt::check_hresult(FAILED(hr) ? hr : ended);
}

// ---- Window's picture ----

// Draws the label's window at `rect`, on screen, with `paint`, which draws its
// shapes and gives its text, unless it shows `key` there already. With the
// same `key` and size elsewhere, it's only moved there: a card's glows take a
// while to draw, and the label follows its icon each frame.
void PaintLabel(RECT const& rect, std::wstring const& key,
                std::function<void(Gdiplus::Graphics&, std::vector<TextRun>&)> const& paint) {
    namespace gp = Gdiplus;
    int w = rect.right - rect.left, height = rect.bottom - rect.top;
    if (g_label.shown && key == g_label.text) {
        if (EqualRect(&rect, &g_label.rect)) return;
        if (w == g_label.rect.right - g_label.rect.left &&
            height == g_label.rect.bottom - g_label.rect.top &&
            SetWindowPos(g_label.hwnd, nullptr, rect.left, rect.top, 0, 0,
                         SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE)) {
            g_label.rect = rect;
            return;
        }
    }
    BITMAPINFO bi{};
    bi.bmiHeader = {sizeof(BITMAPINFOHEADER), w, -height, 1, 32, BI_RGB};
    void* bits = nullptr;
    HDC screen = GetDC(nullptr);
    HDC dc = CreateCompatibleDC(screen);
    if (HBITMAP bmp = CreateDIBSection(screen, &bi, DIB_RGB_COLORS, &bits, nullptr, 0)) {
        HGDIOBJ old = SelectObject(dc, bmp);
        std::vector<TextRun> runs;
        bool userFont = UserFont();
        auto canvas = [&](auto&& draw) {
            gp::Bitmap picture(w, height, w * 4, PixelFormat32bppPARGB, (BYTE*)bits);
            gp::Graphics g(&picture);
            g.SetSmoothingMode(gp::SmoothingModeAntiAlias);
            g.SetTextRenderingHint(gp::TextRenderingHintAntiAliasGridFit);
            draw(g);
        };
        canvas([&](gp::Graphics& g) {
            g.Clear(gp::Color(0, 0, 0, 0));
            paint(g, runs);
            if (!userFont) DrawTextRuns(g, runs);
        });
        if (userFont &&
            !Try([&] { DrawUserTextRuns(dc, w, height, runs); }, L"Tooltip font")) {
            g_labelFont.family.clear();  // Segoe UI from now on
            canvas([&](gp::Graphics& g) { DrawTextRuns(g, runs); });
        }
        POINT pos{rect.left, rect.top}, zero{};
        SIZE size{w, height};
        BLENDFUNCTION blend{AC_SRC_OVER, 0, 255, AC_SRC_ALPHA};
        UpdateLayeredWindow(g_label.hwnd, screen, &pos, &size, dc, &zero, 0, &blend, ULW_ALPHA);
        SelectObject(dc, old);
        DeleteObject(bmp);
    }
    DeleteDC(dc);
    ReleaseDC(nullptr, screen);

    if (!g_label.shown) {
        SetWindowPos(g_label.hwnd, HWND_TOPMOST, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE | SWP_SHOWWINDOW);
    }
    g_label = {g_label.hwnd, key, rect, true};
}

// How wide the label's text is. The label follows its icon each frame, so it's
// measured again only when the name, its size or the font changes.
float LabelTextWidth(std::wstring const& text, float size) {
    static std::wstring measuredText;
    static float measuredSize = 0, measuredWidth = 0;
    static int measuredVersion = -1;
    if (text != measuredText || size != measuredSize || measuredVersion != g_settingsVersion) {
        measuredWidth = TextWidth(text, size);
        measuredText = text;
        measuredSize = size;
        measuredVersion = g_settingsVersion;
    }
    return measuredWidth;
}

// With its arrow's tip at `tip`, on screen.
void DrawLabel(std::wstring const& text, POINT tip, float scale) {
    namespace gp = Gdiplus;
    float grown = scale * LabelGrowth();
    int h = (int)std::round(kLabelHeight * grown);
    float radius = LabelRadius((float)h);
    // Never narrower than the round corners and the arrow's base, or a short
    // name's arrow would run into the curves.
    float minWidth = 2 * radius;
    if (g_settings.tooltipTail) minWidth += 2 * (kLabelArrowHalf + kLabelArrowBase) * grown;
    float size = g_settings.tooltipFontSize * scale;
    int w = (int)std::ceil(
        std::max(LabelTextWidth(text, size) + 2 * kLabelPadX * grown, minWidth));
    int height = h + (int)std::ceil(LabelArrow() * scale) + 1;
    RECT rect{tip.x - w / 2, tip.y - height, tip.x - w / 2 + w, tip.y};
    std::wstring key = text + L"\x01" + std::to_wstring(scale);
    PaintLabel(rect, key, [&](gp::Graphics& g, std::vector<TextRun>& runs) {
        gp::GraphicsPath path;
        BubbleShape(path, (float)w, (float)h, radius, w / 2.0f, grown);
        FillBubble(g, path, w, height, (float)h);
        TextRun run{text, size, false, 0, 0, (float)w, (float)h, TextAlign::Center};
        run.ink = LabelInk();
        runs.push_back(run);
    });
}

// =============================================================================
// INFO CARDS
// =============================================================================
// Ctrl+I over an icon in the dock turns its label into a card: the app's name,
// its ID, its .exe, and which of the user's icons it shows. The ID is copied, to
// paste into "App Icons"; Ctrl+I again copies the .exe instead, and so on in
// turn. The card goes once the pointer leaves the icon, or on Esc.
//
// Ctrl+I is caught by a keyboard hook on a thread of its own (it must answer
// quickly), which takes it only while the pointer's on an icon in the dock:
// anywhere else, it goes to the app as usual. The hook sees every key, acts on
// these two only, and keeps nothing.

constexpr UINT kInfoKeyMessage = WM_APP + 8;    // Ctrl+I, over an icon
constexpr UINT kInfoCloseMessage = WM_APP + 9;  // Esc, with a card open

// Card sizes, in view pixels, apart from the label's own (see LABELS).
constexpr float kCardPadX = 12;
constexpr float kCardPadY = 8;
constexpr float kCardRadius = 10;
constexpr float kCardTitleSize = 14;
constexpr float kCardTitleHeight = 24;
constexpr float kCardTextSize = 12.5f;
constexpr float kCardRowHeight = 21;
constexpr float kCardFooterHeight = 24;
constexpr float kCardLabelGap = 14;   // between a row's label and its value
constexpr float kCardValueMax = 360;  // a longer value is cut short in the middle
constexpr float kCardScreenEdge = 4;  // kept from the screen's edges
constexpr uint8_t kCardDimInk = 150;  // the labels' and notes' opacity, of 255
constexpr uint8_t kCardMarkInk = 26;  // the copied row's background's

// The card's corners: as round as the label's, up to kCardRadius.
float CardRadius(float scale) {
    return std::min(kCardRadius * scale, LabelRadius(LabelHeight() * scale));
}

// The room the arrow needs from each side of the card, with its corners.
float CardArrowRoom(float scale) {
    float arrow = (kLabelArrowHalf + kLabelArrowBase) * scale * LabelGrowth();
    return (g_settings.tooltipTail ? arrow : 0) + CardRadius(scale);
}

// What the pointer's over in the dock, as the last frame left it. The
// keyboard's thread reads g_overDockIcon and g_overDockRect (the taskbar's
// window): Ctrl+I is taken only while the pointer's still in there.
struct Hovered {
    winrt::weak_ref<wux::FrameworkElement> element;  // none for the Recycle Bin
    bool trash = false;
};
Hovered g_hovered;
std::atomic<bool> g_overDockIcon = false;
std::mutex g_overDockLock;
RECT g_overDockRect{};

void SetOverDockIcon(wux::FrameworkElement const& el, bool trash, RECT const& window) {
    g_hovered = {el ? winrt::make_weak(el) : nullptr, trash};
    {
        std::lock_guard lock(g_overDockLock);
        g_overDockRect = window;
    }
    g_overDockIcon = true;
}

void ClearOverDockIcon() {
    g_overDockIcon = false;
    g_hovered = {};
}

struct InfoRow {
    std::wstring label, value;
    bool note = false;  // dimmed: not something to copy
};

struct InfoCard {
    bool open = false;
    winrt::weak_ref<wux::FrameworkElement> element;
    bool trash = false;
    std::wstring title, id, exe;  // the exe's file name
    std::vector<InfoRow> rows;
    int idRow = -1, exeRow = -1;  // where they are in `rows`
    int copied = -1;              // the row last copied
    bool copyFailed = false;
};
InfoCard g_info;
std::atomic<bool> g_infoOpen = false;  // read by the keyboard's thread, for Esc

bool InfoCardIsFor(wux::FrameworkElement const& el, bool trash) {
    return g_info.open && g_info.trash == trash && (trash || g_info.element.get() == el);
}

void CloseInfoCard() {
    if (!g_info.open) return;
    g_info = {};
    g_infoOpen = false;
}

// For an app: its ID and .exe; for anything else, where its icon's set.
InfoCard MakeInfoCard(wux::FrameworkElement const& el, bool trash) {
    InfoCard card;
    card.open = true;
    card.trash = trash;
    if (el) card.element = winrt::make_weak(el);
    auto note = [&](PCWSTR label, std::wstring value) {
        card.rows.push_back({label, std::move(value), true});
    };
    if (trash) {
        card.title = HasTrashIcon() ? L"Trash" : L"Recycle Bin";
        note(L"Icon", L"Set in Custom Icons, as Empty and Full Trash Icon");
        return card;
    }
    card.title = AppName(el);
    if (IsStartButton(el)) {
        if (card.title.empty()) card.title = L"Start";
        note(L"Icon", L"Set in Custom Icons, as Start Menu Icon");
        return card;
    }
    if (!IsAppButton(el)) {
        note(L"Icon", L"Windows' own, which can't be changed");
        return card;
    }
    card.id = ButtonAppId(el);
    if (!card.id.empty()) {
        // Its windows open now, then Start's shortcut, then its ID's own path.
        LookAtWindows(true);
        auto& exes = ExesOf(card.id);
        AddWindowExes(card.id, exes);
        std::wstring path = !exes.fromWindows.empty() ? exes.fromWindows.front()
                            : !exes.fromShortcut.empty() ? exes.fromShortcut
                                                         : exes.fromId;
        card.exe = FileName(path);
        card.idRow = (int)card.rows.size();
        card.rows.push_back({L"ID", card.id});
    }
    if (!card.exe.empty()) {
        card.exeRow = (int)card.rows.size();
        card.rows.push_back({L".exe", card.exe});
    } else {
        note(L".exe", card.id.find(L'!') != card.id.npos ? L"None: it's a Store app"
                                                         : L"None found");
    }
    AppMatch how;
    if (HasFinderIcon() && IsFileExplorer(el)) {
        note(L"Icon", L"Yours, from File Explorer Icon");
    } else if (int i = AppIconFor(el, &how); i >= 0) {
        PCWSTR by = how == AppMatch::Id ? L"ID" : how == AppMatch::Name ? L"name" : L".exe";
        note(L"Icon", L"Yours, from App Icons entry " + std::to_wstring(i + 1) + L", by its " + by);
    }
    return card;
}

bool CopyText(std::wstring const& text) {
    bool open = false;
    for (int i = 0; i < 5 && !(open = OpenClipboard(g_modWindow)); i++) Sleep(10);
    if (!open) return false;
    bool copied = false;
    if (EmptyClipboard()) {
        size_t bytes = (text.size() + 1) * sizeof(wchar_t);
        if (HGLOBAL memory = GlobalAlloc(GMEM_MOVEABLE, bytes)) {
            if (void* p = GlobalLock(memory)) {
                memcpy(p, text.c_str(), bytes);
                GlobalUnlock(memory);
                copied = SetClipboardData(CF_UNICODETEXT, memory) != nullptr;
            }
            if (!copied) GlobalFree(memory);
        }
    }
    CloseClipboard();
    return copied;
}

// The ID first, then the .exe, then the ID again.
void CopyNext(InfoCard& card) {
    std::vector<int> rows;
    if (card.idRow >= 0) rows.push_back(card.idRow);
    if (card.exeRow >= 0) rows.push_back(card.exeRow);
    if (rows.empty()) return;
    auto at = std::ranges::find(rows, card.copied);
    int next = at == rows.end() || at + 1 == rows.end() ? rows.front() : *(at + 1);
    std::wstring const& text = next == card.idRow ? card.id : card.exe;
    card.copyFailed = !CopyText(text);
    card.copied = card.copyFailed ? -1 : next;
}

// Ctrl+I: a card for what's under the pointer, or, with one open, the next
// thing copied.
void OnInfoKey() {
    if (!g_overDockIcon) return;
    auto el = g_hovered.element.get();
    bool trash = g_hovered.trash;
    if (!el && !trash) return;
    if (!InfoCardIsFor(el, trash)) g_info = MakeInfoCard(el, trash);
    CopyNext(g_info);
    g_infoOpen = true;
    StartFrames();  // drawn there
}

// A box from (x, y), `w` by `h`, with corners `r` round.
void RoundedBox(Gdiplus::GraphicsPath& path, float x, float y, float w, float h, float r) {
    float d = 2 * r;
    path.AddArc(x, y, d, d, 180, 90);
    path.AddArc(x + w - d, y, d, d, 270, 90);
    path.AddArc(x + w - d, y + h - d, d, d, 0, 90);
    path.AddArc(x, y + h - d, d, d, 90, 90);
    path.CloseFigure();
}

// What the card says, and its size, measured once per change: it's placed
// each frame while icons move.
struct CardLayout {
    std::wstring key;
    std::wstring copiedText, nextText;  // the footer, left and right
    float labelWidth = 0;
    int w = 0;
    float h = 0;  // without its arrow
};

CardLayout const& LayOutInfoCard(float scale) {
    namespace gp = Gdiplus;
    static CardLayout layout;
    InfoCard const& card = g_info;
    std::wstring key = L"\x01" + card.title + L"\x02" + std::to_wstring(card.copied) +
                       (card.copyFailed ? L"!" : L"") + L"\x02" + std::to_wstring(scale) +
                       L"\x02" + std::to_wstring(g_settingsVersion);
    for (auto const& row : card.rows) key += L"\x02" + row.label + L"\x03" + row.value;
    if (key == layout.key) return layout;

    layout = {key};
    if (card.copyFailed) {
        layout.copiedText = L"Couldn't copy: try again";
    } else if (card.copied >= 0) {
        layout.copiedText = card.copied == card.idRow ? L"ID copied" : L".exe copied";
        if (card.idRow >= 0 && card.exeRow >= 0) {
            layout.nextText = card.copied == card.idRow ? L"Ctrl+I: .exe" : L"Ctrl+I: ID";
        }
    }
    float text = kCardTextSize * scale;
    auto width = [&](std::wstring const& s) { return TextWidth(s, text); };
    float valueWidth = 0;
    for (auto const& row : card.rows) {
        layout.labelWidth = std::max(layout.labelWidth, width(row.label));
        valueWidth = std::max(valueWidth, width(row.value));
    }
    valueWidth = std::min(valueWidth, kCardValueMax * scale);
    float gap = kCardLabelGap * scale;
    bool footer = card.idRow >= 0 || card.exeRow >= 0;
    float footerWidth =
        footer ? 14 * scale + width(layout.copiedText) + gap + width(layout.nextText) : 0;
    float content = std::max({TextWidth(card.title, kCardTitleSize * scale, true),
                              layout.labelWidth + gap + valueWidth, footerWidth});
    layout.w = (int)std::ceil(std::max(content + 2 * kCardPadX * scale, 2 * CardArrowRoom(scale)));
    layout.h = std::round((2 * kCardPadY + kCardTitleHeight + card.rows.size() * kCardRowHeight +
                           (footer ? kCardFooterHeight : 0)) *
                          scale);
    return layout;
}

// With its arrow's tip at `tip`, on screen, the card kept on the screen.
void DrawInfoCard(POINT tip, float scale) {
    namespace gp = Gdiplus;
    InfoCard const& card = g_info;
    CardLayout const& layout = LayOutInfoCard(scale);
    int w = layout.w;
    float h = layout.h;
    int height = (int)h + (int)std::ceil(LabelArrow() * scale) + 1;
    MONITORINFO monitor{.cbSize = sizeof(monitor)};
    GetMonitorInfo(MonitorFromPoint(tip, MONITOR_DEFAULTTONEAREST), &monitor);
    LONG edge = std::lround(kCardScreenEdge * scale);
    LONG x = std::clamp<LONG>(tip.x - w / 2, monitor.rcMonitor.left + edge,
                              std::max(monitor.rcMonitor.left + edge,
                                       monitor.rcMonitor.right - edge - w));
    float arrowRoom = (kLabelArrowHalf + kLabelArrowBase) * scale * LabelGrowth() +
                      CardRadius(scale);
    float arrowX = std::clamp((float)(tip.x - x), arrowRoom, std::max(arrowRoom, w - arrowRoom));
    RECT rect{x, tip.y - height, x + w, tip.y};
    // Where its arrow is changes what's drawn, as it nears the screen's edge.
    std::wstring key = layout.key + L"\x04" + std::to_wstring(arrowX);

    PaintLabel(rect, key, [&](gp::Graphics& g, std::vector<TextRun>& runs) {
        float padX = kCardPadX * scale, rowHeight = kCardRowHeight * scale;
        float titleHeight = kCardTitleHeight * scale, footerHeight = kCardFooterHeight * scale;
        float title = kCardTitleSize * scale, text = kCardTextSize * scale;
        gp::GraphicsPath shape;
        BubbleShape(shape, (float)w, h, CardRadius(scale), arrowX, scale * LabelGrowth());
        FillBubble(g, shape, w, height, LabelHeight() * scale);

        Color ink = LabelInk(), dim = ink, mark = ink;
        dim.A = kCardDimInk;
        mark.A = kCardMarkInk;
        gp::SolidBrush markBrush(GdiColor(mark));
        auto add = [&](std::wstring const& s, float size, bool bold, gp::RectF box,
                       TextAlign align, TextTrim trim, Color color) {
            runs.push_back({s, size, bold, box.X, box.Y, box.Width, box.Height, align, trim,
                            color});
        };
        float y = kCardPadY * scale, inner = w - 2 * padX;
        add(card.title, title, true, gp::RectF(padX, y, inner, titleHeight), TextAlign::Left,
            TextTrim::End, ink);
        y += titleHeight;
        for (int i = 0; i < (int)card.rows.size(); i++, y += rowHeight) {
            auto const& row = card.rows[i];
            if (i == card.copied) {
                gp::GraphicsPath box;
                RoundedBox(box, padX - 6 * scale, y + 1 * scale, inner + 12 * scale,
                           rowHeight - 2 * scale, 5 * scale);
                g.FillPath(&markBrush, &box);
            }
            add(row.label, text, false, gp::RectF(padX, y, layout.labelWidth + 1, rowHeight),
                TextAlign::Left, TextTrim::End, dim);
            float valueX = padX + layout.labelWidth + kCardLabelGap * scale;
            add(row.value, text, false, gp::RectF(valueX, y, w - padX - valueX, rowHeight),
                TextAlign::Left, TextTrim::Middle, row.note ? dim : ink);
        }
        if (card.idRow < 0 && card.exeRow < 0) return;
        gp::Pen rule(GdiColor(mark), 1);
        g.DrawLine(&rule, padX, y + 2 * scale, w - padX, y + 2 * scale);
        float middle = y + 2 * scale + footerHeight / 2;
        float textX = padX;
        if (card.copied >= 0) {
            gp::Pen tick(GdiColor(ink), 1.6f * scale);
            tick.SetLineCap(gp::LineCapRound, gp::LineCapRound, gp::DashCapRound);
            tick.SetLineJoin(gp::LineJoinRound);
            gp::PointF points[] = {{padX + 1 * scale, middle},
                                   {padX + 4 * scale, middle + 3 * scale},
                                   {padX + 9.5f * scale, middle - 3.5f * scale}};
            g.DrawLines(&tick, points, 3);
            textX += 14 * scale;
        }
        gp::RectF line(textX, y + 2 * scale, w - padX - textX, footerHeight);
        add(layout.copiedText, text, false, line, TextAlign::Left, TextTrim::End, ink);
        add(layout.nextText, text, false, line, TextAlign::Right, TextTrim::End, dim);
    });
}

// ---- Ctrl+I ----

HANDLE g_infoKeysThread = nullptr;
DWORD g_infoKeysThreadId = 0;
// On the hook's thread: I's press was taken, so its repeats and release are too,
// until a while after it's last seen, in case its release never comes.
bool g_infoKeyTaken = false;
DWORD g_infoKeyLast = 0;

// The pointer's on an icon in the dock, as the last frame left it, and still in
// the taskbar it was on, over one of Explorer's windows.
bool PointerOnDockIcon() {
    POINT cursor;
    if (!g_overDockIcon || !GetCursorPos(&cursor)) return false;
    {
        std::lock_guard lock(g_overDockLock);
        if (!PtInRect(&g_overDockRect, cursor)) return false;
    }
    HWND under = WindowFromPoint(cursor);
    DWORD pid = 0;
    return under && GetWindowThreadProcessId(under, &pid) && pid == GetCurrentProcessId();
}

bool KeyDown(int vk) { return GetAsyncKeyState(vk) & 0x8000; }

LRESULT CALLBACK InfoKeyProc(int code, WPARAM wParam, LPARAM lParam) {
    if (code == HC_ACTION && !g_unloading) {
        auto const& key = *(KBDLLHOOKSTRUCT const*)lParam;
        bool down = wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN;
        if (key.vkCode == 'I') {
            if (g_infoKeyTaken && key.time - g_infoKeyLast < 1500) {
                g_infoKeyLast = key.time;
                if (!down) g_infoKeyTaken = false;
                return 1;
            }
            g_infoKeyTaken = false;
            HWND w = g_modWindow;
            if (down && w && KeyDown(VK_CONTROL) && !KeyDown(VK_SHIFT) && !KeyDown(VK_MENU) &&
                !KeyDown(VK_LWIN) && !KeyDown(VK_RWIN) && PointerOnDockIcon()) {
                PostMessage(w, kInfoKeyMessage, 0, 0);
                g_infoKeyTaken = true;
                g_infoKeyLast = key.time;
                return 1;
            }
        } else if (key.vkCode == VK_ESCAPE && down && g_infoOpen) {
            if (HWND w = g_modWindow) PostMessage(w, kInfoCloseMessage, 0, 0);
        }
    }
    return CallNextHookEx(nullptr, code, wParam, lParam);
}

DWORD WINAPI InfoKeysThread(void* ready) {
    MSG msg;
    PeekMessage(&msg, nullptr, WM_USER, WM_USER, PM_NOREMOVE);  // its queue, for WM_QUIT
    HHOOK hook = SetWindowsHookEx(WH_KEYBOARD_LL, InfoKeyProc, ModuleInstance(), 0);
    DWORD error = hook ? 0 : GetLastError();
    SetEvent((HANDLE)ready);
    if (!hook) Wh_Log(L"Ctrl+I can't be watched for (%u): no info cards", error);
    while (GetMessage(&msg, nullptr, 0, 0) > 0) {
    }
    if (hook) UnhookWindowsHookEx(hook);
    return 0;
}

// Once the taskbar's found: only the Explorer process that runs it listens.
void StartInfoKeys() {
    if (g_infoKeysThread || g_unloading) return;
    HANDLE ready = CreateEvent(nullptr, TRUE, FALSE, nullptr);
    if (!ready) return;
    g_infoKeysThread = CreateThread(nullptr, 0, InfoKeysThread, ready, 0, &g_infoKeysThreadId);
    if (g_infoKeysThread) WaitForSingleObject(ready, INFINITE);
    CloseHandle(ready);
}

// Before unloading, as the thread runs the mod's code.
void StopInfoKeys() {
    if (!g_infoKeysThread) return;
    PostThreadMessage(g_infoKeysThreadId, WM_QUIT, 0, 0);
    WaitForSingleObject(g_infoKeysThread, INFINITE);
    CloseHandle(g_infoKeysThread);
    g_infoKeysThread = nullptr;
}

// The taskbar on `monitor`. Finding one enumerates every top-level window, too
// slow for each frame, so the last one found is kept while it's still there.
// On the taskbar's thread.
HWND TaskbarOnMonitor(HMONITOR monitor) {
    static HWND found = nullptr;
    DWORD pid = 0;
    WCHAR cls[32];
    if (found && GetWindowThreadProcessId(found, &pid) && pid == GetCurrentProcessId() &&
        GetClassName(found, cls, ARRAYSIZE(cls)) &&
        (!_wcsicmp(cls, L"Shell_TrayWnd") || !_wcsicmp(cls, L"Shell_SecondaryTrayWnd")) &&
        MonitorFromWindow(found, MONITOR_DEFAULTTONEAREST) == monitor) {
        return found;
    }
    found = nullptr;
    ForEachTaskbarWindow([&](HWND tb, bool) {
        if (!found && MonitorFromWindow(tb, MONITOR_DEFAULTTONEAREST) == monitor) found = tb;
    });
    return found;
}

// A point in the plate's panel, on screen, with the window of the taskbar under
// the pointer (its content starts at the window's corner). Returns the screen's
// scale, or 0 when it can't tell.
float PanelToScreen(Plate& p, wf::Point point, POINT& out, RECT& window) {
    auto panel = p.panel.get();
    auto root = panel ? panel.XamlRoot() : nullptr;
    auto content = root ? root.Content() : nullptr;
    POINT cursor;
    HWND taskbar = nullptr;
    if (content && GetCursorPos(&cursor)) {
        taskbar = TaskbarOnMonitor(MonitorFromPoint(cursor, MONITOR_DEFAULTTONEAREST));
    }
    if (!taskbar || !GetWindowRect(taskbar, &window)) return 0;
    float scale = (float)root.RasterizationScale();
    auto at = panel.TransformToVisual(content).TransformPoint(point);
    out = {window.left + std::lround(at.X * scale), window.top + std::lround(at.Y * scale)};
    return scale;
}

// Where the label's arrow tip goes over an icon `height` tall, as magnified
// (icons grow from their bottom): never lower than the dock's top edge.
float LabelTipY(Plate const& p, float height) {
    float bottom = p.top + g_size.padY + g_size.icon;
    return std::min(bottom - height - kLabelGap, p.top - kLabelDockGap);
}

// Over the icon under the pointer: its name, or, after Ctrl+I, its info card.
void UpdateLabel(Plate* p) {
    RowItem const* hovered = nullptr;
    float x = 0;
    if (p && g_pointerOver && !g_dragging && !g_labelSuppressed && !DockHidden()) {
        for (auto& item : g_row) {
            float at = item.center + item.shift;
            if (std::fabs(g_pointerX - at) > item.width * item.scale / 2) continue;
            if (item.trash || item.element.get()) {
                hovered = &item;
                x = p->originX + at;
            }
            break;
        }
    }
    auto el = hovered ? hovered->element.get() : nullptr;
    bool trash = hovered && hovered->trash;
    POINT tip;
    RECT window;
    float scale = 0;
    if (hovered) {
        float height = trash ? TrashArtHeight(p->trashState == 1) : g_size.icon;
        scale = PanelToScreen(*p, {x, LabelTipY(*p, height * hovered->scale)}, tip, window);
    }
    if (scale <= 0) {
        ClearOverDockIcon();
        CloseInfoCard();
        return HideLabel();
    }
    SetOverDockIcon(el, trash, window);

    if (!InfoCardIsFor(el, trash)) CloseInfoCard();
    if (g_info.open) {
        if (el && g_settings.tooltips) HideStockToolTip(el);
        if (EnsureLabelWindow()) DrawInfoCard(tip, scale);
        return;
    }
    if (!g_settings.tooltips) return HideLabel();
    std::wstring name;
    if (trash) {
        name = HasTrashIcon() ? L"Trash" : L"Recycle Bin";
    } else {
        HideStockToolTip(el);
        name = HasFinderIcon() && IsFileExplorer(el) ? L"Finder" : AppName(el);
    }
    if (name.empty() || !EnsureLabelWindow()) return HideLabel();
    DrawLabel(name, tip, scale);
}

// =============================================================================
// LIQUID GLASS
// =============================================================================
// The dock's rim bends what's behind it, as in MacOS-Style-LiquidGlass. The
// blur above is a composition effect, and composition has no effect that moves
// pixels around; only DWM sees what's behind a window (Open Fluid Glass bends
// it there, in DWM's own shader, which a mod in Explorer can't reach). So the
// dock bends a picture of the screen instead: the bottom of it, through the
// Desktop Duplication API, bent and blurred by Direct2D into a composition
// surface that takes the blur's place. The taskbars and the labels are left out
// of that picture, and so out of screenshots, or the dock would bend itself.
//
// Win+Ctrl+Shift+G freezes it, so the dock shows in screenshots. Win+Ctrl+Shift+K
// stops it until the settings are next saved, from a thread of its own, so it
// works even if the taskbar's thread is stuck. Everything else is on the
// taskbar's thread. If anything fails, the frosted blur comes back.

MIDL_INTERFACE("25297D5C-3AD4-4C9C-B5CF-E36A38512330")
IDockCompositorInterop : public IUnknown {
public:
    virtual HRESULT STDMETHODCALLTYPE CreateCompositionSurfaceForHandle(HANDLE swapChain,
                                                                        void** result) = 0;
    virtual HRESULT STDMETHODCALLTYPE CreateCompositionSurfaceForSwapChain(IUnknown* swapChain,
                                                                           void** result) = 0;
    virtual HRESULT STDMETHODCALLTYPE CreateGraphicsDevice(IUnknown* renderingDevice,
                                                           void** result) = 0;
};
__CRT_UUID_DECL(IDockCompositorInterop, 0x25297d5c, 0x3ad4, 0x4c9c, 0xb5, 0xcf, 0xe3, 0x6a, 0x38,
                0x51, 0x23, 0x30)

MIDL_INTERFACE("FD04E6E3-FE0C-4C3C-AB19-A07601A576EE")
IDockDrawingSurfaceInterop : public IUnknown {
public:
    virtual HRESULT STDMETHODCALLTYPE BeginDraw(const RECT* updateRect, REFIID iid,
                                                void** updateObject, POINT* updateOffset) = 0;
    virtual HRESULT STDMETHODCALLTYPE EndDraw() = 0;
    virtual HRESULT STDMETHODCALLTYPE Resize(SIZE sizePixels) = 0;
    virtual HRESULT STDMETHODCALLTYPE Scroll(const RECT* scrollRect, const RECT* clipRect,
                                             int offsetX, int offsetY) = 0;
    virtual HRESULT STDMETHODCALLTYPE ResumeDraw() = 0;
    virtual HRESULT STDMETHODCALLTYPE SuspendDraw() = 0;
};
__CRT_UUID_DECL(IDockDrawingSurfaceInterop, 0xfd04e6e3, 0xfe0c, 0x4c3c, 0xab, 0x19, 0xa0, 0x76,
                0x01, 0xa5, 0x76, 0xee)

constexpr GUID kDisplacementMapId = {  // CLSID_D2D1DisplacementMap
    0xedc48364, 0x0417, 0x4111, {0x94, 0x50, 0x43, 0x84, 0x5f, 0xa9, 0xf8, 0x90}};
constexpr GUID kCropId = {  // CLSID_D2D1Crop
    0xe23f7110, 0x0e9a, 0x4324, {0xaf, 0x47, 0x6a, 0x2c, 0x0c, 0x46, 0xf3, 0x5b}};
constexpr GUID kBorderId = {  // CLSID_D2D1Border
    0x2a2d49c0, 0x4acf, 0x43c7, {0x8c, 0x6a, 0x7c, 0x4a, 0x27, 0x87, 0x4d, 0x27}};

constexpr DWORD kExcludeFromCapture = 0x11;  // WDA_EXCLUDEFROMCAPTURE
constexpr UINT kGlassTickMs = 50;            // upkeep: new pictures are drawn as they come
constexpr DWORD kCaptureWaitMs = 100;        // a capture thread's longest wait, to stop
constexpr ULONGLONG kGlassUnseenMs = 2000;   // out of sight this long, the screens are let go
constexpr ULONGLONG kCaptureSettleMs = 150;  // after the taskbars leave the picture
constexpr ULONGLONG kCaptureRetryMs = 2000;
constexpr int kGlassMaxFailures = 5;         // then it's off until the settings change
constexpr float kGlassStripMargin = 8;       // above the dock, in the picture kept

std::atomic<bool> g_glassStopped = false;  // by the emergency stop; saved
bool g_glassFailed = false;                // too often, this session
bool g_glassActive = false;                // capturing, the taskbars out of the picture
bool g_glassFrozen = false;                // capture paused, the taskbars shown to it
ULONGLONG g_glassExcludedAt = 0;           // when the taskbars last left the picture
ULONGLONG g_glassRetryAt = 0;              // after a failure
int g_glassFailures = 0;
UINT g_glassTickInterval = 0;              // the timer's, as set
uint64_t g_glassFrames = 0;                // pictures taken from the captures, numbering them
ULONGLONG g_glassUnseenSince = 0;          // when no dock or tray was last shown
// A dock or tray is shown, so the capture threads ask for their pictures to be
// drawn; and one has, not yet handled (only one asks at a time).
std::atomic<bool> g_glassWatching = false;
std::atomic<bool> g_glassFramePosted = false;

std::wstring UserValueName(PCWSTR name);
void StartHotkeys();
void StopHotkeys();

bool GlassWanted() {
    return g_settings.glassStyle != GlassStyle::Off &&
           g_settings.dockLook.background != Background::None && !g_glassStopped &&
           !g_glassFailed && !g_unloading;
}

// ---- Screenshots ----

// Whether screenshots and recordings leave out the taskbars and the dock's
// labels (the mod's layered windows). Any of Explorer's threads can call it.
void SetCaptureExcluded(bool excluded) {
    DWORD affinity = excluded ? kExcludeFromCapture : WDA_NONE;
    ForEachTaskbarWindow([affinity](HWND tb, bool) {
        if (!SetWindowDisplayAffinity(tb, affinity)) {
            Wh_Log(L"Liquid Glass: can't change whether screenshots show the taskbar: %u",
                   GetLastError());
        }
    });
    EnumWindows(
        [](HWND w, LPARAM l) -> BOOL {
            DWORD pid = 0;
            WCHAR cls[64];
            if (GetWindowThreadProcessId(w, &pid) && pid == GetCurrentProcessId() &&
                GetClassName(w, cls, ARRAYSIZE(cls)) && !wcscmp(cls, kWindowClass) &&
                (GetWindowLongPtr(w, GWL_EXSTYLE) & WS_EX_LAYERED)) {
                SetWindowDisplayAffinity(w, (DWORD)l);
            }
            return TRUE;
        },
        (LPARAM)affinity);
}

// A new label window, out of the picture while the taskbars are.
void MatchGlassCaptureVisibility(HWND hwnd) {
    if (g_glassActive && !g_glassFrozen) SetWindowDisplayAffinity(hwnd, kExcludeFromCapture);
}

// ---- Direct2D ----

template <typename T>
void SetEffectValue(ID2D1Effect* effect, UINT32 index, T const& value) {
    winrt::check_hresult(effect->SetValue(index, D2D1_PROPERTY_TYPE_UNKNOWN, (const BYTE*)&value,
                                          sizeof(value)));
}

winrt::com_ptr<ID2D1Effect> GlassEffect(ID2D1DeviceContext* ctx, GUID const& id,
                                        ID2D1Image* input) {
    winrt::com_ptr<ID2D1Effect> effect;
    winrt::check_hresult(ctx->CreateEffect(id, effect.put()));
    effect->SetInput(0, input, TRUE);
    return effect;
}

winrt::com_ptr<ID2D1Image> EffectOutput(ID2D1Effect* effect) {
    winrt::com_ptr<ID2D1Image> image;
    effect->GetOutput(image.put());
    return image;
}

D2D1_MATRIX_3X2_F D2DTranslation(float x, float y) {
    D2D1_MATRIX_3X2_F m{};
    m._11 = m._22 = 1;
    m._31 = x;
    m._32 = y;
    return m;
}

// Each color channel times `scale`, plus `offset`; with `clamp`, held within
// 0 to 1 (see SetBlurVisual).
winrt::com_ptr<ID2D1Image> ColorScale(ID2D1DeviceContext* ctx, ID2D1Image* input, float scale,
                                      float offset, bool clamp,
                                      std::vector<winrt::com_ptr<ID2D1Effect>>& keep) {
    auto& effect = keep.emplace_back(GlassEffect(ctx, kColorMatrixId, input));
    D2D1_MATRIX_5X4_F matrix{};
    matrix.m[0][0] = matrix.m[1][1] = matrix.m[2][2] = scale;
    matrix.m[3][3] = 1;
    matrix.m[4][0] = matrix.m[4][1] = matrix.m[4][2] = offset;
    SetEffectValue(effect.get(), 0, matrix);
    SetEffectValue(effect.get(), 2, (BOOL)clamp);
    return EffectOutput(effect.get());
}

// A function from a system DLL, looked up as the mod's headers or libraries
// may lack it. The DLL is one the mod imports, so it's already loaded and no
// reference is added; failing that, it's loaded from System32 only.
template <typename F>
F LoadSystemFunction(PCWSTR dll, PCSTR name) {
    HMODULE module = GetModuleHandleW(dll);
    if (!module) module = LoadLibraryExW(dll, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    auto f = module ? (F)GetProcAddress(module, name) : nullptr;
    if (!f) winrt::throw_hresult(E_NOINTERFACE);
    return f;
}

// Direct3D calls made outside Direct2D take its lock, as composition shares the
// device.
struct GlassLock {
    ID2D1Multithread* lock;
    explicit GlassLock(ID2D1Multithread* l) : lock(l) {
        if (lock) lock->Enter();
    }
    ~GlassLock() {
        if (lock) lock->Leave();
    }
};

// ---- Device and captures ----

struct GlassDevice {
    winrt::com_ptr<ID3D11Device> d3d;
    winrt::com_ptr<ID3D11DeviceContext> context;
    winrt::com_ptr<ID2D1Device> d2d;
    winrt::com_ptr<ID2D1Multithread> lock;
    std::vector<std::pair<wuc::Compositor, wuc::CompositionGraphicsDevice>> graphics;
};

// One screen captured on a thread of its own (CaptureThread), which waits for
// each new picture and copies the bottom out of it into `strip`. It has its own
// Direct3D device, as waiting for pictures mustn't hold up the glass's drawing;
// `strip` is shared with the drawing's device, the two taking turns with it by
// its keyed mutex (key 0).
struct CaptureWorker {
    winrt::com_ptr<ID3D11Device> device;
    winrt::com_ptr<ID3D11DeviceContext> context;
    winrt::com_ptr<IDXGIOutputDuplication> duplication;
    winrt::com_ptr<ID3D11Texture2D> strip;
    winrt::com_ptr<IDXGIKeyedMutex> stripLock;
    RECT screen{};     // the screen on the desktop
    RECT stripRect{};  // where the strip is on the desktop
    enum State { Running, Lost, Failed };
    std::atomic<State> state = Running;  // Lost: started again shortly
    HRESULT error = S_OK;                // when Failed
    std::atomic<bool> stop = false;
    std::atomic<uint64_t> copied = 0;  // pictures copied into the strip
};

// Every capture thread not yet ended and closed, with its worker, which it has
// a pointer to until then.
std::mutex g_workersLock;
[[clang::no_destroy]] std::list<std::pair<std::shared_ptr<CaptureWorker>, HANDLE>> g_workers;

// A capture's thread, while it runs: its strip opened on the drawing's device,
// and how many of its pictures were taken from there.
struct WorkerThread {
    std::shared_ptr<CaptureWorker> worker;
    winrt::com_ptr<ID3D11Texture2D> strip;
    winrt::com_ptr<IDXGIKeyedMutex> stripLock;
    uint64_t taken = 0;

    WorkerThread() = default;
    WorkerThread(WorkerThread const&) = delete;
    WorkerThread& operator=(WorkerThread const&) = delete;
    ~WorkerThread() { Stop(); }
    explicit operator bool() const { return worker != nullptr; }

    // Told to stop, not waited for: it ends within kCaptureWaitMs or so, and is
    // closed then (ReapWorkers), or waited for when unloading (JoinWorkers).
    void Stop() {
        if (worker) worker->stop = true;
        worker = nullptr;
        strip = nullptr;
        stripLock = nullptr;
        taken = 0;
    }
};

// The bottom of one screen, where its dock is, as last captured.
struct GlassCapture {
    HMONITOR monitor = nullptr;
    WorkerThread worker;                    // capturing it, while it runs
    RECT screen{};                          // the screen on the desktop
    winrt::com_ptr<ID3D11Texture2D> strip;  // its bottom, taken from the worker
    RECT stripRect{};                       // where that is on the desktop
    LONG stripWant = 0;                     // how tall it should be, in pixels
    uint64_t frame = 0;                     // which picture the strip is (g_glassFrames)
    bool used = false;                      // by a dock, on this tick
    bool unsupported = false;               // never captured: the dock keeps the blur
    bool loggedFailure = false;
    ULONGLONG retryAt = 0;
};

[[clang::no_destroy]] GlassDevice g_glassDevice;
[[clang::no_destroy]] std::list<GlassCapture> g_captures;

// Closes the capture threads that have ended.
void ReapWorkers() {
    std::lock_guard guard(g_workersLock);
    g_workers.remove_if([](auto const& entry) {
        if (WaitForSingleObject(entry.second, 0) != WAIT_OBJECT_0) return false;
        CloseHandle(entry.second);
        return true;
    });
}

// Stops every capture thread and waits for it: before unloading, as they run
// the mod's code. From any thread.
void JoinWorkers() {
    decltype(g_workers) workers;
    {
        std::lock_guard guard(g_workersLock);
        workers.swap(g_workers);
    }
    for (auto& [worker, thread] : workers) worker->stop = true;
    for (auto& [worker, thread] : workers) {
        WaitForSingleObject(thread, INFINITE);
        CloseHandle(thread);
    }
}

// The graphics card `monitor` is on: the screen can only be captured from there.
winrt::com_ptr<IDXGIAdapter1> AdapterFor(HMONITOR monitor) {
    winrt::com_ptr<IDXGIFactory1> factory;
    if (FAILED(CreateDXGIFactory1(__uuidof(IDXGIFactory1), factory.put_void()))) return nullptr;
    winrt::com_ptr<IDXGIAdapter1> adapter;
    for (UINT i = 0; SUCCEEDED(factory->EnumAdapters1(i, adapter.put())); i++, adapter = nullptr) {
        winrt::com_ptr<IDXGIOutput> output;
        for (UINT j = 0; SUCCEEDED(adapter->EnumOutputs(j, output.put())); j++, output = nullptr) {
            DXGI_OUTPUT_DESC desc;
            if (SUCCEEDED(output->GetDesc(&desc)) && desc.Monitor == monitor) return adapter;
        }
    }
    return nullptr;
}

// Direct2D on the graphics card of the first dock's screen.
void EnsureGlassDevice(HMONITOR monitor) {
    auto& d = g_glassDevice;
    if (d.d2d) return;
    auto adapter = AdapterFor(monitor);
    winrt::check_hresult(D3D11CreateDevice(
        adapter.get(), adapter ? D3D_DRIVER_TYPE_UNKNOWN : D3D_DRIVER_TYPE_HARDWARE, nullptr,
        D3D11_CREATE_DEVICE_BGRA_SUPPORT, nullptr, 0, D3D11_SDK_VERSION, d.d3d.put(), nullptr,
        d.context.put()));
    using CreateD2D_t =
        HRESULT(WINAPI*)(IDXGIDevice*, const D2D1_CREATION_PROPERTIES*, ID2D1Device**);
    D2D1_CREATION_PROPERTIES props{D2D1_THREADING_MODE_MULTI_THREADED, D2D1_DEBUG_LEVEL_NONE,
                                   D2D1_DEVICE_CONTEXT_OPTIONS_NONE};
    winrt::check_hresult(LoadSystemFunction<CreateD2D_t>(L"d2d1.dll", "D2D1CreateDevice")(
        d.d3d.as<IDXGIDevice>().get(), &props, d.d2d.put()));
    winrt::com_ptr<ID2D1Factory> factory;
    d.d2d->GetFactory(factory.put());
    d.lock = factory.try_as<ID2D1Multithread>();
}

// Composition's way to draw with it, for the compositor `compositor`.
wuc::CompositionGraphicsDevice GraphicsDeviceFor(wuc::Compositor const& compositor) {
    auto& d = g_glassDevice;
    for (auto& [c, device] : d.graphics) {
        if (c == compositor) return device;
    }
    wuc::CompositionGraphicsDevice device{nullptr};
    winrt::check_hresult(compositor.as<IDockCompositorInterop>()->CreateGraphicsDevice(
        d.d2d.get(), winrt::put_abi(device)));
    d.graphics.emplace_back(compositor, device);
    return device;
}

// The glass's blur, as a standard deviation in DIPs: from "Liquid Glass Blur",
// on the frosted glass's scale (see ApplySurfaceLook), whose blur it replaces.
float GlassBlur() {
    return g_settings.glassBlur * kMaxBlur / 100;
}

// How far the glass's blur reaches, at `k` pixels per DIP: three standard
// deviations, so it has the real screen to draw on at the dock's edges.
int GlassPad(float k) {
    return (int)std::ceil(3 * GlassBlur() * k);
}

// How tall a picture of the screen's bottom holds the dock, at `k` pixels per DIP.
LONG StripNeed(float k) {
    return (LONG)std::ceil((g_size.bottomGap + g_size.dockHeight + kGlassStripMargin) * k) +
           GlassPad(k);
}

RECT StripRect(GlassCapture const& c) {
    RECT r = c.screen;
    r.top = std::max(r.top, r.bottom - c.stripWant);
    return r;
}

// Whether the picture just acquired from `duplication` changed anything in
// `area` (on the desktop), `screen` being where its screen is. True if it can't
// tell. `buffer` is reused between pictures.
bool ChangedNear(IDXGIOutputDuplication* duplication, RECT const& screen,
                 DXGI_OUTDUPL_FRAME_INFO const& info, RECT area, std::vector<BYTE>& buffer) {
    if (!info.TotalMetadataBufferSize) return true;
    OffsetRect(&area, -screen.left, -screen.top);
    buffer.resize(info.TotalMetadataBufferSize);
    UINT size = 0;
    RECT hit;
    auto* moves = (DXGI_OUTDUPL_MOVE_RECT*)buffer.data();
    if (FAILED(duplication->GetFrameMoveRects((UINT)buffer.size(), moves, &size))) return true;
    for (UINT i = 0; i < size / sizeof(*moves); i++) {
        if (IntersectRect(&hit, &moves[i].DestinationRect, &area)) return true;
    }
    auto* dirty = (RECT*)buffer.data();
    if (FAILED(duplication->GetFrameDirtyRects((UINT)buffer.size(), dirty, &size))) return true;
    for (UINT i = 0; i < size / sizeof(*dirty); i++) {
        if (IntersectRect(&hit, &dirty[i], &area)) return true;
    }
    return false;
}

// Around the pointer, on the desktop: on some PCs Windows draws the pointer
// into the screen's pictures itself, and the glass would show it. Twice its
// image's size about its hotspot, as Windows can draw it scaled, and padded
// for its shadow. Empty if it's hidden. The image's size is kept per pointer,
// on the capture's thread.
RECT PointerRect() {
    CURSORINFO info{.cbSize = sizeof(info)};
    if (!GetCursorInfo(&info) || !(info.flags & CURSOR_SHOWING) || !info.hCursor) return {};
    thread_local HCURSOR known = nullptr;
    thread_local POINT hotspot{}, size{};
    if (info.hCursor != known) {
        ICONINFO icon{};
        if (!GetIconInfo(info.hCursor, &icon)) return {};
        BITMAP bitmap{};
        bool color = icon.hbmColor && GetObject(icon.hbmColor, sizeof(bitmap), &bitmap);
        if (!color && icon.hbmMask && GetObject(icon.hbmMask, sizeof(bitmap), &bitmap)) {
            bitmap.bmHeight /= 2;  // the AND and XOR masks, one above the other
        }
        if (icon.hbmColor) DeleteObject(icon.hbmColor);
        if (icon.hbmMask) DeleteObject(icon.hbmMask);
        known = info.hCursor;
        hotspot = {(LONG)icon.xHotspot, (LONG)icon.yHotspot};
        size = {std::max(bitmap.bmWidth, 32L), std::max(bitmap.bmHeight, 32L)};
    }
    constexpr LONG kPad = 8;
    POINT p = info.ptScreenPos;
    return {p.x - 2 * hotspot.x - kPad, p.y - 2 * hotspot.y - kPad,
            p.x + 2 * (size.x - hotspot.x) + kPad, p.y + 2 * (size.y - hotspot.y) + kPad};
}

// GlassTick soon, ahead of its timer, unless that's already been asked for.
// From any thread.
void RequestGlassTick() {
    HWND window = g_modWindow;
    if (window && !g_glassFramePosted.exchange(true) &&
        !PostMessage(window, kGlassFrameMessage, 0, 0)) {
        g_glassFramePosted = false;
    }
}

// A capture's thread. It sleeps until Windows has a new picture of the screen,
// copies the bottom out of it if that changed (and the first picture always,
// as it can be marked as the pointer's alone on a quiet screen), and has the
// taskbar's thread draw the glass from it at once (kGlassFrameMessage), rather
// than when a timer next comes round. Lets go of the screen when it ends.
//
// Where the pointer is, now or at the last copy (the picture is from between
// the two), isn't copied after the first picture: the strip keeps what was
// there before the pointer came, so the glass never shows the pointer.
DWORD WINAPI CaptureThread(void* param) {
    auto& w = *(CaptureWorker*)param;
    bool first = true;
    bool filled = false;  // the strip has a whole picture in it
    bool missed = false;  // a change not copied, the strip being busy
    RECT pointerBefore{};
    std::vector<BYTE> buffer;
    try {
        while (!w.stop) {
            DXGI_OUTDUPL_FRAME_INFO info{};
            winrt::com_ptr<IDXGIResource> resource;
            HRESULT hr = w.duplication->AcquireNextFrame(kCaptureWaitMs, &info, resource.put());
            if (hr == DXGI_ERROR_WAIT_TIMEOUT) continue;
            if (FAILED(hr)) {  // lost, as when a UAC prompt shows
                w.state = CaptureWorker::Lost;
                break;
            }
            struct Release {
                IDXGIOutputDuplication* duplication;
                ~Release() { duplication->ReleaseFrame(); }
            } release{w.duplication.get()};

            bool keep = std::exchange(first, false) || std::exchange(missed, false) ||
                        (info.LastPresentTime.QuadPart != 0 &&
                         ChangedNear(w.duplication.get(), w.screen, info, w.stripRect, buffer));
            if (!keep || w.stop) continue;
            auto texture = resource.as<ID3D11Texture2D>();
            D3D11_TEXTURE2D_DESC desc, stripDesc;
            texture->GetDesc(&desc);
            w.strip->GetDesc(&stripDesc);
            if (desc.Format != stripDesc.Format) winrt::throw_hresult(DXGI_ERROR_UNSUPPORTED);

            HRESULT sync = w.stripLock->AcquireSync(0, kCaptureWaitMs);
            if (sync == (HRESULT)WAIT_TIMEOUT) {
                missed = true;
                continue;
            }
            if (sync != S_OK) {
                w.state = CaptureWorker::Lost;
                break;
            }
            RECT const& s = w.stripRect;
            auto copy = [&](RECT r) {
                if (r.right <= r.left || r.bottom <= r.top) return;
                D3D11_BOX box{(UINT)(r.left - w.screen.left), (UINT)(r.top - w.screen.top), 0,
                              (UINT)(r.right - w.screen.left), (UINT)(r.bottom - w.screen.top),
                              1};
                w.context->CopySubresourceRegion(w.strip.get(), 0, (UINT)(r.left - s.left),
                                                 (UINT)(r.top - s.top), 0, texture.get(), 0,
                                                 &box);
            };
            RECT pointerNow = PointerRect();
            RECT pointer, hole;
            UnionRect(&pointer, &pointerNow, &pointerBefore);
            pointerBefore = pointerNow;
            if (!filled || !IntersectRect(&hole, &pointer, &s)) {
                copy(s);
                filled = true;
            } else {
                copy({s.left, s.top, s.right, hole.top});
                copy({s.left, hole.bottom, s.right, s.bottom});
                copy({s.left, hole.top, hole.left, hole.bottom});
                copy({hole.right, hole.top, s.right, hole.bottom});
            }
            w.stripLock->ReleaseSync(0);
            w.copied++;
            if (g_glassWatching) RequestGlassTick();
        }
    } catch (...) {
        w.error = winrt::to_hresult();
        w.state = CaptureWorker::Failed;
    }
    w.stripLock = nullptr;
    w.strip = nullptr;
    w.duplication = nullptr;
    w.context = nullptr;
    w.device = nullptr;
    return 0;
}

// Desktop Duplication of `c`'s screen, if it's on the device's graphics card,
// on a thread of its own.
bool StartCapture(GlassCapture& c) {
    auto& d = g_glassDevice;
    winrt::com_ptr<IDXGIAdapter> adapter;
    winrt::check_hresult(d.d3d.as<IDXGIDevice>()->GetAdapter(adapter.put()));
    winrt::com_ptr<IDXGIOutput> output;
    for (UINT i = 0; SUCCEEDED(adapter->EnumOutputs(i, output.put())); i++, output = nullptr) {
        DXGI_OUTPUT_DESC desc;
        if (FAILED(output->GetDesc(&desc)) || desc.Monitor != c.monitor) continue;
        auto w = std::make_shared<CaptureWorker>();
        winrt::check_hresult(D3D11CreateDevice(adapter.get(), D3D_DRIVER_TYPE_UNKNOWN, nullptr, 0,
                                               nullptr, 0, D3D11_SDK_VERSION, w->device.put(),
                                               nullptr, w->context.put()));
        HRESULT hr = output.as<IDXGIOutput1>()->DuplicateOutput(w->device.get(),
                                                                w->duplication.put());
        if (FAILED(hr)) {
            if (!std::exchange(c.loggedFailure, true)) {
                Wh_Log(L"Liquid Glass: can't capture the screen (0x%08X): frosted glass until it "
                       L"can, tried every few seconds",
                       hr);
            }
            return false;
        }
        // A turned screen's frames come unturned; not handled.
        DXGI_OUTDUPL_DESC duplicated;
        w->duplication->GetDesc(&duplicated);
        if (duplicated.Rotation != DXGI_MODE_ROTATION_IDENTITY &&
            duplicated.Rotation != DXGI_MODE_ROTATION_UNSPECIFIED) {
            Wh_Log(L"Liquid Glass: a dock's screen is turned, which isn't supported: frosted glass");
            c.unsupported = true;
            return false;
        }
        c.screen = w->screen = desc.DesktopCoordinates;
        RECT strip = w->stripRect = StripRect(c);

        // The strip, shared with the drawing's device. Desktop Duplication's
        // pictures always come in this format.
        D3D11_TEXTURE2D_DESC stripDesc{};
        stripDesc.Width = strip.right - strip.left;
        stripDesc.Height = strip.bottom - strip.top;
        stripDesc.MipLevels = stripDesc.ArraySize = 1;
        stripDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        stripDesc.SampleDesc = {1, 0};
        stripDesc.Usage = D3D11_USAGE_DEFAULT;
        stripDesc.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;
        stripDesc.MiscFlags = D3D11_RESOURCE_MISC_SHARED_KEYEDMUTEX;
        winrt::check_hresult(w->device->CreateTexture2D(&stripDesc, nullptr, w->strip.put()));
        w->stripLock = w->strip.as<IDXGIKeyedMutex>();
        HANDLE shared = nullptr;
        winrt::check_hresult(w->strip.as<IDXGIResource>()->GetSharedHandle(&shared));
        winrt::com_ptr<ID3D11Texture2D> opened;
        winrt::check_hresult(
            d.d3d->OpenSharedResource(shared, __uuidof(ID3D11Texture2D), opened.put_void()));
        auto openedLock = opened.as<IDXGIKeyedMutex>();

        {
            std::lock_guard guard(g_workersLock);
            if (g_unloading) return false;  // JoinWorkers may have run already
            HANDLE thread = CreateThread(nullptr, 0, CaptureThread, w.get(), 0, nullptr);
            if (!thread) winrt::throw_last_error();
            g_workers.emplace_back(w, thread);
        }
        c.worker.Stop();
        c.worker.worker = w;
        c.worker.strip = opened;
        c.worker.stripLock = openedLock;
        return true;
    }
    Wh_Log(L"Liquid Glass: a dock's screen is on another graphics card: frosted glass");
    c.unsupported = true;
    return false;
}

// The capture thread's newest picture of the screen's bottom copied into `c`,
// if there's one not yet taken: whether there was. Starts over shortly if the
// thread lost the screen; throws if it failed.
bool TakeStrip(GlassCapture& c) {
    auto& t = c.worker;
    if (!t) return false;
    auto& w = *t.worker;
    switch (w.state.load()) {
        case CaptureWorker::Lost:
            t.Stop();
            c.retryAt = GetTickCount64() + 500;
            return false;
        case CaptureWorker::Failed: {
            HRESULT error = w.error;
            t.Stop();
            winrt::throw_hresult(FAILED(error) ? error : E_FAIL);
        }
        default:
            break;
    }
    uint64_t copied = w.copied;
    if (copied == t.taken) return false;

    auto& d = g_glassDevice;
    D3D11_TEXTURE2D_DESC desc, have{};
    t.strip->GetDesc(&desc);
    if (c.strip) c.strip->GetDesc(&have);
    winrt::com_ptr<ID3D11Texture2D> target = c.strip;
    if (!target || have.Width != desc.Width || have.Height != desc.Height ||
        have.Format != desc.Format) {
        desc.BindFlags = desc.CPUAccessFlags = desc.MiscFlags = 0;
        target = nullptr;
        winrt::check_hresult(d.d3d->CreateTexture2D(&desc, nullptr, target.put()));
    }
    {
        GlassLock lock(d.lock.get());
        // Being copied into: the thread asks again when it's done.
        if (t.stripLock->AcquireSync(0, 0) != S_OK) return false;
        d.context->CopyResource(target.get(), t.strip.get());
        t.stripLock->ReleaseSync(0);
    }
    c.strip = target;
    c.stripRect = w.stripRect;
    c.frame = ++g_glassFrames;
    t.taken = copied;
    return true;
}

// ---- Which screen it's on ----

bool IsTaskbarWindow(HWND w) {
    DWORD pid = 0;
    WCHAR cls[32];
    return w && GetWindowThreadProcessId(w, &pid) && pid == GetCurrentProcessId() &&
           GetClassName(w, cls, ARRAYSIZE(cls)) &&
           (!_wcsicmp(cls, L"Shell_TrayWnd") || !_wcsicmp(cls, L"Shell_SecondaryTrayWnd"));
}

// The taskbar window a dock is in: the only one, the only one as big as the
// dock's XAML, or the one the pointer was last over it in (NoteGlassWindow).
// Looked for at most once a second.
HWND PlateWindow(Plate& p) {
    auto& g = p.glass;
    if (IsTaskbarWindow(g.window)) return g.window;
    g.window = nullptr;
    ULONGLONG now = GetTickCount64();
    if (g.lookedAt && now - g.lookedAt < 1000) return nullptr;
    g.lookedAt = now;
    auto panel = p.panel.get();
    auto root = panel ? panel.XamlRoot() : nullptr;
    if (!root) return nullptr;
    double scale = root.RasterizationScale();
    auto size = root.Size();
    LONG w = std::lround(size.Width * scale), h = std::lround(size.Height * scale);
    int count = 0, matches = 0;
    HWND any = nullptr, match = nullptr;
    ForEachTaskbarWindow([&](HWND tb, bool) {
        count++;
        any = tb;
        RECT r;
        if (GetWindowRect(tb, &r) && std::abs(r.right - r.left - w) <= 2 &&
            std::abs(r.bottom - r.top - h) <= 2) {
            matches++;
            match = tb;
        }
    });
    g.window = count == 1 ? any : matches == 1 ? match : nullptr;
    static bool logged = false;
    if (!g.window && count > 1 && !std::exchange(logged, true)) {
        Wh_Log(L"Liquid Glass: can't tell a dock's screen yet: frosted glass until the pointer "
               L"passes over it");
    }
    return g.window;
}

// The pointer's over `p`: it's in the taskbar on the pointer's screen.
void NoteGlassWindow(Plate& p) {
    POINT cursor;
    if (!g_glassActive || !GetCursorPos(&cursor)) return;
    if (HWND tb = TaskbarOnMonitor(MonitorFromPoint(cursor, MONITOR_DEFAULTTONEAREST))) {
        p.glass.window = tb;
    }
}

// The capture of the screen the taskbar `window` is on, for `g`, started if
// it's due. Null if there can't be one.
GlassCapture* CaptureFor(HWND window, GlassPlate& g, ULONGLONG now) {
    HMONITOR monitor = MonitorFromWindow(window, MONITOR_DEFAULTTONEAREST);
    g.monitor = monitor;
    GlassCapture* c = nullptr;
    for (auto& capture : g_captures) {
        if (capture.monitor == monitor) c = &capture;
    }
    if (!c) {
        c = &g_captures.emplace_back();
        c->monitor = monitor;
        UINT dpiX = 96, dpiY = 96;
        GetDpiForMonitor(monitor, MDT_EFFECTIVE_DPI, &dpiX, &dpiY);
        c->stripWant = StripNeed(dpiY / 96.0f);
    }
    c->used = true;
    if (c->unsupported) return nullptr;
    if (g_glassFrozen) return c;  // the last picture, kept
    // Never while its taskbar might be in the picture.
    DWORD affinity = 0;
    if (!GetWindowDisplayAffinity(window, &affinity) || affinity != kExcludeFromCapture) {
        if (!SetWindowDisplayAffinity(window, kExcludeFromCapture)) {
            static bool logged = false;
            if (!std::exchange(logged, true)) {
                Wh_Log(L"Liquid Glass: Windows won't leave the taskbar out of the picture (%u): "
                       L"frosted glass",
                       GetLastError());
            }
        }
        c->worker.Stop();
        c->strip = nullptr;
        c->retryAt = now + kCaptureSettleMs;
        return c;
    }
    if (!c->worker && now >= c->retryAt && now >= g_glassExcludedAt + kCaptureSettleMs &&
        now >= g_glassRetryAt) {
        EnsureGlassDevice(monitor);
        if (!StartCapture(*c)) c->retryAt = now + kCaptureRetryMs;
    }
    return c;
}

// ---- The bent rim ----

// How much further in than itself a rim pixel takes its color from, in rim
// depths, at full strength. `u` is 1 at the outline and 0 at the rim's inner
// edge. Each is 0 and level at u = 0, so the rim meets the clear middle
// without a line; none is over 2, the map's limit.
float RimShift(float u) {
    switch (g_settings.glassStyle) {
        case GlassStyle::Reflection: {
            // A true mirror (shift growing twice as fast as the pixel moves
            // out), turning in a curve over the inner quarter.
            constexpr float kTurn = 0.25f;
            return u < kTurn ? u * u / kTurn : 2 * u - kTurn;
        }
        case GlassStyle::Stretch:
            // The most that never turns back: what's half the rim in reaches
            // the edge, magnified more and more toward it.
            return 0.5f * u * u;
        default:
            // A mirror squeezed toward the edge, turning in a wide curve.
            return 2 * u * u;
    }
}

// For each pixel of a `w` x `h` map, where it takes its color from, as 0.5 +
// offset / scale in red (across) and green (down); the scale is returned. In
// the rim of the rounded rectangle at (`sx`, `sy`), `sw` x `sh`, with corners
// `radius`, all in pixels: from further in, by RimShift; elsewhere, from
// itself. A squircle's outline lies inside that rounded rectangle's, so no
// pixel of the dock is left out of the rim. In floats, so "itself" is exact.
float BuildGlassMap(std::vector<float>& pixels, int w, int h, float sx, float sy, float sw,
                    float sh, float radius, float k) {
    auto& s = g_settings;
    float scale = std::max(4 * s.glassDepth * k * s.glassStrength, 1.0f);  // twice the most
    pixels.assign((size_t)w * h * 4, 0.5f);
    for (size_t i = 3; i < pixels.size(); i += 4) pixels[i] = 1;

    float halfW = sw / 2, halfH = sh / 2;
    float cx = sx + halfW, cy = sy + halfH;
    radius = std::min({radius, halfW, halfH});
    float rim = std::min(s.glassDepth * k, std::min(halfW, halfH) / 2);  // not past the middle
    if (rim <= 0) return scale;
    // Which way is out is taken from corners at least as round as the rim is
    // deep, so the rim's inner edge has no sharp corner to crease along.
    float round = std::max(radius, rim);
    auto bend = [&](int x, int y) {
        float px = x + 0.5f - cx, py = y + 0.5f - cy;
        float ax = std::fabs(px), ay = std::fabs(py);
        // How far in from the outline.
        float qx = ax - (halfW - radius), qy = ay - (halfH - radius);
        float ox = std::max(qx, 0.0f), oy = std::max(qy, 0.0f);
        float depth = radius - std::min(std::max(qx, qy), 0.0f) - std::sqrt(ox * ox + oy * oy);
        if (depth < 0 || depth >= rim) return;
        // Which way is out (not yet of unit length).
        float nx = std::max(ax - (halfW - round), 0.0f);
        float ny = std::max(ay - (halfH - round), 0.0f);
        float length = std::sqrt(nx * nx + ny * ny);
        if (length <= 0) return;
        float u = 1 - depth / rim;  // 1 at the outline, 0 at the rim's inner edge
        float offset = rim * RimShift(u) * s.glassStrength / scale / length;
        float* p = &pixels[((size_t)y * w + x) * 4];
        p[0] = 0.5f - std::copysign(nx, px) * offset;  // inward
        p[1] = 0.5f - std::copysign(ny, py) * offset;
    };
    int x0 = std::max(0, (int)sx), x1 = std::min(w, (int)std::ceil(sx + sw));
    int y0 = std::max(0, (int)sy), y1 = std::min(h, (int)std::ceil(sy + sh));
    // Away from the top and bottom, only the ends are within the rim: the rest
    // of a row is deeper.
    float ends = halfW - radius - rim;
    // Skipped: pixels whose middle is less than `ends` from the dock's.
    int innerLeft = std::clamp((int)std::floor(cx - ends - 0.5f) + 1, x0, x1);
    int innerRight = std::clamp((int)std::ceil(cx + ends - 0.5f), innerLeft, x1);
    for (int y = y0; y < y1; y++) {
        bool edge = std::fabs(y + 0.5f - cy) >= halfH - rim;
        for (int x = x0; x < x1; x++) {
            if (!edge && x == innerLeft) x = innerRight;
            if (x >= x1) break;
            bend(x, y);
        }
    }
    return scale;
}

// ---- Drawing ----

LONG RoundUp(LONG value, LONG step) {
    return (value + step - 1) / step * step;
}

// Where a background's glass goes at the moment: a dock's, or a tray's while it
// matches the dock.
struct GlassSpot {
    HWND window = nullptr;             // the taskbar it's in
    float x = 0, y = 0, w = 0, h = 0;  // on screen, in pixels
    float k = 1;                       // pixels per DIP
    float radius = 0;                  // its corners, in pixels
    ToneLimit tone;                    // its brightness limit
};

// `g`'s surface, `size` pixels, in a visual in `s`'s blurHost as big at
// `spot.k` pixels per DIP, and clipped to `spot`'s outline (which ShapeSurface
// then keeps up to date). Made the first time.
void EnsureGlassSurface(Surface& s, GlassPlate& g, SIZE size, GlassSpot const& spot) {
    if (!g.surface) {
        auto compositor = wuxh::ElementCompositionPreview::GetElementVisual(s.blurHost).Compositor();
        auto device = GraphicsDeviceFor(compositor);
        g.surface = device.CreateDrawingSurface({(float)size.cx, (float)size.cy},
                                                wgdx::DirectXPixelFormat::B8G8R8A8UIntNormalized,
                                                wgdx::DirectXAlphaMode::Premultiplied);
        g.surfaceSize = size;
        auto brush = compositor.CreateSurfaceBrush(g.surface);
        brush.Stretch(wuc::CompositionStretch::Fill);
        g.sprite = compositor.CreateSpriteVisual();
        g.sprite.Brush(brush);
        s.glassShape = compositor.CreatePathGeometry();
        float k = spot.k, r = spot.radius / k;
        s.glassShape.Path(SquirclePath(Squircle(0, 0, spot.w / k, spot.h / k, r, r)));
        g.sprite.Clip(compositor.CreateGeometricClip(s.glassShape));
    } else if (size.cx != g.surfaceSize.cx || size.cy != g.surfaceSize.cy) {
        winrt::check_hresult(g.surface.as<IDockDrawingSurfaceInterop>()->Resize(size));
        g.surfaceSize = size;
    }
    // One pixel of the surface to one on screen.
    g.sprite.Size({size.cx / spot.k, size.cy / spot.k});
}

// The glass in place of the blur.
void ShowGlass(Surface& s, GlassPlate& g) {
    wuxh::ElementCompositionPreview::SetElementChildVisual(s.blurHost, g.sprite);
    s.blurShape = nullptr;
    s.appliedBlur = -1;  // made again when it's back
    s.glassShown = true;
}

// `g` let go, its taskbar still known. Whether its glass was shown, so the
// blur can be put back.
bool ForgetGlass(Surface& s, GlassPlate& g) {
    bool shown = s.glassShown;
    s.glassShown = false;
    s.glassShape = nullptr;
    HWND window = g.window;
    g = GlassPlate{};
    g.window = window;
    return shown;
}

// Draws `g`'s glass into `s` from `c`'s picture of the screen, at `spot`, if
// either changed since it was last drawn. False if it can't be drawn yet.
bool DrawGlass(Surface& s, GlassPlate& g, GlassSpot const& spot, GlassCapture& c) {
    if (!s.blurHost || !c.strip || spot.w <= 0 || spot.h <= 0) return false;
    float x = spot.x, y = spot.y, w = spot.w, h = spot.h, k = spot.k;
    std::array<float, 4> where{x, y, w, h};
    if (!g.dirty && s.glassShown && where == g.drawnAt && g.drawnFrame == c.frame) return true;

    // What's behind it and a margin, from (left - pad, top - pad); its corner
    // is (fx, fy) into the pixel at (left, top).
    int pad = GlassPad(k);
    LONG left = (LONG)std::floor(x), top = (LONG)std::floor(y);
    float fx = x - left, fy = y - top;
    SIZE size{std::max(1L, (LONG)std::ceil(w)), std::max(1L, (LONG)std::ceil(h))};
    SIZE area{size.cx + 1 + 2 * pad, size.cy + 1 + 2 * pad};
    RECT around{left - pad, top - pad, left - pad + area.cx, top - pad + area.cy};

    // The picture must reach up to it: if not, it's taken again, taller.
    if (around.top < c.stripRect.top && c.stripRect.top > c.screen.top && !g_glassFrozen) {
        LONG want = std::min(c.screen.bottom - around.top + (LONG)kGlassStripMargin,
                             c.screen.bottom - c.screen.top);
        if (want > c.stripWant) {
            c.stripWant = want;
            c.worker.Stop();
            c.retryAt = 0;
            return false;
        }
    }
    RECT valid;
    if (!IntersectRect(&valid, &around, &c.stripRect)) return false;

    auto& d = g_glassDevice;
    D3D11_TEXTURE2D_DESC stripDesc, have{};
    c.strip->GetDesc(&stripDesc);
    if (g.behind) g.behind->GetDesc(&have);
    if (!g.behind || have.Format != stripDesc.Format || (LONG)have.Width < area.cx ||
        (LONG)have.Height < area.cy) {
        D3D11_TEXTURE2D_DESC desc{};
        desc.Width = RoundUp(area.cx, 256);
        desc.Height = RoundUp(area.cy, 64);
        desc.MipLevels = desc.ArraySize = 1;
        desc.Format = stripDesc.Format;
        desc.SampleDesc.Count = 1;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        g.behind = nullptr;
        g.behindBitmap = nullptr;
        winrt::check_hresult(d.d3d->CreateTexture2D(&desc, nullptr, g.behind.put()));
    }
    {
        GlassLock lock(d.lock.get());
        D3D11_BOX box{(UINT)(valid.left - c.stripRect.left), (UINT)(valid.top - c.stripRect.top), 0,
                      (UINT)(valid.right - c.stripRect.left), (UINT)(valid.bottom - c.stripRect.top),
                      1};
        d.context->CopySubresourceRegion(g.behind.get(), 0, valid.left - around.left,
                                         valid.top - around.top, 0, c.strip.get(), 0, &box);
    }
    OffsetRect(&valid, -around.left, -around.top);

    EnsureGlassSurface(s, g, size, spot);
    auto interop = g.surface.as<IDockDrawingSurfaceInterop>();
    winrt::com_ptr<ID2D1DeviceContext> ctx;
    POINT offset{};
    winrt::check_hresult(
        interop->BeginDraw(nullptr, __uuidof(ID2D1DeviceContext), ctx.put_void(), &offset));
    try {
        ctx->SetDpi(96, 96);
        if (!g.behindBitmap) {
            D2D1_BITMAP_PROPERTIES1 props{{stripDesc.Format, D2D1_ALPHA_MODE_IGNORE}, 96, 96,
                                          D2D1_BITMAP_OPTIONS_NONE, nullptr};
            winrt::check_hresult(ctx->CreateBitmapFromDxgiSurface(
                g.behind.as<IDXGISurface>().get(), &props, g.behindBitmap.put()));
        }

        // The map of the rim, made again when the glass has moved or resized.
        float radius = spot.radius;
        std::array<float, 8> mapFor{(float)area.cx, (float)area.cy, pad + fx, pad + fy,
                                    w,              h,              radius,   k};
        if (!g.map || mapFor != g.mapFor) {
            g.mapScale = BuildGlassMap(g.mapPixels, area.cx, area.cy, pad + fx, pad + fy, w, h,
                                       radius, k);
            if (!g.map || g.mapCapacity.cx < area.cx || g.mapCapacity.cy < area.cy) {
                g.map = nullptr;
                g.mapCapacity = {RoundUp(area.cx, 256), RoundUp(area.cy, 64)};
                D2D1_BITMAP_PROPERTIES1 props{
                    {DXGI_FORMAT_R32G32B32A32_FLOAT, D2D1_ALPHA_MODE_PREMULTIPLIED}, 96, 96,
                    D2D1_BITMAP_OPTIONS_NONE, nullptr};
                winrt::check_hresult(ctx->CreateBitmap(
                    D2D1_SIZE_U{(UINT32)g.mapCapacity.cx, (UINT32)g.mapCapacity.cy}, nullptr, 0,
                    &props, g.map.put()));
            }
            D2D1_RECT_U rect{0, 0, (UINT32)area.cx, (UINT32)area.cy};
            winrt::check_hresult(
                g.map->CopyFromMemory(&rect, g.mapPixels.data(), (UINT32)area.cx * 16));
            g.mapFor = mapFor;
        }

        std::vector<winrt::com_ptr<ID2D1Effect>> keep;
        keep.reserve(12);  // so the references below stay valid

        // Only the part that's really on the screen; past it, its edge pixels.
        auto& crop = keep.emplace_back(GlassEffect(ctx.get(), kCropId, g.behindBitmap.get()));
        struct {
            float left, top, right, bottom;
        } cropRect{(float)valid.left, (float)valid.top, (float)valid.right, (float)valid.bottom};
        SetEffectValue(crop.get(), 0, cropRect);
        SetEffectValue(crop.get(), 1, (UINT32)1);  // hard edges
        auto& border = keep.emplace_back(
            GlassEffect(ctx.get(), kBorderId, EffectOutput(crop.get()).get()));  // clamps

        auto& displace = keep.emplace_back(
            GlassEffect(ctx.get(), kDisplacementMapId, EffectOutput(border.get()).get()));
        // Full precision, so the offsets aren't rounded to 8 bits.
        constexpr UINT32 kPrecision = 0x80000007, k32BitFloat = 5;
        SetEffectValue(displace.get(), kPrecision, k32BitFloat);
        displace->SetInput(1, g.map.get(), TRUE);
        SetEffectValue(displace.get(), 0, g.mapScale);  // scale
        SetEffectValue(displace.get(), 1, (UINT32)0);   // across from red
        SetEffectValue(displace.get(), 2, (UINT32)1);   // down from green
        auto glass = EffectOutput(displace.get());

        // Over the whole of it, bent rim included, so its fold is soft too.
        if (float deviation = GlassBlur() * k; deviation > 0) {
            auto& blur = keep.emplace_back(GlassEffect(ctx.get(), kGaussianBlurId, glass.get()));
            SetEffectValue(blur.get(), 0, deviation);  // standard deviation
            SetEffectValue(blur.get(), 2, (UINT32)1);  // hard edges
            glass = EffectOutput(blur.get());
        }

        // The brightness limit, held as the blur holds it (see SetBlurVisual).
        if (spot.tone.ceiling < 1) {
            float ceiling = std::max(spot.tone.ceiling, 0.01f);
            glass = ColorScale(ctx.get(), glass.get(), 1 / ceiling, 0, true, keep);
            glass = ColorScale(ctx.get(), glass.get(), ceiling, 0, false, keep);
        }
        if (spot.tone.floor > 0) {
            float room = std::max(1 - spot.tone.floor, 0.01f);  // from the floor up to white
            glass = ColorScale(ctx.get(), glass.get(), -1 / room, 1 / room, true, keep);
            glass = ColorScale(ctx.get(), glass.get(), -room, 1, false, keep);
        }

        // The surface is a part of a texture composition shares, at `offset`.
        // Clipped to it, as drawing with SOURCE_COPY clears all the way to the
        // clip.
        D2D1_MATRIX_3X2_F atSurface = D2DTranslation((float)offset.x, (float)offset.y);
        ctx->SetTransform(&atSurface);
        D2D1_RECT_F bounds{0, 0, (float)size.cx, (float)size.cy};
        ctx->PushAxisAlignedClip(&bounds, D2D1_ANTIALIAS_MODE_ALIASED);
        struct PopClip {
            ID2D1DeviceContext* ctx;
            ~PopClip() { ctx->PopAxisAlignedClip(); }
        } popClip{ctx.get()};
        // The glass's corner, (pad + fx, pad + fy) in the picture, at the
        // surface's: DrawImage puts the source's corner at the origin itself.
        D2D1_RECT_F source{pad + fx, pad + fy, pad + fx + size.cx, pad + fy + size.cy};
        ctx->DrawImage(glass.get(), nullptr, &source, D2D1_INTERPOLATION_MODE_LINEAR,
                       D2D1_COMPOSITE_MODE_SOURCE_COPY);
    } catch (...) {
        interop->EndDraw();
        throw;
    }
    winrt::check_hresult(interop->EndDraw());

    if (!s.glassShown) {
        ShowGlass(s, g);
        static bool logged = false;
        if (!std::exchange(logged, true)) Wh_Log(L"Liquid Glass: bending what's behind the dock");
    }
    g.drawnAt = where;
    g.drawnFrame = c.frame;
    g.dirty = false;
    return true;
}

// Whether it was drawn without an error (drawn at all or not).
bool DrawGlassSafely(Surface& s, GlassPlate& g, GlassSpot const& spot, GlassCapture& c) {
    try {
        DrawGlass(s, g, spot, c);
        return true;
    } catch (...) {
        Wh_Log(L"Liquid Glass: drawing failed (0x%08X): frosted glass for now", winrt::to_hresult());
        return false;
    }
}

// ---- The dock ----

// Where `p`'s plate is on screen: from what the frame loop set (layout catches
// up later), and the slide of auto-hide. False while it isn't shown.
bool PlateSpot(Plate& p, GlassSpot& spot) {
    auto panel = p.panel.get();
    auto root = panel ? panel.XamlRoot() : nullptr;
    auto content = root ? root.Content() : nullptr;
    auto& plate = p.surface.root;
    if (!content || !plate || p.width <= 0 || plate.Visibility() != Visibility::Visible) {
        return false;
    }
    HWND window = PlateWindow(p);
    RECT screen;
    if (!window || !GetWindowRect(window, &screen)) return false;
    float k = (float)root.RasterizationScale();
    auto at = panel.TransformToVisual(content).TransformPoint({0, 0});
    spot.window = window;
    spot.x = screen.left + (at.X + p.left) * k;
    spot.y = screen.top + (at.Y + p.top + p.hideY) * k;
    spot.w = p.width * k;
    spot.h = g_size.dockHeight * k;
    spot.k = k;
    spot.radius = SquircleRadius(spot.w, spot.h, g_size.dockRadius * k);
    spot.tone = ToneFor(g_settings.dockBrightnessLimit, true);  // as ApplyPlateLook
    return true;
}

// `p`'s glass let go, and with `blur`, the frosted blur back if it was shown.
void ReleaseGlass(Plate& p, bool blur) {
    if (ForgetGlass(p.surface, p.glass) && blur && !g_unloading) {
        Try([&] { ApplyPlateLook(p); }, L"Frosted glass");
    }
}

void SetGlassTimer(UINT ms) {
    HWND w = g_modWindow;
    if (!w || ms == g_glassTickInterval) return;
    if (SetTimer(w, kGlassTimer, ms, nullptr)) g_glassTickInterval = ms;
}

// In LIQUID GLASS: DOCKS AND TRAYS, after the tray's background, which it
// draws into too.
void UpdateGlass();
void FollowGlass();
void GlassTrayRevealed();

// ---- Hotkeys ----
// Win+Ctrl+Shift, as Windows' own Win+Ctrl+Shift+B: Ctrl+Shift+K alone is used
// by apps (VS Code, Firefox), and a hotkey takes it from all of them.

constexpr int kStopHotkey = 1, kFreezeHotkey = 2;
HANDLE g_hotkeyThread = nullptr;
DWORD g_hotkeyThreadId = 0;

// Win+Ctrl+Shift+K, on the hotkeys' thread. The taskbar's back in screenshots
// right away, and the glass is off until the settings are next saved, even if
// the taskbar's thread is stuck (it's put away there once it's free).
void StopGlassNow() {
    bool already = g_glassStopped.exchange(true);
    Wh_SetIntValue(UserValueName(L"glassStopped").c_str(), 1);
    SetCaptureExcluded(false);
    if (HWND w = g_modWindow) PostMessage(w, kGlassStopMessage, 0, 0);
    MessageBeep(MB_ICONEXCLAMATION);
    if (!already) {
        Wh_Log(L"Emergency stop (Win+Ctrl+Shift+K): Liquid Glass is off until this mod's "
               L"settings are next saved");
    }
}

DWORD WINAPI HotkeyThread(void* ready) {
    MSG msg;
    PeekMessage(&msg, nullptr, WM_USER, WM_USER, PM_NOREMOVE);  // its queue, for WM_QUIT
    SetEvent((HANDLE)ready);
    constexpr UINT kModifiers = MOD_WIN | MOD_CONTROL | MOD_SHIFT | MOD_NOREPEAT;
    bool stop = RegisterHotKey(nullptr, kStopHotkey, kModifiers, 'K');
    bool freeze = RegisterHotKey(nullptr, kFreezeHotkey, kModifiers, 'G');
    if (!stop) Wh_Log(L"Win+Ctrl+Shift+K is taken by another program: no emergency stop");
    if (!freeze) Wh_Log(L"Win+Ctrl+Shift+G is taken by another program: no freezing the glass");
    while (GetMessage(&msg, nullptr, 0, 0) > 0) {
        if (msg.message != WM_HOTKEY) continue;
        if (msg.wParam == kStopHotkey) {
            StopGlassNow();
        } else if (msg.wParam == kFreezeHotkey) {
            if (HWND w = g_modWindow) PostMessage(w, kGlassFreezeMessage, 0, 0);
        }
    }
    if (stop) UnregisterHotKey(nullptr, kStopHotkey);
    if (freeze) UnregisterHotKey(nullptr, kFreezeHotkey);
    return 0;
}

// Once the taskbar's found: only the Explorer process that runs it listens.
void StartHotkeys() {
    if (g_hotkeyThread || g_unloading) return;
    HANDLE ready = CreateEvent(nullptr, TRUE, FALSE, nullptr);
    if (!ready) return;
    g_hotkeyThread = CreateThread(nullptr, 0, HotkeyThread, ready, 0, &g_hotkeyThreadId);
    if (g_hotkeyThread) WaitForSingleObject(ready, INFINITE);
    CloseHandle(ready);
}

// When Liquid Glass is turned off, and before unloading, as the thread runs the
// mod's code.
void StopHotkeys() {
    if (!g_hotkeyThread) return;
    PostThreadMessage(g_hotkeyThreadId, WM_QUIT, 0, 0);
    WaitForSingleObject(g_hotkeyThread, INFINITE);
    CloseHandle(g_hotkeyThread);
    g_hotkeyThread = nullptr;
}

// =============================================================================
// FRAME LOOP
// =============================================================================
// Runs once per screen refresh, only while something is moving.

winrt::event_token g_frameToken{};
bool g_frameRunning = false;
std::chrono::steady_clock::time_point g_lastFrame;
int g_platesDirtyFrames = 0;  // frames left in which to re-measure the plates

void ScanTaskbars();
bool FollowPointerUnderTrashMenu();
void UpdateDockFit();

void StopFrames() {
    if (!g_frameRunning) return;
    wuxm::CompositionTarget::Rendering(g_frameToken);
    g_frameRunning = false;
}

void OnFrame();

void StartFrames() {
    if (g_frameRunning) return;
    g_lastFrame = std::chrono::steady_clock::now();
    g_frameToken = wuxm::CompositionTarget::Rendering(
        [](wf::IInspectable const&, wf::IInspectable const&) {
            try {
                OnFrame();
            } catch (...) {
                Wh_Log(L"OnFrame error: 0x%08X %s", winrt::to_hresult(),
                       winrt::to_message().c_str());
                StopFrames();
            }
        });
    g_frameRunning = true;
}

// Re-measured over a few frames, so the taskbar has laid buttons out first.
void MarkPlatesDirty() {
    g_platesDirtyFrames = 3;
    StartFrames();
}

// Finds new buttons, adds missing plates and re-measures them. Not done in the
// hooks, as the taskbar doesn't like its tree changing while it updates.
void RefreshPlates() {
    Try(ScanTaskbars, L"ScanTaskbars");
    for (auto& b : *g_buttons) {
        if (auto el = b.element.get()) Try([&] { EnsurePlate(el); }, L"EnsurePlate");
    }
    g_measuringPlates = true;
    for (auto& p : *g_plates) {
        // Laid out first: this runs as a frame starts, before XAML lays out
        // what's changed, so as an app opens or closes the buttons would be
        // measured where they were, and the dock drawn a frame out of step.
        if (auto panel = p.panel.get()) Try([&] { panel.UpdateLayout(); }, L"Layout");
        Try([&] { MeasurePlate(p); }, L"MeasurePlate");
    }
    EnsureStartIcons();
    g_measuringPlates = false;
    ScheduleOverWindows(false);  // the taskbar may have changed size
    Try(UpdateDockFit, L"Fitting");
}

void OnFrame() {
    g_frameNumber++;
    CheckDragging();
    auto now = std::chrono::steady_clock::now();
    float dt = std::min(std::chrono::duration<float>(now - g_lastFrame).count(), 0.1f);
    g_lastFrame = now;
    float alpha = 1.0f;  // how far toward the target this frame
    if (g_settings.animationMs > 0) alpha = 1.0f - std::exp(-dt / (g_settings.animationMs / 3000.0f));

    if (g_platesDirtyFrames > 0) {
        g_platesDirtyFrames--;
        RefreshPlates();
    }
    bool menuOpen = FollowPointerUnderTrashMenu();
    auto rowParent = g_rowParent.get();
    if (rowParent) BuildRow(rowParent);

    // ---- 1. Scale: full size under the pointer, falling off to the radius ----
    bool settled = g_platesDirtyFrames == 0 && !menuOpen;
    bool over = g_pointerOver && !g_dragging;
    std::vector<float> scales(g_row.size(), 1.0f);
    for (size_t i = 0; i < g_row.size(); i++) {
        auto& item = g_row[i];
        float d = std::fabs(g_pointerX - item.center);
        float target = 1.0f;
        if (over && d < g_size.radius) {
            float k = (std::cos(d / g_size.radius * 3.14159265f) + 1.0f) / 2.0f;
            target = 1.0f + (g_settings.scale - 1.0f) * k;
        }
        float s = item.scale + (target - item.scale) * alpha;
        if (std::fabs(target - s) < 0.001f) s = target;
        else settled = false;
        scales[i] = s;
    }

    bool expanded = over ||
                    std::any_of(scales.begin(), scales.end(), [](float s) { return s > 1.0f; });
    if (expanded != g_dockExpanded) {
        g_dockExpanded = expanded;
        ScheduleOverWindows(false);
    }

    // ---- 2. Spread ----
    // Icons are pushed right by the growth before them, then pulled left by
    // `growLeft`. As on a Mac, the end away from the pointer stays put.
    float total = 0;
    for (size_t i = 0; i < g_row.size(); i++) total += (scales[i] - 1.0f) * g_row[i].width;
    bool anchorWas = g_anchorLeftEnd;
    if (over) {
        if (!g_row.empty()) {
            auto& first = g_row.front();
            auto& last = g_row.back();
            float middle = (first.center - first.width / 2 + last.center + last.width / 2) / 2;
            g_anchorLeftEnd = g_pointerX > middle;
        }
        g_maxGrowth = std::max(g_maxGrowth, total);
    } else if (g_lastGrowth > 0) {
        g_maxGrowth *= total / g_lastGrowth;  // shrinks back keeping its shape
    } else {
        g_maxGrowth = total;
    }
    g_lastGrowth = total;
    auto growLeftFor = [&](bool leftEnd) {
        return leftEnd ? g_maxGrowth / 2 : total - g_maxGrowth / 2;
    };
    // Switching which end stays put would jump the dock by the difference, as
    // the pointer crosses its middle; the jump eases out instead.
    if (g_anchorLeftEnd != anchorWas) {
        g_growLeftEase += growLeftFor(anchorWas) - growLeftFor(g_anchorLeftEnd);
    }
    g_growLeftEase *= 1.0f - alpha;
    if (std::fabs(g_growLeftEase) < 0.05f) g_growLeftEase = 0;
    else settled = false;
    float growLeft = growLeftFor(g_anchorLeftEnd) + g_growLeftEase;

    Plate* plate = GetRowPlate(rowParent);
    std::vector<wux::FrameworkElement> dividerAfter;  // the icons dividers follow
    if (plate) {
        for (auto& d : plate->dividers) dividerAfter.push_back(d.after.get());
    }
    std::vector<float> dividerShifts(dividerAfter.size());
    float before = 0;
    for (size_t i = 0; i < g_row.size(); i++) {
        auto& item = g_row[i];
        float extra = (scales[i] - 1.0f) * item.width;
        float shift = before + extra / 2 - growLeft;
        float gapShift = before - growLeft;  // of the space just before it
        before += extra;
        auto icon = item.element.get();
        for (size_t d = 0; icon && d < dividerAfter.size(); d++) {
            if (dividerAfter[d] == icon) dividerShifts[d] = before - growLeft;
        }

        bool changed = scales[i] != item.scale || std::fabs(shift - item.shift) > 0.01f;
        if (!changed || (item.trash ? !plate : !icon)) continue;
        if (item.trash) SetTrashScale(*plate, scales[i], shift, gapShift);
        else SetScale(icon, scales[i], shift);
        item.scale = scales[i];
        item.shift = shift;
    }
    for (size_t d = 0; d < dividerShifts.size(); d++) {
        SetDividerShift(plate->dividers[d], dividerShifts[d]);
    }

    // ---- 3. The plate widens the same way ----
    for (auto& p : *g_plates) {
        bool current = rowParent && p.row.get() == rowParent;
        ApplyPlate(p, current ? growLeft : 0, current ? total : 0);
    }

    // ---- 3b. Slides: everything Windows moved eases to its new place ----
    float slideNow = NowMs();
    for (auto& b : *g_buttons) {
        if (!b.slide.Pending(slideNow)) continue;
        settled = false;
        if (auto el = b.element.get()) ReapplyButton(el);
    }
    for (auto& p : *g_plates) {
        if (p.slideLeft.Pending(slideNow) || p.slideRight.Pending(slideNow)) {
            settled = false;
            p.left = -1;  // drawn again where the slide's got to
            ApplyPlate(p, p.appliedExtraLeft, p.appliedExtra);
        }
        if (p.trash && p.slideTrash.Pending(slideNow)) {
            settled = false;
            SetTrashScale(p, p.trashScale, p.trashShift, p.trashGapShift);
        }
        for (auto& d : p.dividers) {
            if (!d.slide.Pending(slideNow)) continue;
            settled = false;
            SetDividerShift(d, d.magnified);
        }
    }

    // ---- 4. Auto-hide: the whole panel slides down ----
    float shownTarget = DockHidden() ? 0.0f : 1.0f;
    if (g_dockShown != shownTarget) {
        bool wasHidden = DockFullyHidden();
        float step = dt * 1000 / kDockSlideMs;
        g_dockShown = std::clamp(g_dockShown + (shownTarget > g_dockShown ? step : -step), 0.0f, 1.0f);
        if (DockFullyHidden() != wasHidden) ScheduleOverWindows(false);
        if (g_dockShown != shownTarget) settled = false;
    }
    float eased = g_dockShown * g_dockShown * (3 - 2 * g_dockShown);
    float hideY = std::round((1 - eased) * (g_size.bottomGap + g_size.dockHeight + 2));
    for (auto& p : *g_plates) {
        auto panel = p.panel.get();
        if (!panel || p.hideY == hideY) continue;
        SetTranslation(panel, 0, hideY);
        p.hideY = hideY;
    }

    // ---- 5. Liquid Glass follows the plate ----
    FollowGlass();

    // ---- 6. Label ----
    UpdateLabel(plate);

    if (settled) StopFrames();
}

// =============================================================================
// SYSTEM TRAY
// =============================================================================
// Kept at Windows' usual height, at the bottom of the taller taskbar. The hot
// corner slides it in from past the screen's right edge.

constexpr int kTraySlideInMs = 280;
constexpr int kTraySlideOutMs = 320;

// One per taskbar. Measured whenever its size changes, as the tray fills in
// after the mod's loaded, or grows with more icons: each taskbar window is cut
// to its tray's width (see TaskbarRegion), and a stale width cuts the tray off.
struct TrayFrame {
    winrt::weak_ref<wux::FrameworkElement> element;
    bool hidden = false;        // given no width, for Hidden
    bool corner = false;        // set up for its hot corner
    bool cornerHidden = false;  // slid out of view
    int width = 0;              // in pixels, as last measured
    SIZE island{};              // its taskbar's content, in pixels: to match it to its window
    wux::FrameworkElement::SizeChanged_revoker sizeChanged;
};

// no_destroy, like the other lists of XAML objects: its revokers would run XAML
// code after XAML has shut down when Explorer exits. ResetAll destroys it.
[[clang::no_destroy]] std::optional<std::list<TrayFrame>> g_trayFrames{std::in_place};
bool g_trayRevealed = false;

// Whether its width or its taskbar's size changed.
bool MeasureTrayFrame(wux::FrameworkElement const& el, TrayFrame& t) {
    if (g_settings.tray == Show::Hidden || el.ActualWidth() <= 0) return false;
    auto root = el.XamlRoot();
    double scale = root ? root.RasterizationScale() : 1;
    int width = (int)std::lround(el.ActualWidth() * scale);
    SIZE island{};
    if (root) {
        auto size = root.Size();
        island = {(LONG)std::lround(size.Width * scale), (LONG)std::lround(size.Height * scale)};
    }
    bool changed = width != t.width || island.cx != t.island.cx || island.cy != t.island.cy;
    t.width = width;
    t.island = island;
    return changed;
}

// The widest tray, in pixels: 0 if none's been measured.
int WidestTray() {
    int widest = 0;
    if (!g_trayFrames) return widest;
    for (auto& t : *g_trayFrames) widest = std::max(widest, t.width);
    return widest;
}

// The width of the tray on a `width` x `height` taskbar window, in pixels: the
// tray whose taskbar is that size. Taskbars the same size can't be told apart,
// so it's the widest of those, as too wide only leaves a little more of the
// window showing, while too narrow cuts the tray off; with none, the widest.
int TrayWidthFor(int width, int height) {
    int matched = 0;
    if (!g_trayFrames) return matched;
    for (auto& t : *g_trayFrames) {
        if (std::abs(t.island.cx - width) <= 2 && std::abs(t.island.cy - height) <= 2) {
            matched = std::max(matched, t.width);
        }
    }
    return matched ? matched : WidestTray();
}

bool TrayShown() {
    return g_settings.tray == Show::Visible || (g_settings.tray == Show::HotCorner && g_trayRevealed);
}

constexpr float kTrayPlateInsetX = 4;       // the background, in from the tray's items
constexpr float kTrayPlateInsetY = 4;       // and its row, less Tray Padding (see TrayOffset)
constexpr float kTrayLeftExtra = 4;         // more room on the left, where the first item
                                            // (often the ^ button) draws right to its edge

// How far the tray is moved up and left, by its row's margin: by Tray Padding,
// so as its background grows by that around the icons and clock, it keeps its
// distance (kTrayPlateInsetX and Y) from the screen's right and bottom edges.
float TrayOffset() { return (float)g_settings.trayPadding; }

// How far the tray's background reaches past its row, above and to the left.
float TrayPlateAbove() { return std::max(0.0f, g_settings.trayPadding - kTrayPlateInsetY); }
float TrayPlateLeft() {
    return std::max(0.0f, g_settings.trayPadding + kTrayLeftExtra - kTrayPlateInsetX);
}

// How far up the tray reaches from the screen's bottom edge: its row, the
// offset under it and its background past its top.
double TrayRowSpan() { return kStockTaskbarHeight + TrayOffset() + TrayPlateAbove(); }

void FixTrayRow(wux::FrameworkElement const& row) {
    Track(row, wux::FrameworkElement::HeightProperty());
    Track(row, wux::FrameworkElement::VerticalAlignmentProperty());
    Track(row, wux::FrameworkElement::MarginProperty());
    if (row.Height() != kStockTaskbarHeight) row.Height(kStockTaskbarHeight);
    if (row.VerticalAlignment() != wux::VerticalAlignment::Bottom) {
        row.VerticalAlignment(wux::VerticalAlignment::Bottom);
    }
    auto margin = row.Margin();
    if (margin.Right != TrayOffset() || margin.Bottom != TrayOffset()) {
        margin.Right = margin.Bottom = TrayOffset();
        row.Margin(margin);
    }
}

// How far past the tray's own left edge its background and shadows reach, so a
// hidden tray is slid wholly past the screen's edge.
constexpr float kTrayOffscreenMargin = 48;

// A plain slide over the screen's edge, with no fade. In: eases to a stop.
// Out: picks up speed.
void SlideTray(wux::FrameworkElement const& el, bool hidden, bool animate) {
    auto visual = wuxh::ElementCompositionPreview::GetElementVisual(el);
    wuxh::ElementCompositionPreview::SetIsTranslationEnabled(el, true);
    float x = hidden ? (float)el.ActualWidth() + TrayPlateLeft() + kTrayOffscreenMargin : 0;
    visual.StopAnimation(L"Opacity");  // as faded by earlier versions
    if (visual.Opacity() != 1) visual.Opacity(1);
    if (!animate) {
        visual.StopAnimation(L"Translation.X");
        SetTranslation(el, x);
        return;
    }
    auto compositor = visual.Compositor();
    auto slide = compositor.CreateScalarKeyFrameAnimation();
    auto ease = hidden ? compositor.CreateCubicBezierEasingFunction({0.45f, 0.0f}, {0.6f, 1.0f})
                       : compositor.CreateCubicBezierEasingFunction({0.2f, 0.9f}, {0.3f, 1.0f});
    slide.InsertKeyFrame(1.0f, x, ease);
    slide.Duration(std::chrono::milliseconds(hidden ? kTraySlideOutMs : kTraySlideInMs));
    visual.StartAnimation(L"Translation.X", slide);
}

void ResetTraySlide(wux::FrameworkElement const& el) {
    SlideTray(el, false, false);
    wuxh::ElementCompositionPreview::SetIsTranslationEnabled(el, false);
}

void ApplyTrayVisibility(wux::FrameworkElement const& el, TrayFrame& t) {
    auto show = g_settings.tray;
    auto hitTest = wux::UIElement::IsHitTestVisibleProperty();

    // Hidden for good, it's given no width rather than collapsed: collapsed,
    // it keeps its last width, and Windows keeps that much room for it, which
    // the dock should have.
    if (show == Show::Hidden) {
        t.hidden = true;
        if (el.Width() != 0) el.Width(0);
        if (el.Opacity() != 0) el.Opacity(0);
        if (el.IsHitTestVisible()) el.IsHitTestVisible(false);
    } else if (t.hidden) {
        t.hidden = false;
        PutBack(el, wux::FrameworkElement::WidthProperty());
        PutBack(el, wux::UIElement::OpacityProperty());
        PutBack(el, hitTest);
    }

    if (show == Show::HotCorner) {
        bool hide = !g_trayRevealed;
        if (!t.corner || hide != t.cornerHidden) {
            SlideTray(el, hide, t.corner);  // starts out of view without sliding
            t.corner = true;
            t.cornerHidden = hide;
        }
        if (!hide) PutBack(el, hitTest);
        else if (el.IsHitTestVisible()) el.IsHitTestVisible(false);  // clicks go through
    } else if (t.corner) {
        t.corner = false;
        ResetTraySlide(el);
        PutBack(el, hitTest);
    }

    if (!g_unloading && MeasureTrayFrame(el, t)) ScheduleOverWindows(false);  // the clip
}

void ApplyTrayFrame(wux::FrameworkElement const& el) {
    if (!g_trayFrames) return;
    for (auto& t : *g_trayFrames) {
        if (t.element.get() == el) return ApplyTrayVisibility(el, t);
    }
}

void ApplyTrayFrames() {
    if (!g_trayFrames) return;
    for (auto& t : *g_trayFrames) {
        if (auto el = t.element.get()) Try([&] { ApplyTrayVisibility(el, t); });
    }
}

void FixTrayFrame(wux::FrameworkElement const& el) {
    if (!g_trayFrames) return;
    g_trayFrames->remove_if([](TrayFrame const& t) { return !t.element.get(); });
    if (std::none_of(g_trayFrames->begin(), g_trayFrames->end(),
                     [&](TrayFrame const& t) { return t.element.get() == el; })) {
        auto& t = g_trayFrames->emplace_back();
        t.element = winrt::make_weak(el);
        t.sizeChanged = el.SizeChanged(
            winrt::auto_revoke,
            [](wf::IInspectable const& sender, wux::SizeChangedEventArgs const&) {
                if (g_unloading || !g_trayFrames) return;
                Try([&] {
                    auto el = sender.try_as<wux::FrameworkElement>();
                    for (auto& t : *g_trayFrames) {
                        if (!el || t.element.get() != el) continue;
                        if (MeasureTrayFrame(el, t)) ScheduleOverWindows(false);  // the clip
                        return;
                    }
                }, L"Tray size");
            });
        Track(el, wux::UIElement::VisibilityProperty(), ApplyTrayFrame);
        Track(el, wux::UIElement::IsHitTestVisibleProperty());
        Track(el, wux::FrameworkElement::WidthProperty(), ApplyTrayFrame);
        Track(el, wux::UIElement::OpacityProperty(), ApplyTrayFrame);
    }
    ApplyTrayFrame(el);
}

// =============================================================================
// POLLING: HOT CORNERS AND AUTO-HIDE
// =============================================================================
// The pointer is checked a dozen times a second. Neither corner fires over
// full screen apps or while dragging.

bool g_leftCornerArmed = true;
int g_trayAwayTicks = 0;

// Whether `hwnd` belongs to a menu or panel, like those the dock and tray
// open. With `popups`, an app's own pop-ups count too.
bool IsFlyout(HWND hwnd, bool popups) {
    HWND root = hwnd ? GetAncestor(hwnd, GA_ROOT) : nullptr;
    WCHAR cls[96];
    if (!root || !GetClassNameW(root, cls, ARRAYSIZE(cls))) return false;
    for (PCWSTR notFlyout : {L"Shell_TrayWnd", L"Shell_SecondaryTrayWnd", L"Progman", L"WorkerW"}) {
        if (!wcscmp(cls, notFlyout)) return false;
    }
    for (PCWSTR flyout :
         {L"#32768" /* menus */, L"Xaml_WindowedPopupClass", L"XamlExplorerHostIslandWindow",
          L"TopLevelWindowForOverflowXamlIsland", L"NotifyIconOverflowWindow",
          L"Windows.UI.Core.CoreWindow", L"ControlCenterWindow"}) {
        if (!wcscmp(cls, flyout)) return true;
    }

    DWORD pid = 0;
    GetWindowThreadProcessId(root, &pid);
    if (HANDLE process = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid)) {
        WCHAR path[MAX_PATH];
        DWORD size = ARRAYSIZE(path);
        bool shell = false;
        if (QueryFullProcessImageNameW(process, 0, path, &size)) {
            PCWSTR file = wcsrchr(path, L'\\');
            file = file ? file + 1 : path;
            shell = !_wcsicmp(file, L"ShellExperienceHost.exe") ||
                    !_wcsicmp(file, L"ShellHost.exe");
        }
        CloseHandle(process);
        if (shell) return true;
    }

    if (!popups) return false;
    LONG_PTR style = GetWindowLongPtrW(root, GWL_STYLE);
    LONG_PTR ex = GetWindowLongPtrW(root, GWL_EXSTYLE);
    return (ex & WS_EX_TOPMOST) && (style & WS_POPUP) && !(style & WS_CAPTION);
}


void UpdatePolling() {
    HWND w = EnsureModWindow();
    if (!w) return;
    auto& s = g_settings;
    bool autoHide = s.autoHide != AutoHide::Off;
    if (!g_unloading &&
        (s.leftCorner != LeftCorner::Off || s.tray == Show::HotCorner || autoHide)) {
        SetTimer(w, kPollTimer, 80, nullptr);
    } else {
        KillTimer(w, kPollTimer);
    }
    if (s.tray != Show::HotCorner && g_trayRevealed) {
        g_trayRevealed = false;
        ApplyTrayFrames();
    }
    if (!autoHide) g_dockRevealed = false;  // starts hidden when turned on
    bool hybrid = s.autoHide == AutoHide::Hybrid && !g_unloading;
    if (!hybrid) g_windowMaximized = false;
    WatchWindows(hybrid);
    if (hybrid) ScheduleMaximizedCheck();  // as things are now, at the new dock size
    WatchWindowDrops(hybrid);
    WatchTaskView(!g_unloading);
}

// Windows drops keypresses we send while an administrator window is in front.
bool AdminWindowInFront() {
    DWORD pid = 0;
    GetWindowThreadProcessId(GetForegroundWindow(), &pid);
    HANDLE process = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
    if (!process) return false;
    bool elevated = true;  // a token we can't read is above us too
    HANDLE token;
    if (OpenProcessToken(process, TOKEN_QUERY, &token)) {
        TOKEN_ELEVATION elevation;
        DWORD size;
        elevated = GetTokenInformation(token, TokenElevation, &elevation, sizeof(elevation), &size) &&
                   elevation.TokenIsElevated;
        CloseHandle(token);
    }
    CloseHandle(process);
    return elevated;
}

// Presses the keys in order, then lets go of them in reverse.
bool PressKeys(std::initializer_list<WORD> held) {
    std::vector<INPUT> keys;
    for (WORD key : held) keys.push_back({INPUT_KEYBOARD, {.ki = {key}}});
    for (auto key = std::rbegin(held); key != std::rend(held); ++key)
        keys.push_back({INPUT_KEYBOARD, {.ki = {*key, 0, KEYEVENTF_KEYUP}}});
    return SendInput((UINT)keys.size(), keys.data(), sizeof(INPUT)) == keys.size();
}

// The Windows key gives Start the focus. When it can't be pressed, the taskbar is asked.
void OpenStart() {
    if (!AdminWindowInFront() && PressKeys({VK_LWIN})) return;
    if (HWND tb = FindTaskbar()) PostMessage(tb, WM_SYSCOMMAND, SC_TASKLIST, 0);
}

// Windows key + Tab, or Task View's own shortcut when the keys can't be pressed.
void OpenTaskView() {
    if (!AdminWindowInFront() && PressKeys({VK_LWIN, VK_TAB})) return;
    ShellExecuteW(nullptr, nullptr, L"explorer.exe", L"shell:::{3080F90E-D7AD-11D9-BD98-0000947B0257}",
                  nullptr, SW_SHOWNORMAL);
}

// Whether an app is full screen on `monitor`, whose bounds are `m`, as games
// and videos are. Windows' own answer (SHQueryUserNotificationState) can stay
// "full screen" after an exclusive full screen game is minimized or switched
// away from, which left the corners and the hidden dock blocked over the
// desktop until the game closed. So it's trusted only for presentation mode;
// otherwise it's the window in front, without a title bar (unlike a maximized
// one), covering the whole screen.
bool FullScreenAppOn(HMONITOR monitor, RECT const& m) {
    QUERY_USER_NOTIFICATION_STATE state;
    if (SUCCEEDED(SHQueryUserNotificationState(&state)) && state == QUNS_PRESENTATION_MODE) {
        return true;
    }
    HWND w = GetForegroundWindow();
    if (!w || !IsAppWindow(w) || MonitorFromWindow(w, MONITOR_DEFAULTTONULL) != monitor) {
        return false;  // none, minimized, the desktop or the shell's, or on another screen
    }
    if ((GetWindowLongPtr(w, GWL_STYLE) & WS_CAPTION) == WS_CAPTION) return false;
    RECT r;
    return GetWindowRect(w, &r) && r.left <= m.left && r.top <= m.top && r.right >= m.right &&
           r.bottom >= m.bottom;
}

void OnPollTimer() {
    POINT p;
    if (g_unloading || !GetCursorPos(&p)) return;
    HMONITOR monitor = MonitorFromPoint(p, MONITOR_DEFAULTTONEAREST);
    MONITORINFO mi{sizeof(mi)};
    if (!GetMonitorInfo(monitor, &mi)) return;
    RECT const& m = mi.rcMonitor;
    UINT dpiX = 96, dpiY = 96;
    GetDpiForMonitor(monitor, MDT_EFFECTIVE_DPI, &dpiX, &dpiY);
    float scale = dpiY / 96.0f;

    constexpr int edge = 2;
    bool bottom = p.y >= m.bottom - 1 - edge;
    bool inLeft = bottom && p.x <= m.left + edge;
    bool inRight = bottom && p.x >= m.right - 1 - edge;
    bool held = (GetAsyncKeyState(VK_LBUTTON) | GetAsyncKeyState(VK_RBUTTON)) & 0x8000;
    // Only asked at the bottom edge, the only place the answer is used (the
    // corners, and revealing a hidden dock), rather than on every poll.
    bool fullscreen = bottom && FullScreenAppOn(monitor, m);
    bool blocked = held || fullscreen;

    if (g_settings.leftCorner != LeftCorner::Off) {
        int away = (int)(40 * scale);
        if (inLeft && g_leftCornerArmed && !blocked) {
            g_leftCornerArmed = false;
            if (g_settings.leftCorner == LeftCorner::Start) OpenStart();
            else OpenTaskView();
        } else if (p.x > m.left + away || p.y < m.bottom - away) {
            g_leftCornerArmed = true;  // once it's left the corner
        }
    }

    if (g_settings.tray == Show::HotCorner) {
        int zoneW = std::max(WidestTray(), (int)(200 * scale)) +
                    (int)((TrayPlateLeft() + 16) * scale);
        int zoneH = (int)((TrayRowSpan() + 8) * scale);
        bool overTray = p.x >= m.right - zoneW && p.y >= m.bottom - zoneH;
        bool reveal = g_trayRevealed;
        if (inRight && !blocked) {
            reveal = true;
            g_trayAwayTicks = 0;
        } else if (g_trayRevealed) {
            if (overTray || IsFlyout(WindowFromPoint(p), true)) g_trayAwayTicks = 0;
            else if (++g_trayAwayTicks >= 6) reveal = false;  // about half a second
        }
        if (reveal != g_trayRevealed) {
            g_trayRevealed = reveal;
            ApplyTrayFrames();
            if (reveal) GlassTrayRevealed();  // its glass, fresh, before it slides in
            // The window's clip follows the tray, once it's slid out of view.
            if (reveal) ScheduleOverWindows(false);
            else if (HWND w = g_modWindow) SetTimer(w, kTrayClipTimer, kTraySlideOutMs, nullptr);
        }
    }

    if (g_settings.autoHide != AutoHide::Off) UpdateAutoHide(p, m, dpiY, held, fullscreen);
}

// =============================================================================
// SCANNING
// =============================================================================
// The hooks report each taskbar (one per monitor), whose tree is then walked.

std::vector<winrt::weak_ref<wux::FrameworkElement>> g_frames;
int g_reapplyCount = 0;

// ---- Keeping icons still ----
// Windows bounces an app's icon as its windows open, close, minimize or are
// restored, moving it by its Translation (as noted in "Vertical Taskbar for
// Windows 11"). With "Keep Icons Still", the icon's Translation animation is
// taken away, and for a moment after each change to a button, every app icon
// is held in place each frame: any animation of its Translation stopped, and
// its Translation put back to none.

constexpr auto kHoldIconsFor = std::chrono::milliseconds(1500);

struct StillIcon {
    winrt::weak_ref<wux::UIElement> icon;
    wux::Vector3Transition original{nullptr};  // its Translation animation, to put back
    bool cleared = false;
};

[[clang::no_destroy]] std::optional<std::list<StillIcon>> g_stillIcons{std::in_place};
winrt::event_token g_holdToken{};
bool g_holdingIcons = false;
std::chrono::steady_clock::time_point g_holdIconsUntil;
// Each way of holding an icon is given up for good once Windows refuses it, so
// a refusal isn't repeated (and logged) every frame.
bool g_iconTranslationUsable = true;
bool g_iconVisualsUsable = true;

void HoldIcon(StillIcon& s, wux::UIElement const& icon) {
    if (!g_iconTranslationUsable) return;
    try {
        if (auto transition = icon.TranslationTransition()) {
            if (!s.cleared) {
                s.original = transition;
                s.cleared = true;
            }
            icon.TranslationTransition(nullptr);
        }
    } catch (...) {
        g_iconTranslationUsable = false;
        Wh_Log(L"Keep Icons Still: the icon's Translation can't be used");
        return;
    }
    if (g_iconVisualsUsable) {
        try {
            wuxh::ElementCompositionPreview::GetElementVisual(icon).StopAnimation(L"Translation");
        } catch (...) {
            g_iconVisualsUsable = false;
        }
    }
    // Set even when it reads as none, as a stopped animation can leave the icon
    // where it was: a different value first makes sure none is applied.
    try {
        icon.Translation({0, 0.01f, 0});
        icon.Translation({0, 0, 0});
    } catch (...) {
        g_iconTranslationUsable = false;
        Wh_Log(L"Keep Icons Still: the icon's Translation can't be set");
    }
}

void StopHoldingIcons() {
    if (!g_holdingIcons) return;
    wuxm::CompositionTarget::Rendering(g_holdToken);
    g_holdingIcons = false;
}

// Each frame for a moment, from now.
void HoldIconsAWhile() {
    if (!g_settings.keepIconsStill || g_unloading || g_stillIcons->empty()) return;
    g_holdIconsUntil = std::chrono::steady_clock::now() + kHoldIconsFor;
    if (g_holdingIcons) return;
    g_holdToken = wuxm::CompositionTarget::Rendering([](wf::IInspectable const&,
                                                        wf::IInspectable const&) {
        if (g_unloading || std::chrono::steady_clock::now() > g_holdIconsUntil) {
            return StopHoldingIcons();
        }
        for (auto& s : *g_stillIcons) {
            if (auto icon = s.icon.get()) Try([&] { HoldIcon(s, icon); }, L"Keep icons still");
        }
    });
    g_holdingIcons = true;
}

// An app's icon (Icon, or DefaultIcon for some apps).
void KeepIconStill(wux::FrameworkElement const& el, wux::FrameworkElement const& button) {
    if (!g_settings.keepIconsStill || !IsAppButton(button)) return;
    g_stillIcons->remove_if([](StillIcon const& s) { return !s.icon.get(); });
    for (auto& s : *g_stillIcons) {
        if (s.icon.get() == el) return HoldIcon(s, el);
    }
    auto& s = g_stillIcons->emplace_back();
    s.icon = winrt::make_weak<wux::UIElement>(el);
    HoldIcon(s, el);
}

// Their Translation animations back.
void ReleaseStillIcons() {
    StopHoldingIcons();
    for (auto& s : *g_stillIcons) {
        auto icon = s.icon.get();
        if (icon && s.cleared) Try([&] { icon.TranslationTransition(s.original); });
    }
    g_stillIcons->clear();
}

// ---- Windows' own slide ----
// Windows animates each button to its new place itself, which the dock can't
// see, so the dock's slide (see Sliding) would move it twice. While the mod's
// loaded and sliding, Windows' is taken off: an implicit animation of the
// button's visual's Offset, or a RepositionThemeTransition among its
// Transitions. Its other animations (appearing, the launch bounce) stay.

struct TakenSlide {
    winrt::weak_ref<wux::FrameworkElement> button;
    wuc::ImplicitAnimationCollection original{nullptr};  // put back on unloading
};
[[clang::no_destroy]] std::optional<std::list<TakenSlide>> g_takenSlides{std::in_place};
bool g_loggedButtonAnimations = false;  // [slide] logging, to be removed

void TakeWindowsSlide(wux::FrameworkElement const& button) {
    if (SlideMs() <= 0 || !g_takenSlides) return;  // the dock doesn't slide: Windows' stays
    auto visual = wuxh::ElementCompositionPreview::GetElementVisual(button);
    auto implicit = visual.ImplicitAnimations();
    auto transitions = button.Transitions();

    if (!g_loggedButtonAnimations) {  // [slide] logging, to be removed
        g_loggedButtonAnimations = true;
        auto describe = [](wux::UIElement const& el, PCWSTR what) {
            if (!el) return;
            std::wstring keys, kinds;
            auto v = wuxh::ElementCompositionPreview::GetElementVisual(el);
            if (auto i = v.ImplicitAnimations()) {
                for (auto const& pair : i) keys += std::wstring(pair.Key()) + L" ";
            }
            if (auto t = el.Transitions()) {
                for (auto const& x : t) kinds += std::wstring(winrt::get_class_name(x)) + L" ";
            }
            std::wstring children;
            if (auto panel = el.try_as<wuxc::Panel>()) {
                if (auto t = panel.ChildrenTransitions()) {
                    for (auto const& x : t) children += std::wstring(winrt::get_class_name(x)) + L" ";
                }
            }
            Wh_Log(L"[slide] Windows' animations on %s (%s): implicit [ %s], transitions [ %s], "
                   L"children's transitions [ %s]",
                   what, winrt::get_class_name(el).c_str(), keys.c_str(), kinds.c_str(),
                   children.c_str());
        };
        describe(button, L"a button");
        if (wuxm::VisualTreeHelper::GetChildrenCount(button) > 0) {
            describe(wuxm::VisualTreeHelper::GetChild(button, 0).try_as<wux::UIElement>(),
                     L"its template's root");
        }
        describe(wuxm::VisualTreeHelper::GetParent(button).try_as<wux::UIElement>(),
                 L"the icons' row");
    }

    if (implicit && implicit.HasKey(L"Offset")) {
        bool known = false;
        for (auto& t : *g_takenSlides) known = known || t.button.get() == button;
        if (!known) g_takenSlides->push_back({winrt::make_weak(button), implicit});
        auto without = visual.Compositor().CreateImplicitAnimationCollection();
        for (auto const& pair : implicit) {
            if (pair.Key() != L"Offset") without.Insert(pair.Key(), pair.Value());
        }
        visual.ImplicitAnimations(without);
    }

    if (transitions) {
        bool reposition = false;
        for (auto const& t : transitions) {
            reposition = reposition || t.try_as<wuxma::RepositionThemeTransition>();
        }
        if (reposition) {
            Track(button, wux::UIElement::TransitionsProperty());  // put back on unloading
            wuxma::TransitionCollection without;
            for (auto const& t : transitions) {
                if (!t.try_as<wuxma::RepositionThemeTransition>()) without.Append(t);
            }
            button.Transitions(without);
        }
    }
}

void GiveBackWindowsSlides() {
    if (!g_takenSlides) return;
    for (auto& t : *g_takenSlides) {
        if (auto button = t.button.get()) Try([&] {
            wuxh::ElementCompositionPreview::GetElementVisual(button).ImplicitAnimations(t.original);
        });
    }
    g_takenSlides.reset();
}

// Everything the mod changes in one button. Safe to call again.
void ProcessButton(wux::FrameworkElement const& button) {
    UpdateStartHidden(button);
    Button& b = TrackButton(button);
    ApplySpacing(button);
    ApplyButtonWidth(b, button);
    ApplyHitClip(button);
    ApplyIconColumn(b);
    HideStockToolTip(button);
    Try([&] { TakeWindowsSlide(button); }, L"Windows' slide");
    ForEachDescendant(button, 6, [&](wux::FrameworkElement const& el) {
        auto name = el.Name();
        if (name == L"Icon") {
            TrackIconImage(el);
            UpdateAppIcon(el, button);
            UpdateStartLogo(el, button);
            KeepIconStill(el, button);
        } else if (name == L"DefaultIcon") {
            TrackIconImage(el);  // shown in place of Icon for some apps
            KeepIconStill(el, button);
        } else if (name == L"OverlayIcon") {
            TrackOverlayIcon(el);
        } else if (name == L"RunningIndicator") {
            TrackIndicator(el, button);
        } else if (name == L"ProgressIndicator") {
            TrackProgress(el, button);
        } else if ((name == L"BackgroundElement" || name == L"MultiWindowElement") &&
                   el.try_as<wuxc::Border>()) {
            HideHighlight(el);
        }
        return true;
    });
}

void HookTaskView();

void NoteTaskbarFrame(wux::FrameworkElement const& frame) {
    if (!frame) return;
    for (auto& f : g_frames) {
        if (f.get() == frame) return;
    }
    g_frames.push_back(winrt::make_weak(frame));
    MarkPlatesDirty();
    ScheduleOverWindows(true);
    UpdatePolling();
    HookTaskView();
    UpdateGlass();

    // While Windows starts, Explorer can leave the taskbar behind windows.
    // Applying auto-hide and the app bars again over the next seconds fixes it.
    static bool reapplying = false;
    if (!reapplying) {
        if (HWND w = EnsureModWindow()) reapplying = SetTimer(w, kReapplyTimer, 4000, nullptr);
    }
}

// ---- Tray: background ----
// Behind the tray's icons and clock, on a layer at the back of its row: a
// background like the dock's, through which what's behind the tray shows no
// brighter than Brightness Limit (or, under dark text, no darker than its
// opposite) while Cap Per-Pixel Brightness is on, so the text stays readable;
// and, with Text and Icon Shadow on, a shadow under each item. The row is a
// grid on older builds and a stack on newer ones (since 26200.9457), where the
// layer is an item of its own at the end, with no size: so it's a canvas, and
// what's on it is placed from where the tray's items are.

constexpr float kTrayPlateRadius = 0.3f;    // of its height, as the dock's

// One of the tray's items (the ^ button and its icons, the system icons, the
// clock), on the layer.
struct TrayItem {
    wux::FrameworkElement element{nullptr};
    wf::Rect rect;
};

// A shadow under one item: a sprite whose drop shadow is masked by a live copy
// of the item as drawn (a visual surface), so it follows the item's own shapes
// and changes with it, like the clock's time.
struct TrayItemShadow {
    winrt::weak_ref<wux::FrameworkElement> item;
    wuc::SpriteVisual sprite{nullptr};
    wuc::CompositionVisualSurface surface{nullptr};
    wf::Rect rect{0, 0, -1, -1};  // in the shadow host, as last placed
};

struct TrayDecor {
    winrt::weak_ref<wuxc::Panel> grid;             // SystemTrayFrameGrid, a grid or a stack
    winrt::weak_ref<wux::FrameworkElement> frame;  // its parent, in Windows' theme
    Surface surface;                               // on the layer
    wf::Rect surfaceRect{0, 0, -1, -1};            // on the layer, as last placed
    wuxc::Canvas layer{nullptr};
    wux::FrameworkElement::LayoutUpdated_revoker layoutUpdated;

    // Shadows, on the layer over the background, around the items.
    wuxc::Canvas shadowHost{nullptr};              // none with Text and Icon Shadow off
    wuc::ContainerVisual shadows{nullptr};
    std::vector<TrayItemShadow> itemShadows;
    wf::Rect shadowBounds{0, 0, -1, -1};           // the host on the layer, as last placed

    GlassPlate glass;  // while it matches the dock (see LIQUID GLASS: DOCKS AND TRAYS)
};

[[clang::no_destroy]] std::optional<std::list<TrayDecor>> g_trayDecor{std::in_place};

// Whether the tray's text is light, by Windows' theme.
bool TrayTextLight(TrayDecor const& t) { return !SystemIsLight(t.frame.get()); }

// Brightness Limit, with Cap Per-Pixel Brightness on, for the tray's text.
ToneLimit TrayTone(TrayDecor const& t) {
    return ToneFor(g_settings.trayBrightnessLimit, TrayTextLight(t));
}

// ---- Tray: shadow ----

// Dark under light text and light under dark, unless a color's set.
Color TrayShadowColor(TrayDecor const& t) {
    auto& s = g_settings;
    if (!s.trayShadowAuto) {
        auto [r, g, b] = s.trayShadowColor;
        return Color{255, r, g, b};
    }
    return TrayTextLight(t) ? Color{255, 0, 0, 0} : Color{255, 0xFF, 0xFF, 0xFF};
}

void StyleTrayShadow(TrayDecor const& t, wuc::DropShadow const& shadow) {
    auto& s = g_settings;
    shadow.Color(TrayShadowColor(t));
    shadow.Opacity(s.trayShadowOpacity);
    shadow.BlurRadius(s.trayShadowBlur);
    shadow.Offset({s.trayShadowX, s.trayShadowY, 0});
}

// In a new color, as Windows' theme changes.
void RestyleTrayShadows(TrayDecor& t) {
    for (auto& item : t.itemShadows) {
        auto shadow = item.sprite ? item.sprite.Shadow().try_as<wuc::DropShadow>() : nullptr;
        if (shadow) StyleTrayShadow(t, shadow);
    }
}

void RemoveTrayShadow(TrayDecor& t, TrayItemShadow& item) {
    Try([&] {
        if (t.shadows && item.sprite) t.shadows.Children().Remove(item.sprite);
        if (item.surface) item.surface.SourceVisual(nullptr);
    });
    item.sprite = nullptr;
    item.surface = nullptr;
}

void RemoveTrayShadows(TrayDecor& t) {
    for (auto& item : t.itemShadows) RemoveTrayShadow(t, item);
    t.itemShadows.clear();
    if (t.shadowHost) {
        Try([&] { wuxh::ElementCompositionPreview::SetElementChildVisual(t.shadowHost, nullptr); });
    }
    t.shadows = nullptr;
    t.shadowBounds = {0, 0, -1, -1};
}

// A shadow under each of `items`, in a host over `bounds`, all on the layer.
// Items that are gone lose theirs.
void PlaceTrayShadows(TrayDecor& t, std::vector<TrayItem> const& items, wf::Rect bounds) {
    if (!t.shadowHost) return;
    if (!t.shadows) {
        auto compositor =
            wuxh::ElementCompositionPreview::GetElementVisual(t.shadowHost).Compositor();
        t.shadows = compositor.CreateContainerVisual();
        wuxh::ElementCompositionPreview::SetElementChildVisual(t.shadowHost, t.shadows);
    }
    std::erase_if(t.itemShadows, [&](TrayItemShadow& shadow) {
        auto el = shadow.item.get();
        bool kept = el && std::any_of(items.begin(), items.end(),
                                      [&](TrayItem const& item) { return item.element == el; });
        if (!kept) RemoveTrayShadow(t, shadow);
        return !kept;
    });
    if (items.empty() || bounds.Width <= 0 || bounds.Height <= 0) return;

    auto moved = [](float a, float b) { return std::fabs(a - b) > 0.25f; };
    auto& was = t.shadowBounds;
    if (moved(bounds.X, was.X) || moved(bounds.Y, was.Y)) {
        wuxc::Canvas::SetLeft(t.shadowHost, bounds.X);
        wuxc::Canvas::SetTop(t.shadowHost, bounds.Y);
    }
    if (moved(bounds.Width, was.Width) || moved(bounds.Height, was.Height)) {
        t.shadowHost.Width(bounds.Width);
        t.shadowHost.Height(bounds.Height);
    }
    was = bounds;

    auto compositor = t.shadows.Compositor();
    for (auto& item : items) {
        auto found = std::find_if(t.itemShadows.begin(), t.itemShadows.end(),
                                  [&](TrayItemShadow const& shadow) {
                                      return shadow.item.get() == item.element;
                                  });
        TrayItemShadow* shadow = found != t.itemShadows.end() ? &*found : nullptr;
        if (!shadow) {
            auto& added = t.itemShadows.emplace_back();
            added.item = winrt::make_weak(item.element);
            added.surface = compositor.CreateVisualSurface();
            added.surface.SourceVisual(
                wuxh::ElementCompositionPreview::GetElementVisual(item.element));
            auto mask = compositor.CreateSurfaceBrush(added.surface);
            mask.Stretch(wuc::CompositionStretch::None);  // 1:1, from the top left
            mask.HorizontalAlignmentRatio(0);
            mask.VerticalAlignmentRatio(0);
            auto drop = compositor.CreateDropShadow();
            drop.Mask(mask);
            StyleTrayShadow(t, drop);
            added.sprite = compositor.CreateSpriteVisual();
            added.sprite.Shadow(drop);
            t.shadows.Children().InsertAtTop(added.sprite);
            shadow = &added;
        }
        wf::Rect at{item.rect.X - bounds.X, item.rect.Y - bounds.Y, item.rect.Width,
                    item.rect.Height};
        auto& last = shadow->rect;
        if (moved(at.X, last.X) || moved(at.Y, last.Y)) shadow->sprite.Offset({at.X, at.Y, 0});
        if (moved(at.Width, last.Width) || moved(at.Height, last.Height)) {
            shadow->sprite.Size({at.Width, at.Height});
            shadow->surface.SourceSize({at.Width, at.Height});
        }
        last = at;
    }
}

void ShapeTraySurface(TrayDecor& t) {
    float w = t.surfaceRect.Width, h = t.surfaceRect.Height;
    if (!t.surface.root || w <= 0 || h <= 0) return;
    // Matching the dock, its glows are as deep as the dock's; otherwise they're
    // in proportion to its own height.
    float reference = g_settings.trayMatchDock ? g_size.dockHeight : h;
    ShapeSurface(t.surface, TrayLook(), w, h, h * kTrayPlateRadius, reference);
}

// Around the tray's items, inset from its row's top and bottom. Placed again
// as they move or resize, and reshaped when its size changes. Their shadows
// follow them.
void PlaceTraySurface(TrayDecor& t, wuxc::Panel const& grid) {
    auto& root = t.surface.root;
    if (!root) return;
    constexpr float kMax = std::numeric_limits<float>::max();
    float left = kMax, right = -kMax, top = kMax, bottom = -kMax;
    std::vector<TrayItem> items;
    for (auto const& child : grid.Children()) {
        auto el = child.try_as<wux::FrameworkElement>();
        if (!el || el == t.layer || el.Visibility() != Visibility::Visible ||
            el.ActualWidth() <= 0 || el.ActualHeight() <= 0) {
            continue;
        }
        auto at = el.TransformToVisual(t.layer).TransformPoint({0, 0});
        float w = (float)el.ActualWidth(), h = (float)el.ActualHeight();
        items.push_back({el, {at.X, at.Y, w, h}});
        left = std::min(left, at.X);
        right = std::max(right, at.X + w);
        top = std::min(top, at.Y);
        bottom = std::max(bottom, at.Y + h);
    }
    Try([&] { PlaceTrayShadows(t, items, {left, top, right - left, bottom - top}); },
        L"Tray shadow");
    auto row = grid.TransformToVisual(t.layer).TransformPoint({0, 0});
    float padding = (float)g_settings.trayPadding;
    float insetX = kTrayPlateInsetX - padding, insetY = kTrayPlateInsetY - padding;
    wf::Rect rect{left + insetX - kTrayLeftExtra, row.Y + insetY,
                  right - left - 2 * insetX + kTrayLeftExtra,
                  (float)grid.ActualHeight() - 2 * insetY};
    if (left > right || rect.Width <= 0 || rect.Height <= 0) {
        if (root.Visibility() != Visibility::Collapsed) root.Visibility(Visibility::Collapsed);
        return;
    }
    if (root.Visibility() != Visibility::Visible) root.Visibility(Visibility::Visible);
    auto& was = t.surfaceRect;
    auto moved = [](float a, float b) { return std::fabs(a - b) > 0.25f; };
    if (moved(rect.X, was.X) || moved(rect.Y, was.Y)) {
        wuxc::Canvas::SetLeft(root, rect.X);
        wuxc::Canvas::SetTop(root, rect.Y);
    }
    bool resized = moved(rect.Width, was.Width) || moved(rect.Height, was.Height);
    if (resized) {
        root.Width(rect.Width);
        root.Height(rect.Height);
    }
    was = rect;
    if (resized) ShapeTraySurface(t);
}

void ApplyTrayLook(TrayDecor& t) {
    if (!t.surface.root) return;
    t.glass.dirty = true;  // its brightness limit may have changed with the theme
    auto& look = TrayLook();
    bool light;
    Color fill = LookFill(look, SystemIsLight(t.frame.get()), light);
    ApplySurfaceLook(t.surface, look, fill, light, TrayTone(t));
    ShapeTraySurface(t);
    RestyleTrayShadows(t);
}

void ApplyTrayLooks() {
    if (!g_trayDecor) return;
    for (auto& t : *g_trayDecor) Try([&] { ApplyTrayLook(t); }, L"Tray background");
}

// The room the tray takes at the right of the taskbar showing `root`: what
// Windows lays out for it, or, with `background`, its background and that's
// gap from the screen's edge, if more. None without a tray.
float TrayRoomFor(wux::XamlRoot const& root, bool background) {
    float room = 0;
    for (auto& t : *g_trayDecor) {
        auto frame = t.frame.get();
        if (!frame || frame.XamlRoot() != root) continue;
        float width = (float)frame.ActualWidth();
        if (background && t.surfaceRect.Width > 0) {
            width = std::max(width, t.surfaceRect.Width + kTrayPlateInsetX);
        }
        room = std::max(room, width);
    }
    return room;
}

// The dock at the largest size every taskbar has room for (see FITTING).
void UpdateDockFit() {
    if (!g_plates || g_unloading || g_dragging) return;
    float fit = g_fullIcon;
    bool measured = false;
    for (auto& p : *g_plates) {
        if (p.fitIcon <= 0) continue;
        fit = std::min(fit, p.fitIcon);
        measured = true;
    }
    if (!measured) return;
    float want = fit < g_fullIcon ? fit : 0;
    if (want == g_fitIcon) return;
    // Bigger only once an app that's closed has gone, and the gap's closed:
    // its icons growing as it slides away would look wrong.
    float shown = g_fitIcon > 0 ? g_fitIcon : g_fullIcon;
    if (fit > shown && NowMs() < g_closeHoldUntil + SlideMs()) {
        MarkPlatesDirty();  // looked at again next frame
        return;
    }
    g_fitIcon = want;
    ComputeSizes();
    if (want) Wh_Log(L"The dock shrinks to fit: icons %.0f px, of %.0f", want, g_fullIcon);
    else Wh_Log(L"The dock fits at full size again");

    // Changed in place, not taken down and built again as saving the settings
    // does, so nothing flickers: the buttons, the bin and dividers resize, and
    // the plates are measured and shaped again (see MeasurePlate).
    Try(RemoveStartIcons);
    g_finderIconSource.reset();  // drawn again at the new size
    g_appIconSources.clear();
    SettleIconsAgain();
    Try(ReleaseStillIcons);
    for (auto& b : *g_buttons) {
        if (auto el = b.element.get()) Try([&] { ProcessButton(el); });
    }
    MarkPlatesDirty();
    ApplyTrayLooks();  // its glows are sized by the dock's height
}

// ---- Opening the tray's menus ----
// Quick Settings' and the clock's buttons (OmniButtons) open their menus only
// when one of their icons is clicked: the few pixels Windows leaves between and
// around the icons light up as the pointer passes, but a click there does
// nothing. So each of those icons gets a clear area of the mod's behind it,
// which catches clicks across the gaps: to its button's edges, up over the
// tray's background, and down to the screen's edge, and for the clock, right
// to the screen's edge. Icons in one button open the same menu, so where the
// areas overlap doesn't matter. Nothing moves: the areas take no room.

constexpr wchar_t kTrayHitAreaName[] = L"MacStyleDockHitArea";

struct TrayHitArea {
    winrt::weak_ref<wuxc::Panel> panel;  // the icon's own grid
    wuxc::Border area{nullptr};
};
[[clang::no_destroy]] std::optional<std::list<TrayHitArea>> g_trayHitAreas{std::in_place};

bool IsOmniButton(wux::DependencyObject const& el) {
    return el && winrt::get_class_name(el) == L"SystemTray.OmniButton";
}

bool SameThickness(wux::Thickness a, wux::Thickness b) {
    return std::abs(a.Left - b.Left) < 0.5 && std::abs(a.Top - b.Top) < 0.5 &&
           std::abs(a.Right - b.Right) < 0.5 && std::abs(a.Bottom - b.Bottom) < 0.5;
}

// The icon's area, reaching `reach` past it on each side.
void EnsureTrayHitArea(wux::FrameworkElement const& icon, wux::Thickness reach) {
    if (wuxm::VisualTreeHelper::GetChildrenCount(icon) < 1) return;
    auto grid = wuxm::VisualTreeHelper::GetChild(icon, 0).try_as<wuxc::Grid>();
    if (!grid) return;
    wux::Thickness margin{-reach.Left, -reach.Top, -reach.Right, -reach.Bottom};
    for (auto const& child : grid.Children()) {
        auto el = child.try_as<wuxc::Border>();
        if (!el || el.Name() != kTrayHitAreaName) continue;
        if (!SameThickness(el.Margin(), margin)) el.Margin(margin);
        return;
    }
    wuxc::Border area;
    area.Name(kTrayHitAreaName);
    area.Background(wuxm::SolidColorBrush(Color{0, 0, 0, 0}));  // clear, but catches clicks
    area.Margin(margin);
    wuxc::Grid::SetRowSpan(area, 100);
    wuxc::Grid::SetColumnSpan(area, 100);
    grid.Children().InsertAt(0, area);  // behind the icon
    g_trayHitAreas->remove_if([](TrayHitArea const& h) { return !h.panel.get(); });
    g_trayHitAreas->push_back({winrt::make_weak<wuxc::Panel>(grid), area});
}

// For the icons in the menus' buttons in the tray's row of items, `row`,
// whose frame is `frame`. Kept up as the tray's laid out again.
void EnsureTrayHitAreas(wux::FrameworkElement const& row, wux::FrameworkElement const& frame) {
    if (!g_trayHitAreas || g_unloading) return;
    std::vector<wux::FrameworkElement> buttons;
    ForEachDescendant(row, 1, [&](wux::FrameworkElement const& el) {
        if (IsOmniButton(el) && el.Visibility() == Visibility::Visible) buttons.push_back(el);
        return false;
    });
    if (buttons.empty()) return;
    auto rectOf = [&](wux::FrameworkElement const& el) {
        return el.TransformToVisual(frame).TransformBounds(
            {0, 0, (float)el.ActualWidth(), (float)el.ActualHeight()});
    };
    // The rightmost button's last icon reaches the screen's right edge.
    float rightmost = 0;
    for (auto const& b : buttons) {
        auto r = rectOf(b);
        rightmost = std::max(rightmost, r.X + r.Width);
    }
    float plateTop = rectOf(row).Y - TrayPlateAbove();
    float bottom = (float)frame.ActualHeight();
    for (auto const& button : buttons) {
        auto b = rectOf(button);
        std::vector<std::pair<wux::FrameworkElement, wf::Rect>> icons;
        ForEachDescendant(button, 8, [&](wux::FrameworkElement const& el) {
            if (winrt::get_class_name(el) != L"SystemTray.IconView") return true;
            if (el.Visibility() == Visibility::Visible && el.ActualWidth() > 0) {
                icons.push_back({el, rectOf(el)});
            }
            return false;
        });
        std::sort(icons.begin(), icons.end(),
                  [](auto const& a, auto const& c) { return a.second.X < c.second.X; });
        for (size_t i = 0; i < icons.size(); i++) {
            auto const& r = icons[i].second;
            float left = i ? icons[i - 1].second.X + icons[i - 1].second.Width : b.X;
            float right = i + 1 < icons.size() ? icons[i + 1].second.X : b.X + b.Width;
            if (i + 1 == icons.size() && b.X + b.Width >= rightmost - 0.5f) {
                right = (float)frame.ActualWidth();
            }
            wux::Thickness reach{std::max(0.0f, r.X - left), std::max(0.0f, r.Y - plateTop),
                                 std::max(0.0f, right - (r.X + r.Width)),
                                 std::max(0.0f, bottom - (r.Y + r.Height))};
            EnsureTrayHitArea(icons[i].first, reach);
        }
    }
}

// Before unloading.
void RemoveTrayHitAreas() {
    if (!g_trayHitAreas) return;
    for (auto const& h : *g_trayHitAreas) {
        auto panel = h.panel.get();
        uint32_t index;
        if (panel && h.area) Try([&] {
            if (panel.Children().IndexOf(h.area, index)) panel.Children().RemoveAt(index);
        });
    }
    g_trayHitAreas->clear();
}

// ---- Adding and removing ----

void AddTrayDecor(wux::FrameworkElement const& row) {
    auto grid = row.try_as<wuxc::Panel>();
    if (!grid || !g_trayDecor) return;
    g_trayDecor->remove_if([](TrayDecor const& t) { return !t.grid.get(); });
    for (auto& t : *g_trayDecor) {
        if (t.grid.get() == grid) return;
    }

    auto& t = g_trayDecor->emplace_back();
    t.grid = winrt::make_weak(grid);
    t.frame = winrt::make_weak(
        wuxm::VisualTreeHelper::GetParent(grid).try_as<wux::FrameworkElement>());

    // Behind everything else in the tray.
    t.layer = wuxc::Canvas();
    t.layer.IsHitTestVisible(false);
    wuxc::Canvas::SetZIndex(t.layer, -1000);
    if (auto g = grid.try_as<wuxc::Grid>()) {
        wuxc::Grid::SetRowSpan(t.layer, std::max(1, (int)g.RowDefinitions().Size()));
        wuxc::Grid::SetColumnSpan(t.layer, std::max(1, (int)g.ColumnDefinitions().Size()));
    }
    BuildSurface(t.surface);
    t.layer.Children().Append(t.surface.root);
    if (g_settings.trayShadow) {
        t.shadowHost = wuxc::Canvas();  // over the background, under the items
        t.shadowHost.IsHitTestVisible(false);
        t.layer.Children().Append(t.shadowHost);
    }
    grid.Children().Append(t.layer);
    ApplyTrayLook(t);  // shaped once it's placed, as the layout updates
    t.layoutUpdated = t.layer.LayoutUpdated(
        winrt::auto_revoke, [weak = winrt::make_weak(t.layer)](auto&&, auto&&) {
            if (!g_trayDecor) return;
            for (auto& t : *g_trayDecor) {
                auto grid = t.grid.get();
                if (t.layer == weak.get() && grid) {
                    Try([&] { PlaceTraySurface(t, grid); }, L"Tray layer");
                    auto frame = t.frame.get();
                    auto row = grid.try_as<wux::FrameworkElement>();
                    if (frame && row) {
                        Try([&] { EnsureTrayHitAreas(row, frame); }, L"Tray hit areas");
                    }
                }
            }
        });
}

// Everything added to the trays taken out. `final` once unloading; otherwise
// they're added again as the trays are next found.
void RemoveTrayDecor(bool final) {
    if (!g_trayDecor) return;
    for (auto& t : *g_trayDecor) {
        t.layoutUpdated.revoke();
        RemoveSurfaceBlur(t.surface);
        RemoveTrayShadows(t);
        auto grid = t.grid.get();
        if (!grid) continue;
        uint32_t index;
        if (t.layer) Try([&] {
            if (grid.Children().IndexOf(t.layer, index)) grid.Children().RemoveAt(index);
        });
    }
    if (final) g_trayDecor.reset();
    else g_trayDecor->clear();
}

// The system tray is elsewhere in the same tree as `frame`.
void ScanTray(wux::FrameworkElement const& frame) {
    auto root = frame.XamlRoot();
    auto content = root ? root.Content() : nullptr;
    if (!content) return;
    ForEachDescendant(content, 10, [](wux::FrameworkElement const& el) {
        auto type = winrt::get_class_name(el);
        if (type == L"Taskbar.TaskbarFrame") return false;
        if (type != L"SystemTray.SystemTrayFrame") return true;
        FixTrayFrame(el);
        ForEachDescendant(el, 1, [&el](wux::FrameworkElement const& child) {
            if (child.Name() == L"SystemTrayFrameGrid") {
                FixTrayRow(child);
                Try([&] { AddTrayDecor(child); }, L"Tray background");
                Try([&] { EnsureTrayHitAreas(child, el); }, L"Tray hit areas");
            }
            return false;
        });
        return false;
    });
}

void ScanTaskbars() {
    std::erase_if(g_frames, [](auto& f) { return !f.get(); });
    g_buttons->remove_if([](Button const& b) { return !b.element.get(); });
    g_overrides->remove_if([](Override const& o) { return !o.element.get(); });
    ForgetGoneIndicators();

    for (auto& f : g_frames) {
        auto frame = f.get();
        if (!frame) continue;
        ForEachDescendant(frame, 12, [](wux::FrameworkElement const& el) {
            auto type = winrt::get_class_name(el);
            if (type == L"Taskbar.TaskListButton" || type == L"Taskbar.ExperienceToggleButton") {
                ProcessButton(el);
                return false;
            }
            if (type == L"Taskbar.TaskbarBackground") {
                HideBackground(el);
                return false;
            }
            return true;
        });
        ScanTray(frame);
    }
    if (!g_frames.empty()) StartInfoKeys();
}

// =============================================================================
// LIQUID GLASS: DOCKS AND TRAYS
// =============================================================================
// Which backgrounds get the glass, and when: each dock, and each tray while
// "Match Dock Style" is on (the rest is in LIQUID GLASS). A tray keeps its own
// brightness limit, which suits the text on it. It slides in and out by its hot
// corner with the glass it last drew, right once it's in place.

// The taskbar window the tray in `root` is in: its dock's.
HWND TrayWindow(wux::XamlRoot const& root) {
    if (!g_plates) return nullptr;
    for (auto& p : *g_plates) {
        auto panel = p.panel.get();
        if (panel && panel.XamlRoot() == root) return PlateWindow(p);
    }
    return nullptr;
}

// Where `t`'s background is on screen, at rest (not slid away). False while it
// can't have the glass.
bool TraySpot(TrayDecor& t, GlassSpot& spot) {
    auto grid = t.grid.get();
    auto& r = t.surfaceRect;
    auto& background = t.surface.root;
    if (!g_settings.trayMatchDock || !grid || !t.layer || !background ||
        background.Visibility() != Visibility::Visible || r.Width <= 0 || r.Height <= 0) {
        return false;
    }
    auto root = grid.XamlRoot();
    auto content = root ? root.Content() : nullptr;
    HWND window = content ? TrayWindow(root) : nullptr;
    RECT screen;
    if (!window || !GetWindowRect(window, &screen)) return false;
    float k = (float)root.RasterizationScale();
    auto at = t.layer.TransformToVisual(content).TransformPoint({r.X, r.Y});
    spot.window = window;
    spot.x = screen.left + at.X * k;
    spot.y = screen.top + at.Y * k;
    spot.w = r.Width * k;
    spot.h = r.Height * k;
    spot.k = k;
    spot.radius = SquircleRadius(spot.w, spot.h, r.Height * kTrayPlateRadius * k);
    spot.tone = TrayTone(t);  // as ApplyTrayLook
    return true;
}

// `t`'s glass let go, and with `blur`, the frosted blur back if it was shown.
void ReleaseTrayGlass(TrayDecor& t, bool blur) {
    if (ForgetGlass(t.surface, t.glass) && blur && !g_unloading) {
        Try([&] { ApplyTrayLook(t); }, L"Frosted glass");
    }
}

void ReleaseAllGlass(bool blur) {
    if (g_plates) {
        for (auto& p : *g_plates) ReleaseGlass(p, blur);
    }
    if (g_trayDecor) {
        for (auto& t : *g_trayDecor) ReleaseTrayGlass(t, blur);
    }
}

void MarkAllGlassDirty() {
    if (g_plates) {
        for (auto& p : *g_plates) p.glass.dirty = true;
    }
    if (g_trayDecor) {
        for (auto& t : *g_trayDecor) t.glass.dirty = true;
    }
}

// ---- On and off ----

// Liquid Glass off: the blur back, the captures stopped, and the taskbars back
// in screenshots.
void GlassShutdown() {
    if (HWND w = g_modWindow) KillTimer(w, kGlassTimer);
    g_glassTickInterval = 0;
    g_glassWatching = false;
    g_glassUnseenSince = 0;
    ReleaseAllGlass(true);
    g_captures.clear();  // their threads told to stop
    if (g_unloading) JoinWorkers();
    else ReapWorkers();
    g_glassDevice = GlassDevice{};
    g_glassFrozen = false;
    if (std::exchange(g_glassActive, false)) {
        SetCaptureExcluded(false);
        Wh_Log(L"Liquid Glass off: frosted glass, and the taskbar shows in screenshots");
    }
}

// Something failed: everything's let go and made again in a moment, unless it
// keeps failing.
void GlassFailed() {
    if (++g_glassFailures >= kGlassMaxFailures) {
        g_glassFailed = true;
        Wh_Log(L"Liquid Glass failed %d times: off until the settings are next saved",
               g_glassFailures);
        return GlassShutdown();
    }
    ReleaseAllGlass(true);
    g_captures.clear();
    g_glassDevice = GlassDevice{};
    g_glassRetryAt = GetTickCount64() + kCaptureRetryMs;
}

// On or off, as the settings and the emergency stop say. Its hotkeys are only
// taken once it's been turned on.
void UpdateGlass() {
    // The shortcuts are taken from every other program, so only while it's on.
    if (g_settings.glassStyle != GlassStyle::Off) StartHotkeys();
    else StopHotkeys();
    if (!GlassWanted()) return GlassShutdown();
    if (!EnsureModWindow()) return;
    if (!g_glassActive) {
        g_glassActive = true;
        g_glassExcludedAt = GetTickCount64();
        if (!g_glassFrozen) SetCaptureExcluded(true);
        Wh_Log(L"Liquid Glass on: the taskbar is left out of screenshots (Win+Ctrl+Shift+G "
               L"freezes the glass to show it)");
    }
    SetGlassTimer(kGlassTickMs);
}

bool DocksShown() { return g_plates && !DockFullyHidden(); }
bool TraysShown() { return g_trayDecor && g_settings.trayMatchDock && TrayShown(); }

// The captures looked after, and the glass drawn again wherever it moved or
// there's a new picture behind it: on a timer, and as soon as a capture's
// thread has a new picture (kGlassFrameMessage). A dock slid away or a tray
// slid out keeps what it last drew, to come back with.
void GlassTick() {
    if (!GlassWanted()) return GlassShutdown();
    ReapWorkers();
    g_glassWatching = DocksShown() || TraysShown();
    if (!g_glassWatching) {  // nothing to bend; it catches up after
        // A while out of sight (auto-hide, a fullscreen game), the screens are
        // let go. The last pictures are kept, to come back with.
        ULONGLONG now = GetTickCount64();
        if (!g_glassUnseenSince) g_glassUnseenSince = now;
        if (now - g_glassUnseenSince >= kGlassUnseenMs) {
            for (auto& c : g_captures) c.worker.Stop();
        }
        return;
    }
    g_glassUnseenSince = 0;
    struct Job {
        Surface* surface;
        GlassPlate* glass;
        GlassSpot spot;
        GlassCapture* capture;
    };
    bool failed = false;
    try {
        ULONGLONG now = GetTickCount64();
        for (auto& c : g_captures) c.used = false;
        std::vector<Job> jobs;
        if (DocksShown()) {
            for (auto& p : *g_plates) {
                Job job{&p.surface, &p.glass};
                if (PlateSpot(p, job.spot)) job.capture = CaptureFor(job.spot.window, p.glass, now);
                if (job.capture) jobs.push_back(job);
                else if (p.surface.glassShown) ReleaseGlass(p, true);
            }
        }
        if (TraysShown()) {
            for (auto& t : *g_trayDecor) {
                Job job{&t.surface, &t.glass};
                if (TraySpot(t, job.spot)) job.capture = CaptureFor(job.spot.window, t.glass, now);
                if (job.capture) jobs.push_back(job);
                else if (t.surface.glassShown) ReleaseTrayGlass(t, true);
            }
        }
        g_captures.remove_if([](GlassCapture const& c) { return !c.used; });
        if (!g_glassFrozen) {
            for (auto& c : g_captures) TakeStrip(c);
        }
        for (auto& job : jobs) {
            if (!job.capture->strip) continue;  // its first picture's still to come
            if (!DrawGlassSafely(*job.surface, *job.glass, job.spot, *job.capture)) {
                failed = true;
                break;
            }
        }
    } catch (...) {
        Wh_Log(L"Liquid Glass failed (0x%08X): frosted glass for now", winrt::to_hresult());
        failed = true;
    }
    if (failed) return GlassFailed();
}

// While the dock moves (magnifying, sliding), its glass is redrawn where it is
// now, from the newest picture. From the frame loop.
void FollowGlass() {
    if (!g_glassActive || !DocksShown()) return;
    if (!g_glassWatching.exchange(true)) RequestGlassTick();  // coming back: captures restarted
    try {
        for (auto& p : *g_plates) {
            GlassSpot spot;
            if (!p.surface.glassShown || !PlateSpot(p, spot)) continue;
            for (auto& c : g_captures) {
                if (c.monitor != p.glass.monitor) continue;
                if (!g_glassFrozen) TakeStrip(c);
                if (c.strip && !DrawGlassSafely(p.surface, p.glass, spot, c)) return GlassFailed();
                break;
            }
        }
    } catch (...) {
        Wh_Log(L"Liquid Glass failed (0x%08X): frosted glass for now", winrt::to_hresult());
        GlassFailed();
    }
}

// The tray's about to slide in, carrying its glass: drawn first, from a fresh
// picture of the screen.
void GlassTrayRevealed() {
    if (!g_glassActive || !TraysShown()) return;
    for (auto& t : *g_trayDecor) t.glass.dirty = true;
    GlassTick();
}

// Win+Ctrl+Shift+G. Frozen, the glass keeps bending the last picture of the
// screen (still right as the dock moves over it) and the taskbar shows in
// screenshots. Thawed, the capture starts again once it's out of them.
void ToggleGlassFrozen() {
    if (!g_glassActive) return;
    g_glassFrozen = !g_glassFrozen;
    if (g_glassFrozen) {
        for (auto& c : g_captures) c.worker.Stop();  // its pictures would hold the taskbar
        SetCaptureExcluded(false);
        Wh_Log(L"Liquid Glass frozen: the taskbar shows in screenshots");
    } else {
        SetCaptureExcluded(true);
        g_glassExcludedAt = GetTickCount64();
        MarkAllGlassDirty();
        Wh_Log(L"Liquid Glass thawed: following the screen again");
    }
    MessageBeep(MB_OK);
}

// =============================================================================
// POINTER
// =============================================================================

// Over the dock means within the plate's width, gaps included. `pointIn` gives
// the pointer in an element's coordinates.
template <typename F>
void OnDockPointer(Plate* plate, F pointIn) {
    wux::UIElement row{nullptr};
    bool inSpan = false, over = false;
    if (plate && plate->width > 0 && plate->surface.root.Visibility() == Visibility::Visible) {
        row = plate->row.get();
        auto panel = plate->panel.get();
        if (row && panel) {
            // Never less than unmagnified, so a shrinking edge doesn't regrow
            // under a still pointer. Above the dock counts only while magnifying.
            auto point = pointIn(panel);
            inSpan = point.X >= std::min(plate->left, plate->baseLeft) &&
                     point.X <= std::max(plate->left + plate->width,
                                         plate->baseLeft + plate->baseWidth);
            over = inSpan &&
                   (point.Y >= plate->top || (g_pointerOver && g_rowParent.get() == row));
        }
    }
    if (DockHidden()) {
        if (inSpan) RevealDock(true);  // back over it as it slides away
        return;
    }
    if (!over) {
        g_labelSuppressed = false;
        if (g_pointerOver) {
            g_pointerOver = false;
            StartFrames();
        }
        return;
    }
    if (g_rowParent.get() != row) BuildRow(row);
    g_pointerX = pointIn(row).X;
    g_pointerOver = true;
    StartFrames();
}

void OnTaskbarPointerMoved(wux::FrameworkElement const& frame,
                           wuxi::PointerRoutedEventArgs const& e) {
    CheckDragging();
    NoteTaskbarFrame(frame);
    for (auto& p : *g_plates) {
        if (p.frame.get() != frame) continue;
        NoteGlassWindow(p);  // the pointer's screen is the plate's
        return OnDockPointer(&p, [&](wux::UIElement const& el) {
            return e.GetCurrentPoint(el).Position();
        });
    }
    OnDockPointer(nullptr, [](wux::UIElement const&) { return wf::Point{}; });
}

void OnTaskbarPointerExited();

// While the Recycle Bin's menu is open, from the cursor's position on screen,
// over the taskbar the menu was opened on.
bool FollowPointerUnderTrashMenu() {
    static HWND taskbar = nullptr;
    auto trash = g_trashMenuFor.get();
    if (!trash) {
        taskbar = nullptr;
        return false;
    }
    for (auto& p : *g_plates) {
        if (p.trash != trash) continue;
        auto panel = p.panel.get();
        auto root = panel ? panel.XamlRoot() : nullptr;
        auto content = root ? root.Content() : nullptr;
        POINT cursor;
        RECT window;
        if (!content || !GetCursorPos(&cursor)) return true;
        if (!taskbar) {
            HMONITOR monitor = MonitorFromPoint(cursor, MONITOR_DEFAULTTONEAREST);
            ForEachTaskbarWindow([&](HWND tb, bool) {
                if (!taskbar && MonitorFromWindow(tb, MONITOR_DEFAULTTONEAREST) == monitor) {
                    taskbar = tb;
                }
            });
        }
        if (!taskbar || !GetWindowRect(taskbar, &window) || !PtInRect(&window, cursor)) {
            if (g_pointerOver) OnTaskbarPointerExited();
            return true;
        }
        float scale = (float)root.RasterizationScale();
        wf::Point at{(cursor.x - window.left) / scale, (cursor.y - window.top) / scale};
        OnDockPointer(&p, [&](wux::UIElement const& el) {
            return content.TransformToVisual(el).TransformPoint(at);
        });
        return true;
    }
    return false;
}

void OnTaskbarPointerExited() {
    g_pointerOver = false;
    g_labelSuppressed = false;
    StartFrames();
}

// =============================================================================
// RESET
// =============================================================================

void RemoveAppBars();
void ClipTaskbars();

void ResetAll() {
    StopFrames();
    Try(GlassShutdown);  // the taskbar back in screenshots
    WatchWindows(false);
    WatchWindowDrops(false);
    WatchTaskView(false);
    ClearOverDockIcon();
    CloseInfoCard();
    Try(DestroyLabel);
    Try(RemovePlates);
    g_d2d = nullptr;
    Try(StopTrash);
    Try(GiveBackWindowsSlides);
    for (auto& b : *g_buttons) {
        auto el = b.element.get();
        if (!el) continue;
        b.slide = {};
        Try([&] {
            ReleaseButton(b);
            SetScale(el, 1.0f);
            wuxh::ElementCompositionPreview::SetIsTranslationEnabled(el, false);
        });
    }
    if (g_trayFrames) {
        for (auto& t : *g_trayFrames) {
            t.sizeChanged.revoke();
            auto el = t.element.get();
            if (el && t.corner) Try([&] { ResetTraySlide(el); });
        }
    }
    Try([] { RemoveTrayDecor(true); });
    Try(RemoveTrayHitAreas);
    g_trayHitAreas.reset();
    Try(RemoveStartIcons);
    Try(ReleaseStillIcons);
    Try(UndimDragged);
    Try(StopSettlingIcons);
    RestoreIndicators();
    RestoreOverrides();
    RemoveAppBars();
    ClipTaskbars();  // unclipped, as g_unloading is set
    if (HWND w = g_modWindow.exchange(nullptr)) DestroyWindow(w);

    g_finderIconSource.reset();
    g_appIconSources.clear();
    CancelSquircleRenders();
    for (auto& s : g_iconSwaps) ShowIconAgain(s);
    g_iconSwaps.clear();
    g_squircleCache.clear();
    ShutdownGdiplus();
    g_row.clear();
    g_rowParent = nullptr;
    g_frames.clear();
    g_trayFrames.reset();
    // Last, as everything above reads them, and nothing does after.
    g_buttons.reset();
    g_plates.reset();
    g_indicators.reset();
    g_overrides.reset();
}

// =============================================================================
// HOOKS: TASKBAR ELEMENTS
// =============================================================================

using VoidMethod_t = void(WINAPI*)(void* pThis);
using GetDouble_t = double(WINAPI*)(void* pThis);
using SetDouble_t = void(WINAPI*)(void* pThis, double value);

// In a hook on a taskbar element's method, the element is the interface at
// pThis + 3 pointers (as in "Taskbar Labels").
wux::FrameworkElement ElementFromThis(void* pThis) {
    winrt::Windows::Foundation::IUnknown unknown;
    winrt::copy_from_abi(unknown, (void**)pThis + 3);
    return unknown.try_as<wux::FrameworkElement>();
}

// An app button updated itself: the dock's changes go in before it's drawn.
void OnTaskListButtonUpdated(void* pThis) {
    if (g_unloading) return;
    Try([&] {
        if (auto button = ElementFromThis(pThis)) {
            ProcessButton(button);
            if (Button* b = FindButton(button)) b->impl = pThis;
            NoteTaskbarFrame(FindTaskbarFrame(button));
            HoldIconsAWhile();  // as its state changes, Windows may bounce its icon
        }
    }, L"Button update");
}

// ---- Pointer (as in "Taskbar Dock Animation") ----

using TaskbarFrame_OnPointer_t = int(WINAPI*)(void* pThis, void* pArgs);

wux::FrameworkElement TaskbarFrameFromThis(void* pThis) {
    wux::FrameworkElement element{nullptr};
    ((::IUnknown*)pThis)->QueryInterface(winrt::guid_of<wux::FrameworkElement>(),
                                         winrt::put_abi(element));
    if (!element || winrt::get_class_name(element) != L"Taskbar.TaskbarFrame") return nullptr;
    return element;
}

TaskbarFrame_OnPointer_t TaskbarFrame_OnPointerMoved_Original;
int WINAPI TaskbarFrame_OnPointerMoved_Hook(void* pThis, void* pArgs) {
    int result = TaskbarFrame_OnPointerMoved_Original(pThis, pArgs);
    if (g_unloading) return result;
    Try([&] {
        if (auto frame = TaskbarFrameFromThis(pThis)) {
            wuxi::PointerRoutedEventArgs args{nullptr};
            ((::IUnknown*)pArgs)->QueryInterface(winrt::guid_of<wuxi::PointerRoutedEventArgs>(),
                                                 winrt::put_abi(args));
            if (args) OnTaskbarPointerMoved(frame, args);
        }
    });
    return result;
}

TaskbarFrame_OnPointer_t TaskbarFrame_OnPointerExited_Original;
int WINAPI TaskbarFrame_OnPointerExited_Hook(void* pThis, void* pArgs) {
    int result = TaskbarFrame_OnPointerExited_Original(pThis, pArgs);
    if (!g_unloading) Try([&] {
        if (TaskbarFrameFromThis(pThis)) OnTaskbarPointerExited();
    });
    return result;
}

// ---- Jump list placement (as in "Multirow taskbar for Windows 11") ----
// Centered on where the button is, not where layout put it (File Explorer), and
// as high as without the room left for the icons' bounce.

bool g_placingJumpList = false;
bool g_hasJumpListButton = false;
wf::Rect g_jumpListButton{};  // in its taskbar's XAML content

template <typename F>
void OpenJumpListFor(wux::UIElement const& sender, F original) {
    SuppressLabel();
    g_hasJumpListButton = false;
    if (!g_unloading) Try([&] {
        auto button = sender.try_as<wux::FrameworkElement>();
        auto root = button ? button.XamlRoot() : nullptr;
        auto content = root ? root.Content() : nullptr;
        if (content && FindButton(button)) {
            g_jumpListButton = button.TransformToVisual(content).TransformBounds(
                {0, 0, (float)button.ActualWidth(), (float)button.ActualHeight()});
            g_hasJumpListButton = true;
        }
    });
    original();
    g_hasJumpListButton = false;
}

using TaskbarResources_OnTaskListButtonContextRequested_t =
    void(WINAPI*)(void* pThis, wux::UIElement const& sender, void* args);
TaskbarResources_OnTaskListButtonContextRequested_t
    TaskbarResources_OnTaskListButtonContextRequested_Original;
void WINAPI TaskbarResources_OnTaskListButtonContextRequested_Hook(
    void* pThis, wux::UIElement const& sender, void* args) {
    OpenJumpListFor(sender, [&] {
        TaskbarResources_OnTaskListButtonContextRequested_Original(pThis, sender, args);
    });
}

// The same, on builds that skip the one above.
using TaskListButtonHandlers_HandleContextRequested_t =
    void(WINAPI*)(wux::UIElement const& sender, void* args);
TaskListButtonHandlers_HandleContextRequested_t
    TaskListButtonHandlers_HandleContextRequested_Original;
void WINAPI TaskListButtonHandlers_HandleContextRequested_Hook(wux::UIElement const& sender,
                                                              void* args) {
    OpenJumpListFor(sender, [&] {
        TaskListButtonHandlers_HandleContextRequested_Original(sender, args);
    });
}

using CTaskListWnd_ComputeJumpViewPosition_t =
    HRESULT(WINAPI*)(void* pThis, void* taskBtnGroup, int param2, wf::Point* point,
                     wux::HorizontalAlignment* horizontal, wux::VerticalAlignment* vertical);
CTaskListWnd_ComputeJumpViewPosition_t CTaskListWnd_ComputeJumpViewPosition_Original;
HRESULT WINAPI CTaskListWnd_ComputeJumpViewPosition_Hook(void* pThis, void* taskBtnGroup,
                                                         int param2, wf::Point* point,
                                                         wux::HorizontalAlignment* horizontal,
                                                         wux::VerticalAlignment* vertical) {
    g_placingJumpList = true;
    HRESULT hr = CTaskListWnd_ComputeJumpViewPosition_Original(pThis, taskBtnGroup, param2,
                                                               point, horizontal, vertical);
    g_placingJumpList = false;
    return hr;
}

using ToRawPixelsInDesktopCoordinates_t = RECT(WINAPI*)(wf::Rect const& rect, UINT dpi,
                                                         HWND hWnd);
ToRawPixelsInDesktopCoordinates_t ToRawPixelsInDesktopCoordinates_Original;
RECT WINAPI ToRawPixelsInDesktopCoordinates_Hook(wf::Rect const& rect, UINT dpi, HWND hWnd) {
    if (!g_placingJumpList || !g_hasJumpListButton || g_unloading) {
        return ToRawPixelsInDesktopCoordinates_Original(rect, dpi, hWnd);
    }
    wf::Rect moved = rect;
    moved.X = g_jumpListButton.X;
    moved.Width = g_jumpListButton.Width;
    float room = std::min(g_size.bounceRoom, moved.Height);
    moved.Y += room;
    moved.Height -= room;
    return ToRawPixelsInDesktopCoordinates_Original(moved, dpi, hWnd);
}

// ---- Dragging (as in "Multirow taskbar for Windows 11") ----
// While File Explorer is kept first, its drag never starts. Other apps go no
// further than the first and last spots they can take, where they'd land if
// dropped there, so nothing jumps on release. Points are in the button row's
// coordinates.

winrt::weak_ref<wux::FrameworkElement> g_blockedDrag;
float g_dragMinX = 0, g_dragMaxX = 0;
bool g_dragLimited = false;

// The pointer's range that keeps the dragged icon within those spots: the icons
// of the first app (the second, after a File Explorer kept first) and the last,
// as they are when the drag starts.
void LimitDrag(wux::FrameworkElement const& button, wf::Point start) {
    g_dragLimited = false;
    auto row = wuxm::VisualTreeHelper::GetParent(button).try_as<wux::UIElement>();
    if (!row) return;
    std::vector<Icon> apps;
    const Icon* dragged = nullptr;
    auto icons = GetIcons(row);
    for (auto& icon : icons) {
        if (IsAppButton(icon.element)) apps.push_back(icon);
    }
    std::sort(apps.begin(), apps.end(), [](Icon const& a, Icon const& b) { return a.left < b.left; });
    for (auto& icon : apps) {
        if (icon.element == button) dragged = &icon;
    }
    if (apps.size() < 2 || !dragged) return;
    auto iconLeft = [](Icon const& i) { return i.left + (i.width - g_size.icon) / 2; };
    bool pastExplorer = g_settings.explorerFirst && IsFileExplorer(apps[0].element);
    g_dragMinX = start.X + iconLeft(apps[pastExplorer ? 1 : 0]) - iconLeft(*dragged);
    g_dragMaxX = start.X + iconLeft(apps.back()) - iconLeft(*dragged);
    g_dragLimited = g_dragMinX <= g_dragMaxX;
}

bool IsBlockedDrag(void* pThis) {
    bool blocked = false;
    Try([&] {
        auto button = g_blockedDrag.get();
        blocked = button && ElementFromThis(pThis) == button;
    });
    return blocked;
}

using TaskListButton_DragPoint_t = void(WINAPI*)(void* pThis, wf::Point point);

TaskListButton_DragPoint_t TaskListButton_OnDragStartedGesture_Original;
void WINAPI TaskListButton_OnDragStartedGesture_Hook(void* pThis, wf::Point point) {
    bool explorer = false;
    if (!g_unloading) Try([&] {
        auto button = ElementFromThis(pThis);
        explorer = g_settings.explorerFirst && button && IsFileExplorer(button);
        if (explorer) g_blockedDrag = winrt::make_weak(button);
    });
    if (explorer) return;
    TaskListButton_OnDragStartedGesture_Original(pThis, point);
    if (g_unloading) return;
    g_dragging = true;
    Try([&] {
        if (auto button = ElementFromThis(pThis)) {
            LimitDrag(button, point);
            DimDragged(button);
        }
        HideDots();
        StartFrames();
    }, L"Drag start");
}

TaskListButton_DragPoint_t TaskListButton_UpdateDrag_Original;
void WINAPI TaskListButton_UpdateDrag_Hook(void* pThis, wf::Point point) {
    if (IsBlockedDrag(pThis)) return;
    if (g_dragLimited && g_dragging && !g_unloading) {
        point.X = std::clamp(point.X, g_dragMinX, g_dragMaxX);
    }
    TaskListButton_UpdateDrag_Original(pThis, point);
    if (g_dragging && !g_unloading) Try(FlattenDragged);
}

VoidMethod_t TaskListButton_OnDragCompletedGesture_Original;
void WINAPI TaskListButton_OnDragCompletedGesture_Hook(void* pThis) {
    if (IsBlockedDrag(pThis)) {
        g_blockedDrag = nullptr;
        return;
    }
    TaskListButton_OnDragCompletedGesture_Original(pThis);
    if (!g_unloading) Try(EndDragging, L"Drag end");
}

// ---- File Explorer first ----
// Moved there for real by the taskbar's own drag, its drop aimed before every
// app. Again whenever an app's dropped before it. Given up after a few tries in
// a row, in case it ever goes wrong; the count starts over whenever File
// Explorer is found first, however it got there.

bool g_movingExplorer = false;
winrt::weak_ref<wux::FrameworkElement> g_explorerMoved;  // this time round
std::wstring UserValueName(PCWSTR name);

using TaskListDragOperation_GetDropPlaceholder_t =
    void*(WINAPI*)(void* pThis, void* result, void* itemBounds, UINT64 itemRange,
                   wf::Rect dragBounds, int rearrangeDirection, void* groupBoundsCalculator,
                   bool param7);
TaskListDragOperation_GetDropPlaceholder_t TaskListDragOperation_GetDropPlaceholder_Original;
void* WINAPI TaskListDragOperation_GetDropPlaceholder_Hook(void* pThis, void* result,
                                                           void* itemBounds, UINT64 itemRange,
                                                           wf::Rect dragBounds,
                                                           int rearrangeDirection,
                                                           void* groupBoundsCalculator,
                                                           bool param7) {
    // Left of the leftmost app (a std::vector's first two members are its begin
    // and end), narrowed to a sliver.
    auto bounds = (wf::Rect* const*)itemBounds;
    if (g_movingExplorer && bounds && bounds[0] != bounds[1]) {
        float x = std::numeric_limits<float>::max();
        for (auto* r = bounds[0]; r != bounds[1]; r++) x = std::min(x, r->X);
        dragBounds.X = x - 2;
        dragBounds.Width = 2;
    }
    return TaskListDragOperation_GetDropPlaceholder_Original(pThis, result, itemBounds, itemRange,
                                                             dragBounds, rearrangeDirection,
                                                             groupBoundsCalculator, param7);
}

bool CanMoveExplorer(wux::FrameworkElement const& explorer, int tries) {
    Button* b = FindButton(explorer);
    return b && b->impl && tries < 3 && TaskListButton_OnDragStartedGesture_Original &&
           TaskListButton_UpdateDrag_Original && TaskListButton_OnDragCompletedGesture_Original &&
           TaskListDragOperation_GetDropPlaceholder_Original &&
           ElementFromThis(b->impl) == explorer;
}

// Once layout is done, from the mod window's message.
void MoveExplorerFirst(wux::FrameworkElement const& explorer) {
    int tries = Wh_GetIntValue(UserValueName(L"explorerMoves").c_str(), 0);
    if (g_explorerMoved.get() == explorer || !CanMoveExplorer(explorer, tries)) return;
    HWND w = EnsureModWindow();
    if (w && PostMessage(w, kMoveExplorerMessage, 0, 0)) {
        g_explorerMoved = winrt::make_weak(explorer);
    }
}

void MoveExplorerNow() {
    auto explorer = g_explorerMoved.get();
    auto name = UserValueName(L"explorerMoves");
    int tries = Wh_GetIntValue(name.c_str(), 0);
    if (!g_settings.explorerFirst || g_dragging || !explorer || !CanMoveExplorer(explorer, tries)) {
        // A drag started in the meantime: tried again once it's over.
        if (g_dragging) g_explorerMoved = nullptr;
        return;
    }
    Try([&] {
        void* impl = FindButton(explorer)->impl;
        Wh_SetIntValue(name.c_str(), tries + 1);
        auto offset = explorer.ActualOffset();
        wf::Point at{offset.x + (float)explorer.ActualWidth() / 2,
                     offset.y + (float)explorer.ActualHeight() / 2};
        g_movingExplorer = true;
        TaskListButton_OnDragStartedGesture_Original(impl, at);
        TaskListButton_UpdateDrag_Original(impl, {at.X - 1, at.Y});
        TaskListButton_OnDragCompletedGesture_Original(impl);
    }, L"Moving File Explorer");
    g_movingExplorer = false;
    MarkPlatesDirty();
}

// File Explorer is first: the tries start over. Storage is read once a session,
// and again only after a move.
void NoteExplorerFirst() {
    static bool checked = false;
    if (checked && !g_explorerMoved.get()) return;
    checked = true;
    g_explorerMoved = nullptr;
    auto name = UserValueName(L"explorerMoves");
    if (Wh_GetIntValue(name.c_str(), 0)) Wh_SetIntValue(name.c_str(), 0);
}

// =============================================================================
// HOOKS: TASKBAR HEIGHT
// =============================================================================
// Based on m417z's "Taskbar height and icon size", trimmed to the height.
// Everything passes straight through when g_taskbarHeight is 0.

std::atomic<bool> g_applyingHeight = false;
std::atomic<bool> g_trayResized = false;  // since the last height change
thread_local bool g_inTrayUpdateFrameSize = false;

// enumTaskbarSize: 0 = small, 1 = regular, 2 = large.
bool OverrideHeight(int enumTaskbarSize) {
    return g_taskbarHeight > 0 && (enumTaskbarSize == 1 || enumTaskbarSize == 2);
}

// The offset `regex` captures (in hex) from the first of the `limit`
// instructions from `code` it matches, or 0. Stops at a ret.
LONG OffsetFromDisasm(const void* code, int limit, std::regex const& regex) {
    auto p = (BYTE*)code;
    for (int i = 0; p && i < limit; i++) {
        WH_DISASM_RESULT result;
        if (!Wh_Disasm(p, &result)) break;
        p += result.length;
        std::string_view text = result.text;
        if (text == "ret") break;
        std::match_results<std::string_view::const_iterator> match;
        if (std::regex_match(text.begin(), text.end(), match, regex)) {
            size_t offset = 0;
            std::from_chars(&*match[1].first, &*match[1].first + match[1].length(), offset, 16);
            return offset > 0 && offset <= 0xFFFF ? (LONG)offset : 0;
        }
    }
    return 0;
}

// ---- The taskbar window ----

using TaskbarConfiguration_GetFrameSize_t = double(WINAPI*)(int enumTaskbarSize);
TaskbarConfiguration_GetFrameSize_t TaskbarConfiguration_GetFrameSize_Original;
double WINAPI TaskbarConfiguration_GetFrameSize_Hook(int enumTaskbarSize) {
    return OverrideHeight(enumTaskbarSize)
               ? g_taskbarHeight
               : TaskbarConfiguration_GetFrameSize_Original(enumTaskbarSize);
}

#ifdef _M_ARM64
// On ARM64, GetFrameSize is inlined into UpdateFrameSize, so the size it
// stores is replaced just before its change event fires. Its offset is read
// from str dN, [xN, #offset].
thread_local double* g_updatingFrameSize = nullptr;
VoidMethod_t TaskbarConfiguration_UpdateFrameSize_Address;  // hooked by address, below
VoidMethod_t TaskbarConfiguration_UpdateFrameSize_Original;

LONG FrameSizeOffset() {
    static LONG offset = [] {
        LONG found = OffsetFromDisasm((void*)TaskbarConfiguration_UpdateFrameSize_Address, 0x80,
                                      std::regex(R"(str\s+d\d+, \[x\d+, #0x([0-9a-f]+)\])"));
        if (found) Wh_Log(L"Frame size offset: 0x%X", found);
        else Wh_Log(L"Frame size offset not found");
        return found;
    }();
    return offset;
}

void WINAPI TaskbarConfiguration_UpdateFrameSize_Hook(void* pThis) {
    LONG offset = FrameSizeOffset();
    g_updatingFrameSize = offset ? (double*)((BYTE*)pThis + offset) : nullptr;
    TaskbarConfiguration_UpdateFrameSize_Original(pThis);
    g_updatingFrameSize = nullptr;
}

VoidMethod_t Event_operator_call_Original;
void WINAPI Event_operator_call_Hook(void* pThis) {
    if (g_updatingFrameSize && g_taskbarHeight > 0) *g_updatingFrameSize = g_taskbarHeight;
    Event_operator_call_Original(pThis);
}

void HookFrameSizeUpdate() {
    if (!TaskbarConfiguration_UpdateFrameSize_Address ||
        TaskbarConfiguration_UpdateFrameSize_Original) {
        return;
    }
    FrameSizeOffset();  // found up front
    WindhawkUtils::SetFunctionHook(TaskbarConfiguration_UpdateFrameSize_Address,
                                   TaskbarConfiguration_UpdateFrameSize_Hook,
                                   &TaskbarConfiguration_UpdateFrameSize_Original);
}
#endif

// ---- The system tray, on the main taskbar and the others ----

using SystemTray_GetFrameSize_t = double(WINAPI*)(void* pThis, int enumTaskbarSize);
SystemTray_GetFrameSize_t SystemTrayController_GetFrameSize_Original;
SystemTray_GetFrameSize_t SystemTraySecondaryController_GetFrameSize_Original;

template <auto& Original>
double WINAPI SystemTray_GetFrameSize_Hook(void* pThis, int enumTaskbarSize) {
    return OverrideHeight(enumTaskbarSize) ? g_taskbarHeight : Original(pThis, enumTaskbarSize);
}

// While the tray resizes itself, its frame gets the taskbar's height.
VoidMethod_t SystemTrayController_UpdateFrameSize_Address;  // hooked by address, below
VoidMethod_t SystemTrayController_UpdateFrameSize_Original;
VoidMethod_t SystemTraySecondaryController_UpdateFrameSize_Original;

template <auto& Original>
void WINAPI SystemTray_UpdateFrameSize_Hook(void* pThis) {
    g_inTrayUpdateFrameSize = true;
    Original(pThis);
    g_inTrayUpdateFrameSize = false;
    g_trayResized = true;
}

// The main tray skips resizing when the height is the one it last set, and
// would keep the dock's when the mod unloads. That's forgotten first, so any new
// height applies. Found in the function's code (as in "Taskbar height and icon
// size"): on x64, ucomisd xmmN, [reg + offset], then jp, then je or jne; on
// ARM64, ldr dN, [xN, #offset], then fcmp, then b.eq.
LONG TrayLastHeightOffset() {
    static LONG offset = [] {
#if defined(_M_X64)
        auto start = (BYTE const*)SystemTrayController_UpdateFrameSize_Address;
        for (auto p = start; start && p != start + 0x400; p++) {
            if (p[0] == 0x66 && p[1] == 0x0F && p[2] == 0x2E && (p[3] & 0xC0) == 0x80 &&
                p[8] == 0x7A &&
                (p[10] == 0x74 || p[10] == 0x75 ||
                 (p[10] == 0x0F && (p[11] == 0x84 || p[11] == 0x85)))) {
                LONG found = *(LONG const*)(p + 4);
                Wh_Log(L"Tray height offset: 0x%X", found);
                return found > 0 && found <= 0xFFFF ? found : 0L;
            }
        }
#elif defined(_M_ARM64)
        std::regex load(R"(ldr\s+d\d+, \[x\d+, #0x([0-9a-f]+)\])");
        std::regex compare(R"(fcmp\s+d\d+, d\d+)");
        std::regex branch(R"(b\.eq\s+0x[0-9a-f]+)");
        auto start = (DWORD const*)SystemTrayController_UpdateFrameSize_Address;
        for (auto p = start; start && p != start + 0x100; p++) {
            WH_DISASM_RESULT r[3];
            if (!Wh_Disasm((void*)p, &r[0]) || !strcmp(r[0].text, "ret")) break;
            std::cmatch match;
            if (std::regex_match(r[0].text, match, load) && Wh_Disasm((void*)(p + 1), &r[1]) &&
                std::regex_match(r[1].text, compare) && Wh_Disasm((void*)(p + 2), &r[2]) &&
                std::regex_match(r[2].text, branch)) {
                LONG found = std::stol(match[1], nullptr, 16);
                Wh_Log(L"Tray height offset: 0x%X", found);
                return found > 0 && found <= 0xFFFF ? found : 0L;
            }
        }
#else
#error "Unsupported architecture"
#endif
        Wh_Log(L"Tray height offset not found");
        return 0L;
    }();
    return offset;
}

void WINAPI SystemTrayController_UpdateFrameSize_Hook(void* pThis) {
    if (LONG offset = TrayLastHeightOffset()) *(double*)((BYTE*)pThis + offset) = 0;
    SystemTray_UpdateFrameSize_Hook<SystemTrayController_UpdateFrameSize_Original>(pThis);
}

void HookTrayUpdateFrameSize() {
    if (!SystemTrayController_UpdateFrameSize_Address || SystemTrayController_UpdateFrameSize_Original) {
        return;
    }
    TrayLastHeightOffset();  // found up front
    WindhawkUtils::SetFunctionHook(SystemTrayController_UpdateFrameSize_Address,
                                   SystemTrayController_UpdateFrameSize_Hook,
                                   &SystemTrayController_UpdateFrameSize_Original);
}

SetDouble_t SystemTrayFrame_Height_Original;
void WINAPI SystemTrayFrame_Height_Hook(void* pThis, double value) {
    if (g_inTrayUpdateFrameSize && g_taskbarHeight > 0) value = g_taskbarHeight;
    SystemTrayFrame_Height_Original(pThis, value);
}

// From SystemTray.dll 2609.4001, newer C++/WinRT sets the frame's Height through
// consume_general, given the setter as a vcall thunk. Every double setter of its
// IFrameworkElement goes through there, so only Height, known by the thunk's
// vtable offset, is changed (as in m417z's "Taskbar height and icon size").
constexpr size_t kFrameworkElementPutHeightOffset = (6 + 12) * sizeof(void*);

// The thunk loads the method from the vtable: on x64, mov rax, [rcx] then
// mov rax, [rax+offset]; on ARM64, ldr x16, [x0] then ldr x16, [x16, #offset].
LONG VcallThunkVtableOffset(void* thunk) {
#if defined(_M_X64)
    static const std::regex regex(R"(mov \w+, \[\w+\+0x([0-9a-f]+)\])",
                                  std::regex_constants::icase);
#elif defined(_M_ARM64)
    static const std::regex regex(R"(ldr\s+x\d+, \[x\d+, #0x([0-9a-f]+)\])",
                                  std::regex_constants::icase);
#else
#error "Unsupported architecture"
#endif
    return OffsetFromDisasm(thunk, 2, regex);
}

using SystemTrayFrame_SetDouble_t = void(WINAPI*)(void* pThis, void* method, double* value);
SystemTrayFrame_SetDouble_t SystemTrayFrame_SetDouble_Original;
void WINAPI SystemTrayFrame_SetDouble_Hook(void* pThis, void* method, double* value) {
    if (g_inTrayUpdateFrameSize && g_taskbarHeight > 0 &&
        VcallThunkVtableOffset(method) == (LONG)kFrameworkElementPutHeightOffset) {
        double height = g_taskbarHeight;
        return SystemTrayFrame_SetDouble_Original(pThis, method, &height);
    }
    SystemTrayFrame_SetDouble_Original(pThis, method, value);
}

// ---- The XAML frame ----
// Without lifting MaxHeight, the frame stays at the stock height.

SetDouble_t TaskbarFrame_MaxHeight_Original;

// Windows 11 22H2/23H2.
SetDouble_t TaskbarFrame_Height_Original;
void WINAPI TaskbarFrame_Height_Hook(void* pThis, double value) {
    if (TaskbarFrame_MaxHeight_Original) {
        TaskbarFrame_MaxHeight_Original(pThis, std::numeric_limits<double>::infinity());
    }
    TaskbarFrame_Height_Original(pThis, value);
}

// Windows 11 24H2 and newer. The controller's TaskbarFrame offset is read from
// the start of OnGroupingModeChanged: on x64, sub rsp, 28h / mov rax|r8,
// [rcx+offset]; on ARM64, the first ldr xN, [xN, #offset].
void* TaskbarController_OnGroupingModeChanged_Address;

LONG GetTaskbarFrameOffset() {
    static LONG offset = []() -> LONG {
#if defined(_M_X64)
        const BYTE* p = (const BYTE*)TaskbarController_OnGroupingModeChanged_Address;
        if (p && p[0] == 0x48 && p[1] == 0x83 && p[2] == 0xEC &&
            (p[4] == 0x48 || p[4] == 0x4C) && p[5] == 0x8B && (p[6] & 0xC0) == 0x80) {
            LONG o = *(LONG*)(p + 7);
            if (o > 0 && o <= 0xFFFF) return o;
        }
#elif defined(_M_ARM64)
        LONG o = OffsetFromDisasm(TaskbarController_OnGroupingModeChanged_Address, 10,
                                  std::regex(R"(ldr\s+x\d+, \[x\d+, #0x([0-9a-f]+)\])"));
        if (o) return o;
#else
#error "Unsupported architecture"
#endif
        Wh_Log(L"Taskbar frame offset not found");
        return 0;
    }();
    return offset;
}

VoidMethod_t TaskbarController_UpdateFrameHeight_Original;
void WINAPI TaskbarController_UpdateFrameHeight_Hook(void* pThis) {
    wux::FrameworkElement frame{nullptr};
    Try([&] {
        LONG offset = GetTaskbarFrameOffset();
        void* taskbarFrame = offset ? *(void**)((BYTE*)pThis + offset) : nullptr;
        if (taskbarFrame) {
            ((::IUnknown**)taskbarFrame)[1]->QueryInterface(
                winrt::guid_of<wux::FrameworkElement>(), winrt::put_abi(frame));
        }
        if (frame) frame.MaxHeight(std::numeric_limits<double>::infinity());
    });

    TaskbarController_UpdateFrameHeight_Original(pThis);
    if (!frame) return;

    if (!g_unloading) Try([&] { NoteTaskbarFrame(frame); });  // found at startup too
    Try([&] {
        // The grid holding the frame has a height of its own.
        auto grid = wuxm::VisualTreeHelper::GetParent(frame).try_as<wux::FrameworkElement>();
        if (grid && grid.Height() > 0 && grid.Height() != frame.Height()) {
            grid.Height(frame.Height());
        }
    });
}

// ---- Applying a new height ----
// Explorer re-reads it on a settings change; this also resizes the window.

VoidMethod_t TrayUI__StuckTrayChange_Original;

using TrayUI__HandleSettingChange_t = void(WINAPI*)(void*, void*, void*, void*, void*);
TrayUI__HandleSettingChange_t TrayUI__HandleSettingChange_Original;
void WINAPI TrayUI__HandleSettingChange_Hook(void* pThis, void* p1, void* p2, void* p3,
                                             void* p4) {
    TrayUI__HandleSettingChange_Original(pThis, p1, p2, p3, p4);
    if (g_applyingHeight) TrayUI__StuckTrayChange_Original(pThis);
}

void ApplyTaskbarHeight() {
    HWND tb = FindTaskbar();
    if (!tb) return;
    g_applyingHeight = true;
    SendMessage(tb, WM_SETTINGCHANGE, SPI_SETLOGICALDPIOVERRIDE, 0);
    g_applyingHeight = false;

    // Reloads the icons, at the new resolution.
    HWND rebar = FindWindowEx(tb, nullptr, L"ReBarWindow32", nullptr);
    HWND taskSw = rebar ? FindWindowEx(rebar, nullptr, L"MSTaskSwWClass", nullptr) : nullptr;
    if (taskSw) SendMessage(taskSw, 0x452, 3, 0);
}

// =============================================================================
// HOOKS: ICON RESOLUTION
// =============================================================================
// Icons load at the fully magnified size, while layout code still sees the
// stock 24px. Adapted from m417z's "Taskbar height and icon size".

thread_local bool g_inTaskbarFrameGetMetrics = false;  // picks the button width

GetDouble_t TaskbarConfiguration_GetIconHeightInViewPixels_Original;
double WINAPI TaskbarConfiguration_GetIconHeightInViewPixels_Hook(void* pThis) {
    double height = TaskbarConfiguration_GetIconHeightInViewPixels_Original(pThis);
    // 16 = "small taskbar buttons", which isn't supported.
    if (g_size.iconLoadSize <= 0 || g_inTaskbarFrameGetMetrics || height <= 16) return height;
    return g_size.iconLoadSize;
}

using TaskbarFrame_GetMetrics_t = void*(WINAPI*)(void* pThis, void* metrics);
TaskbarFrame_GetMetrics_t TaskbarFrame_GetMetrics_Original;
void* WINAPI TaskbarFrame_GetMetrics_Hook(void* pThis, void* metrics) {
    g_inTaskbarFrameGetMetrics = true;
    void* ret = TaskbarFrame_GetMetrics_Original(pThis, metrics);
    g_inTaskbarFrameGetMetrics = false;
    return ret;
}

// ---- App buttons: layout keeps seeing 24px ----

// Read from the IconHeight setter: movsd xmmN, qword ptr [rcx+offset] on x64,
// ldr dN, [xN, #offset] on ARM64.
void* TaskListButton_IconHeight_Address;

size_t GetIconHeightOffset() {
    static size_t offset = []() -> size_t {
#if defined(_M_X64)
        std::regex regex(R"(movsd xmm\d+, qword ptr \[rcx\+0x([0-9a-f]+)\])",
                         std::regex_constants::icase);
#elif defined(_M_ARM64)
        std::regex regex(R"(ldr\s+d\d+, \[x\d+, #0x([0-9a-f]+)\])", std::regex_constants::icase);
#else
#error "Unsupported architecture"
#endif
        LONG o = OffsetFromDisasm(TaskListButton_IconHeight_Address, 30, regex);
        if (o) Wh_Log(L"Icon height offset: 0x%X", o);
        else Wh_Log(L"Icon height offset not found; icon resolution unchanged");
        return o;
    }();
    return offset;
}

// Runs `original` with the button's icon height at the stock 24px.
template <typename F>
void WithStockIconHeight(void* pThis, F original) {
    size_t offset = g_size.iconLoadSize > 0 ? GetIconHeightOffset() : 0;
    if (!offset) return original();
    double* iconHeight = (double*)((BYTE*)pThis + offset);
    double saved = *iconHeight;
    *iconHeight = kStockIconSize;
    original();
    *iconHeight = saved;
}

template <auto& Original>
void WINAPI StockIconHeight_Hook(void* pThis) {
    WithStockIconHeight(pThis, [=] { Original(pThis); });
}

// These also run whenever a button is set up or changes state.
template <auto& Original>
void WINAPI ButtonUpdate_Hook(void* pThis) {
    WithStockIconHeight(pThis, [=] { Original(pThis); });
    OnTaskListButtonUpdated(pThis);
}

VoidMethod_t TaskListButton_UpdateMultiWindowClip_Original;
VoidMethod_t TaskListButton_CreateMultiWindowClip_Original;
VoidMethod_t TaskListButton_UpdateBadge_Original;
VoidMethod_t TaskListButton_UpdateButtonPadding_Original;
VoidMethod_t TaskListButton_UpdateVisualStates_Original;

// Puts the icon column back to its stock width; it's widened again after.
VoidMethod_t TaskListButton_UpdateIconColumnDefinition_Original;
void WINAPI TaskListButton_UpdateIconColumnDefinition_Hook(void* pThis) {
    TaskListButton_UpdateIconColumnDefinition_Original(pThis);
    OnTaskListButtonUpdated(pThis);
}

using TaskListButton_OverlayIcon_t = void(WINAPI*)(void* pThis, void* stream);
TaskListButton_OverlayIcon_t TaskListButton_OverlayIcon_Original;
void WINAPI TaskListButton_OverlayIcon_Hook(void* pThis, void* stream) {
    WithStockIconHeight(pThis, [=] { TaskListButton_OverlayIcon_Original(pThis, stream); });
    if (!g_unloading) Try([&] {
        if (auto button = ElementFromThis(pThis)) ProcessButton(button);  // places a new badge
    });
}

// ---- Start, Task View, widgets and other system buttons ----
// Shown at the dock's icon size, whatever "Use High Resolution Icons" is set to.

template <auto& Original>
void WINAPI DockIconHeight_Hook(void* pThis, double height) {
    if (DockSizesIcons() && height > 16) height = g_size.icon;
    Original(pThis, height);
}

SetDouble_t ExperienceToggleButton_IconHeight_Original;
SetDouble_t TaskbarComponentHost_IconHeight_Original;
GetDouble_t ExperienceToggleButton_IconHeight_get;

// Padding is worked out for the stock 24px. Setting the height calls
// UpdateButtonPadding again, which the flag skips.
thread_local bool g_settingToggleIconHeight = false;

void SetToggleIconHeight(void* pThis, double height) {
    g_settingToggleIconHeight = true;
    ExperienceToggleButton_IconHeight_Original(pThis, height);
    g_settingToggleIconHeight = false;
}

VoidMethod_t ExperienceToggleButton_UpdateButtonPadding_Original;
void WINAPI ExperienceToggleButton_UpdateButtonPadding_Hook(void* pThis) {
    if (g_settingToggleIconHeight) return;
    double height = kStockIconSize;
    if (DockSizesIcons() && ExperienceToggleButton_IconHeight_get &&
        ExperienceToggleButton_IconHeight_Original) {
        height = ExperienceToggleButton_IconHeight_get(pThis);
    }
    bool swap = height > 16 && height != kStockIconSize;
    if (swap) SetToggleIconHeight(pThis, kStockIconSize);
    ExperienceToggleButton_UpdateButtonPadding_Original(pThis);
    if (swap) SetToggleIconHeight(pThis, height);
}

// =============================================================================
// HOOKS: WINDOW PREVIEWS
// =============================================================================
// With "See Window Previews" on, hovering opens Windows' preview, just above the
// dock's label. Off, previews only open on click, as in m417z's "Disable
// Taskbar Thumbnails".

// ---- Older builds ----

using CTaskListWnd__DisplayExtendedUI_t = HRESULT(WINAPI*)(void* pThis, void* taskBtnGroup,
                                                           int param2, DWORD flags, int param4);
CTaskListWnd__DisplayExtendedUI_t CTaskListWnd__DisplayExtendedUI_Original;
HRESULT WINAPI CTaskListWnd__DisplayExtendedUI_Hook(void* pThis, void* taskBtnGroup, int param2,
                                                    DWORD flags, int param4) {
    bool click = flags & 2;
    if (!click && !g_unloading && !g_settings.previews) return S_OK;
    return CTaskListWnd__DisplayExtendedUI_Original(pThis, taskBtnGroup, param2, flags, param4);
}

using CTaskListWnd__ShowToolTip_t = void(WINAPI*)(void* pThis, DWORD flags);
CTaskListWnd__ShowToolTip_t CTaskListWnd__ShowToolTip_Original;
void WINAPI CTaskListWnd__ShowToolTip_Hook(void* pThis, DWORD flags) {
    if (g_unloading) CTaskListWnd__ShowToolTip_Original(pThis, flags);
}

// ---- Newer builds ----
// A XAML flyout. Without previews, while it opens on hover its window is kept
// hidden, and it's shown after all if it then turns into a click (sticky) flyout.

struct HoverFlyout {
    HWND hwnd = nullptr;
    int show = SW_HIDE;
    BOOL enable = FALSE;
};

std::atomic<DWORD> g_hoverFlyoutThread = 0;
bool g_inStickyFlyout = false;
HoverFlyout g_hoverFlyout;

bool InHoverFlyout() {
    return !g_settings.previews && g_hoverFlyoutThread == GetCurrentThreadId() &&
           !g_inStickyFlyout;
}

using ShowWindow_t = decltype(&ShowWindow);
ShowWindow_t ShowWindow_Original;
BOOL WINAPI ShowWindow_Hook(HWND hWnd, int nCmdShow) {
    if (InHoverFlyout()) {
        if (nCmdShow != SW_HIDE) {
            if (hWnd != g_hoverFlyout.hwnd) g_hoverFlyout = {hWnd};
            g_hoverFlyout.show = nCmdShow;
            return TRUE;
        }
        if (hWnd == g_hoverFlyout.hwnd) g_hoverFlyout.show = SW_HIDE;
    }
    return ShowWindow_Original(hWnd, nCmdShow);
}

using EnableWindow_t = decltype(&EnableWindow);
EnableWindow_t EnableWindow_Original;
BOOL WINAPI EnableWindow_Hook(HWND hWnd, BOOL bEnable) {
    if (InHoverFlyout()) {
        if (bEnable) {
            if (hWnd != g_hoverFlyout.hwnd) g_hoverFlyout = {hWnd};
            g_hoverFlyout.enable = TRUE;
            return TRUE;
        }
        if (hWnd == g_hoverFlyout.hwnd) g_hoverFlyout.enable = FALSE;
    }
    return EnableWindow_Original(hWnd, bEnable);
}

using HoverFlyoutModel_TransitionToFlyoutVisibleStickyState_t = void(WINAPI*)(void* pThis,
                                                                               void* param1);
HoverFlyoutModel_TransitionToFlyoutVisibleStickyState_t
    HoverFlyoutModel_TransitionToFlyoutVisibleStickyState_Original;
void WINAPI HoverFlyoutModel_TransitionToFlyoutVisibleStickyState_Hook(void* pThis,
                                                                      void* param1) {
    g_inStickyFlyout = true;
    HoverFlyoutModel_TransitionToFlyoutVisibleStickyState_Original(pThis, param1);
    g_inStickyFlyout = false;
    if (HWND w = g_hoverFlyout.hwnd) {
        if (g_hoverFlyout.show != SW_HIDE) ShowWindow_Original(w, g_hoverFlyout.show);
        if (g_hoverFlyout.enable) EnableWindow_Original(w, TRUE);
    }
    g_hoverFlyout = {};
}

// The current signature, and the one before March 2025.
using HoverFlyoutController_ShowTaskListButtonHoverFlyout_t =
    void(WINAPI*)(void* pThis, void* param1, void* param2, int param3, int param4);
HoverFlyoutController_ShowTaskListButtonHoverFlyout_t
    HoverFlyoutController_ShowTaskListButtonHoverFlyout_Original;
void WINAPI HoverFlyoutController_ShowTaskListButtonHoverFlyout_Hook(void* pThis, void* param1,
                                                                    void* param2, int param3,
                                                                    int param4) {
    g_hoverFlyoutThread = g_unloading ? 0 : GetCurrentThreadId();
    HoverFlyoutController_ShowTaskListButtonHoverFlyout_Original(pThis, param1, param2, param3,
                                                                 param4);
    g_hoverFlyoutThread = 0;
}

using HoverFlyoutController_ShowTaskListButtonHoverFlyout_Old_t =
    void(WINAPI*)(void* pThis, void* param1, void* param2, int param3);
HoverFlyoutController_ShowTaskListButtonHoverFlyout_Old_t
    HoverFlyoutController_ShowTaskListButtonHoverFlyout_Old_Original;
void WINAPI HoverFlyoutController_ShowTaskListButtonHoverFlyout_Old_Hook(void* pThis, void* param1,
                                                                        void* param2,
                                                                        int param3) {
    g_hoverFlyoutThread = g_unloading ? 0 : GetCurrentThreadId();
    HoverFlyoutController_ShowTaskListButtonHoverFlyout_Old_Original(pThis, param1, param2, param3);
    g_hoverFlyoutThread = 0;
}

// ---- Placement ----
// Windows puts a preview above its app's button, which reaches well past the
// icons. It's moved to just above the label at its highest, and sideways onto
// the magnified icon under the pointer (as "Taskbar on top for Windows 11" moves them).

constexpr float kPreviewGap = 6;        // between it and the label
constexpr float kFlyoutStockGap = 12;   // under a flyout, above its app's button

// How far to move a preview: a window Windows put at `rect` on screen, or a
// flyout (null), which it puts kFlyoutStockGap above its app's button. Buttons
// reach above the taskbar window.
POINT PreviewOffset(RECT const* rect) {
    HWND tb = FindTaskbar();  // the dock is only read on its own thread
    if (!tb || GetWindowThreadProcessId(tb, nullptr) != GetCurrentThreadId()) return {};
    Plate* p = GetRowPlate(g_rowParent.get());
    if (!p) return {};

    float iconTop = p->top + g_size.padY + g_size.icon * (1 - g_settings.scale);
    float top = g_settings.tooltips
                    ? LabelTipY(*p, g_size.icon * g_settings.scale) - LabelArrow() - LabelHeight()
                    : std::min(iconTop, p->top);
    float shift = 0;
    wux::FrameworkElement button{nullptr};
    for (auto& item : g_row) {
        auto el = item.trash ? nullptr : item.element.get();
        if (!el) continue;
        if (!button) button = el;
        float d = std::fabs(g_pointerX - item.center - item.shift);
        if (g_pointerOver && d <= item.width * item.scale / 2) {
            shift = item.shift;
            button = el;
        }
    }
    auto panel = p->panel.get();
    if (!button || !panel) return {};
    float buttonTop = button.TransformToVisual(panel).TransformPoint({0, 0}).Y;

    POINT bottom, stock;
    RECT window;
    float scale = PanelToScreen(*p, {0, top - kPreviewGap}, bottom, window);
    if (scale <= 0 || !PanelToScreen(*p, {0, buttonTop - kFlyoutStockGap}, stock, window)) {
        return {};
    }
    LONG stockBottom = rect ? rect->bottom : stock.y;
    POINT offset{std::lround(shift * scale), bottom.y - stockBottom};

    // A window is kept on the screen.
    MONITORINFO info{sizeof(info)};
    if (rect && GetMonitorInfo(MonitorFromRect(&window, MONITOR_DEFAULTTONEAREST), &info)) {
        offset.x = std::max(info.rcMonitor.left - rect->left,
                            std::min(offset.x, info.rcMonitor.right - rect->right));
        offset.y = std::max(offset.y, info.rcMonitor.top - rect->top);
    }
    return offset;
}

// Newer builds: a XAML flyout. FlyoutFrame::UpdateFlyoutPosition maps where
// it goes to the screen, and every point it maps is moved.

thread_local void* g_placingFlyout = nullptr;

VoidMethod_t FlyoutFrame_UpdateFlyoutPosition_Original;
void WINAPI FlyoutFrame_UpdateFlyoutPosition_Hook(void* pThis) {
    void* outer = std::exchange(g_placingFlyout, pThis);
    FlyoutFrame_UpdateFlyoutPosition_Original(pThis);
    g_placingFlyout = outer;
}

// Whether a flyout frame holds a preview, not another flyout.
bool IsPreview(void* flyoutFrame) {
    wux::FrameworkElement frame{nullptr};
    ((::IUnknown*)flyoutFrame)
        ->QueryInterface(winrt::guid_of<wux::FrameworkElement>(), winrt::put_abi(frame));
    if (!frame) {  // before build 26120.4733
        ((::IUnknown**)flyoutFrame)[1]->QueryInterface(winrt::guid_of<wux::FrameworkElement>(),
                                                       winrt::put_abi(frame));
    }
    bool found = false;
    if (frame) {
        ForEachDescendant(frame, 2, [&found](wux::FrameworkElement const& el) {
            found = found || el.Name() == L"HoverFlyoutGrid";
            return !found;
        });
    }
    return found;
}

using MapWindowPoints_t = decltype(&MapWindowPoints);
MapWindowPoints_t MapWindowPoints_Original;
int WINAPI MapWindowPoints_Hook(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints) {
    int result = MapWindowPoints_Original(hWndFrom, hWndTo, lpPoints, cPoints);
    if (!g_placingFlyout || !lpPoints || !cPoints || g_unloading) return result;
    void* flyout = std::exchange(g_placingFlyout, nullptr);  // not again from in here
    Try([&] {
        if (!IsPreview(flyout)) return;
        POINT offset = PreviewOffset(nullptr);
        for (UINT i = 0; i < cPoints; i++) {
            lpPoints[i].x += offset.x;
            lpPoints[i].y += offset.y;
        }
    });
    g_placingFlyout = flyout;
    return result;
}

// Older builds: a window, placed while CTaskListThumbnailWnd shows it or lays
// out its thumbnails.

thread_local bool g_placingThumbnails = false;

using CTaskListThumbnailWnd_DisplayUI_t = int(WINAPI*)(void* pThis, void* taskBtnGroup,
                                                       void* item1, void* item2, DWORD flags);
CTaskListThumbnailWnd_DisplayUI_t CTaskListThumbnailWnd_DisplayUI_Original;
int WINAPI CTaskListThumbnailWnd_DisplayUI_Hook(void* pThis, void* taskBtnGroup, void* item1,
                                                void* item2, DWORD flags) {
    bool outer = std::exchange(g_placingThumbnails, true);
    int result = CTaskListThumbnailWnd_DisplayUI_Original(pThis, taskBtnGroup, item1, item2, flags);
    g_placingThumbnails = outer;
    return result;
}

VoidMethod_t CTaskListThumbnailWnd_LayoutThumbnails_Original;
void WINAPI CTaskListThumbnailWnd_LayoutThumbnails_Hook(void* pThis) {
    bool outer = std::exchange(g_placingThumbnails, true);
    CTaskListThumbnailWnd_LayoutThumbnails_Original(pThis);
    g_placingThumbnails = outer;
}

using SetWindowPos_t = decltype(&SetWindowPos);
SetWindowPos_t SetWindowPos_Original;
BOOL WINAPI SetWindowPos_Hook(HWND hWnd, HWND after, int X, int Y, int cx, int cy, UINT flags) {
    WCHAR cls[32];
    RECT rect;
    if (g_placingThumbnails && !g_unloading && !(flags & SWP_NOMOVE) &&
        GetClassName(hWnd, cls, ARRAYSIZE(cls)) && !_wcsicmp(cls, L"TaskListThumbnailWnd") &&
        GetWindowRect(hWnd, &rect)) {
        if (!(flags & SWP_NOSIZE)) rect = {X, Y, X + cx, Y + cy};
        else OffsetRect(&rect, X - rect.left, Y - rect.top);
        Try([&] {
            POINT offset = PreviewOffset(&rect);
            X += offset.x;
            Y += offset.y;
        });
    }
    return SetWindowPos_Original(hWnd, after, X, Y, cx, cy, flags);
}

// =============================================================================
// TASK VIEW
// =============================================================================
// The dock's away while Task View's open (see AUTO-HIDE), so its row of
// desktops sits at the bottom of the screen, as far up as it's in from the
// sides, not above the taskbar (as in Asteski's "Task View Customizer"). Task View is
// found from its own Loaded handlers: adding one is hooked, then each such
// handler, which gets the element it's for. It's changed, and put back, on its
// own thread.

constexpr wchar_t kTaskViewRoot[] =
    L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskViewTimeline";

using LoadedAdd_t = HRESULT(WINAPI*)(void* pThis, void* handler, winrt::event_token* token);
using HandlerInvoke_t = HRESULT(WINAPI*)(void* pThis, void* sender, void* args);

struct HandlerHook {
    void* target;
    HandlerInvoke_t original;
};

// What Task View had, to put back.
struct TaskViewLayout {
    DWORD thread = 0;
    winrt::weak_ref<wuxc::Grid> grid;
    winrt::weak_ref<wux::FrameworkElement> desktops, windows;
    std::vector<wux::GridLength> rows;
    std::array<wf::IInspectable, 4> desktopValues, windowValues;  // null where unset
};

LoadedAdd_t LoadedAdd_Original;
std::mutex g_taskViewMutex;
[[clang::no_destroy]] std::list<HandlerHook> g_handlerHooks;
[[clang::no_destroy]] std::list<TaskViewLayout> g_taskViews;  // left behind, not freed, at unload

// The properties set on the row of desktops and the windows.
std::array<wux::DependencyProperty, 4> TaskViewProperties() {
    return {wuxc::Grid::RowProperty(), wuxc::Grid::RowSpanProperty(),
            wux::FrameworkElement::VerticalAlignmentProperty(),
            wux::FrameworkElement::MarginProperty()};
}

std::array<wf::IInspectable, 4> ReadTaskViewValues(wux::FrameworkElement const& el) {
    std::array<wf::IInspectable, 4> values;
    auto properties = TaskViewProperties();
    for (size_t i = 0; i < properties.size(); i++) {
        auto value = el.ReadLocalValue(properties[i]);
        if (value != wux::DependencyProperty::UnsetValue()) values[i] = value;
    }
    return values;
}

void PutBackTaskViewValues(wux::FrameworkElement const& el,
                           std::array<wf::IInspectable, 4> const& values) {
    auto properties = TaskViewProperties();
    for (size_t i = 0; i < properties.size(); i++) {
        if (values[i]) el.SetValue(properties[i], values[i]);
        else el.ClearValue(properties[i]);
    }
}

void PlaceTaskViewPart(wux::FrameworkElement const& el, int row,
                       wux::VerticalAlignment alignment, wux::Thickness margin) {
    if (wuxc::Grid::GetRow(el) != row) wuxc::Grid::SetRow(el, row);
    if (wuxc::Grid::GetRowSpan(el) != 1) wuxc::Grid::SetRowSpan(el, 1);
    if (el.VerticalAlignment() != alignment) el.VerticalAlignment(alignment);
    auto m = el.Margin();
    if (m.Left != margin.Left || m.Top != margin.Top || m.Right != margin.Right ||
        m.Bottom != margin.Bottom) {
        el.Margin(margin);
    }
}

// Under Task View's root, an ancestor of `el`: its grid holds the row of
// desktops and the windows, in a row each.
void LayOutTaskView(wux::FrameworkElement const& el) {
    wux::DependencyObject root = el;
    for (int i = 0; root && i < 16 && winrt::get_class_name(root) != kTaskViewRoot; i++) {
        root = wuxm::VisualTreeHelper::GetParent(root);
    }
    if (!root || winrt::get_class_name(root) != kTaskViewRoot) return;
    wuxc::Grid grid{nullptr};
    ForEachDescendant(root, 1, [&grid](wux::FrameworkElement const& child) {
        if (!grid && child.Name() == L"RootGridElement") grid = child.try_as<wuxc::Grid>();
        return false;
    });
    if (!grid || grid.RowDefinitions().Size() != 2) return;
    wux::FrameworkElement desktops{nullptr}, windows{nullptr};
    for (auto const& child : grid.Children()) {
        auto part = child.try_as<wux::FrameworkElement>();
        if (part && part.Name() == L"VirtualDesktopBar") desktops = part;
        if (part && part.Name() == L"SwitchItemListControl") windows = part;
    }
    if (!desktops || !windows) return;

    {
        std::lock_guard lock(g_taskViewMutex);
        DWORD thread = GetCurrentThreadId();
        g_taskViews.remove_if([thread](auto& v) { return v.thread == thread && !v.grid.get(); });
        bool known = std::any_of(g_taskViews.begin(), g_taskViews.end(), [&](auto& v) {
            return v.thread == thread && v.grid.get() == grid;
        });
        if (!known) {
            auto& v = g_taskViews.emplace_back();
            v.thread = thread;
            v.grid = winrt::make_weak(grid);
            v.desktops = winrt::make_weak(desktops);
            v.windows = winrt::make_weak(windows);
            for (auto const& row : grid.RowDefinitions()) v.rows.push_back(row.Height());
            v.desktopValues = ReadTaskViewValues(desktops);
            v.windowValues = ReadTaskViewValues(windows);
        }
    }

    auto rows = grid.RowDefinitions();
    wux::GridLength star{1, wux::GridUnitType::Star}, fit{1, wux::GridUnitType::Auto};
    if (rows.GetAt(0).Height() != star) rows.GetAt(0).Height(star);
    if (rows.GetAt(1).Height() != fit) rows.GetAt(1).Height(fit);
    auto d = desktops.Margin(), w = windows.Margin();
    PlaceTaskViewPart(windows, 0, wux::VerticalAlignment::Stretch, {w.Left, w.Top, w.Right, 0});
    PlaceTaskViewPart(desktops, 1, wux::VerticalAlignment::Bottom,
                      {d.Left, d.Top, d.Right, d.Left});  // as far up as in from the side
}

// On the calling thread, the Task Views it owns.
void PutBackTaskViews() {
    DWORD thread = GetCurrentThreadId();
    std::list<TaskViewLayout> mine;
    {
        std::lock_guard lock(g_taskViewMutex);
        for (auto it = g_taskViews.begin(); it != g_taskViews.end();) {
            auto next = std::next(it);
            if (it->thread == thread) mine.splice(mine.end(), g_taskViews, it);
            it = next;
        }
    }
    for (auto& v : mine) {
        Try([&] {
            auto grid = v.grid.get();
            auto rows = grid ? grid.RowDefinitions() : nullptr;
            if (rows && rows.Size() == v.rows.size()) {
                for (uint32_t i = 0; i < rows.Size(); i++) rows.GetAt(i).Height(v.rows[i]);
            }
            if (auto desktops = v.desktops.get()) PutBackTaskViewValues(desktops, v.desktopValues);
            if (auto windows = v.windows.get()) PutBackTaskViewValues(windows, v.windowValues);
        });
    }
}

void RestoreTaskViews() {
    std::vector<DWORD> threads;
    {
        std::lock_guard lock(g_taskViewMutex);
        for (auto& v : g_taskViews) {
            if (std::find(threads.begin(), threads.end(), v.thread) == threads.end()) {
                threads.push_back(v.thread);
            }
        }
    }
    for (DWORD thread : threads) {
        HWND w = nullptr;
        EnumThreadWindows(
            thread,
            [](HWND h, LPARAM l) -> BOOL {
                *(HWND*)l = h;
                return FALSE;
            },
            (LPARAM)&w);
        if (w) RunFromWindowThread(w, [](void*) { PutBackTaskViews(); }, nullptr);
    }
}

bool IsTaskViewCode(void* address) {
    HMODULE module = nullptr;
    if (!address || !GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                                            GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                        (LPCWSTR)address, &module)) {
        return false;
    }
    return module == GetModuleHandle(L"WindowsInternal.ComposableShell.Experiences.Switcher.dll") ||
           module == GetModuleHandle(L"twinui.pcshell.dll");
}

HRESULT WINAPI HandlerInvoke_Hook(void* pThis, void* sender, void* args) {
    void* target = (*(void***)pThis)[3];
    HandlerInvoke_t original = nullptr;
    {
        std::lock_guard lock(g_taskViewMutex);
        for (auto& h : g_handlerHooks) {
            if (h.target == target) original = h.original;
        }
    }
    if (!original) return E_UNEXPECTED;
    HRESULT hr = original(pThis, sender, args);
    if (!g_unloading && sender) {
        Try([&] {
            wf::IInspectable source;
            winrt::copy_from_abi(source, sender);
            if (auto el = source.try_as<wux::FrameworkElement>()) LayOutTaskView(el);
        });
    }
    return hr;
}

// A Loaded handler Task View adds: its Invoke is hooked, once per kind.
HRESULT WINAPI LoadedAdd_Hook(void* pThis, void* handler, winrt::event_token* token) {
    void* caller = __builtin_return_address(0);
    HRESULT hr = LoadedAdd_Original(pThis, handler, token);
    void* target = handler ? (*(void***)handler)[3] : nullptr;
    if (FAILED(hr) || g_unloading || !target ||
        (!IsTaskViewCode(caller) && !IsTaskViewCode(target))) {
        return hr;
    }
    {
        std::lock_guard lock(g_taskViewMutex);
        for (auto& h : g_handlerHooks) {
            if (h.target == target) return hr;
        }
        auto& h = g_handlerHooks.emplace_back(HandlerHook{target, nullptr});
        if (!WindhawkUtils::SetFunctionHook((HandlerInvoke_t)target, HandlerInvoke_Hook,
                                            &h.original)) {
            g_handlerHooks.pop_back();
            return hr;
        }
    }
    Wh_ApplyHookOperations();
    return hr;
}

// On a XAML thread, for the slot shared by every element's add_Loaded.
void HookTaskView() {
    static bool hooked = false;
    if (std::exchange(hooked, true)) return;
    Try([] {
        wuxc::Grid probe;
        auto vtable = *(void***)winrt::get_abi(probe.as<wux::IFrameworkElement>());
        if (WindhawkUtils::SetFunctionHook((LoadedAdd_t)vtable[43], LoadedAdd_Hook,
                                           &LoadedAdd_Original)) {
            Wh_ApplyHookOperations();
        }
    });
}

// =============================================================================
// HOOKS: MAXIMIZED WINDOWS
// =============================================================================
// Maximized windows reach down to the dock, and magnified icons rise over them:
// - Auto-hide is turned on, so Windows keeps no space for the taskbar, which
//   is kept from hiding (as in "Taskbar auto-hide when maximized").
// - With Auto-hide Off, an app bar keeps the dock's strip free on each screen.
//   Otherwise windows always have the whole screen, so none is moved when the
//   dock shows or hides.
// - The taller taskbar window is clipped to that strip while not magnifying,
//   and to the tray (if shown) while the dock is hidden.

constexpr UINT kTraySettingMessage = WM_USER + 0x1CA;  // TrayUI::_HandleTrayPrivateSettingMessage
constexpr WPARAM kTraySettingAutoHideGet = 3;
constexpr WPARAM kTraySettingAutoHideSet = 4;
constexpr UINT_PTR kTrayHideTimer = 2;

// Saved per user, so auto-hide is put back even after Explorer restarts.
bool g_managingAutoHide = false;
bool g_autoHideBefore = false;

std::wstring UserValueName(PCWSTR name) {
    static std::wstring sid = [] {
        std::wstring result;
        HANDLE token;
        if (!OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &token)) return result;
        alignas(TOKEN_USER) BYTE buffer[sizeof(TOKEN_USER) + SECURITY_MAX_SID_SIZE];
        DWORD size;
        PWSTR text;
        if (GetTokenInformation(token, TokenUser, buffer, sizeof(buffer), &size) &&
            ConvertSidToStringSidW(((TOKEN_USER*)buffer)->User.Sid, &text)) {
            result = text;
            LocalFree(text);
        }
        CloseHandle(token);
        return result;
    }();
    return std::wstring(name) + L"_" + sid;
}

// How far up from the screen's bottom edge the taskbar shows, in pixels at
// 100%: the dock, or the tray if it's ever shown. The tray's menus open just
// above it (see Menus::AboveTaskbarTop). Quick Settings is placed in its own
// process, which reads it from what's saved here.
constexpr PCWSTR kTaskbarTopValue = L"taskbarTop";

double TrayRowSpan();

int TaskbarTop() {
    double top = std::max<double>(g_size.bottomGap + g_size.dockHeight, kStockTaskbarHeight);
    if (g_settings.tray != Show::Hidden) top = std::max(top, TrayRowSpan());
    return (int)std::ceil(top);
}

void SaveTaskbarTop() {
    static int saved = -1;
    int value = TaskbarTop();
    if (value == saved) return;
    saved = value;
    Wh_SetIntValue(UserValueName(kTaskbarTopValue).c_str(), value);
}

using TrayUI__Hide_t = void(WINAPI*)(void* pThis);
TrayUI__Hide_t TrayUI__Hide_Original;
using CSecondaryTray__AutoHide_t = void(WINAPI*)(void* pThis, bool param1);
CSecondaryTray__AutoHide_t CSecondaryTray__AutoHide_Original;

// Only with the hook that keeps the taskbar from hiding: without taskbar.dll's
// symbols, turning auto-hide on would really hide it, and the dock with it.
// Otherwise the dock stays as Windows lays the taskbar out, and a setting left
// on by an earlier session is put back.
bool KeepTaskbarShown() { return !g_unloading && TrayUI__Hide_Original; }

void ApplyAutoHide() {
    HWND tb = FindTaskbar();
    if (!tb) return;
    if (KeepTaskbarShown()) {
        if (!g_managingAutoHide) {
            g_autoHideBefore = SendMessage(tb, kTraySettingMessage, kTraySettingAutoHideGet, 0);
            g_managingAutoHide = true;
        }
        SendMessage(tb, kTraySettingMessage, kTraySettingAutoHideSet, TRUE);
    } else if (g_managingAutoHide) {
        SendMessage(tb, kTraySettingMessage, kTraySettingAutoHideSet, g_autoHideBefore);
        g_managingAutoHide = false;
    }
    Wh_SetIntValue(UserValueName(L"managingAutoHide").c_str(), g_managingAutoHide);
    Wh_SetIntValue(UserValueName(L"autoHideBefore").c_str(), g_autoHideBefore);
}

void WINAPI TrayUI__Hide_Hook(void* pThis) {
    if (!KeepTaskbarShown()) return TrayUI__Hide_Original(pThis);
    if (HWND tb = FindTaskbar()) KillTimer(tb, kTrayHideTimer);
}

void WINAPI CSecondaryTray__AutoHide_Hook(void* pThis, bool param1) {
    if (!KeepTaskbarShown()) return CSecondaryTray__AutoHide_Original(pThis, param1);
    // Otherwise kept shown: Windows' hide is skipped.
}

// The strip kept free: the dock and the gap under it, at least as tall as the
// stock taskbar. The tray, when it shows, is added to it (see TaskbarRegion).
int StripHeight(UINT dpi) {
    float height = std::max(g_size.bottomGap + g_size.dockHeight, (float)kStockTaskbarHeight);
    return MulDiv((int)std::ceil(height), dpi, 96);
}

// While an app's icon slides in or out of a shown dock, Windows' animation can
// rise past the strip, so the whole window shows for a moment.
constexpr UINT kIconsMovingMs = 800;
ULONGLONG g_iconsMovingUntil = 0;

bool IconsMoving() { return GetTickCount64() < g_iconsMovingUntil && !DockHidden(); }

void NoteIconsMoving() {
    HWND w = g_modWindow;
    if (!w || !SetTimer(w, kIconsMovingTimer, kIconsMovingMs, nullptr)) return;
    g_iconsMovingUntil = GetTickCount64() + kIconsMovingMs;
    ScheduleOverWindows(false);
}

// No region (null) shows the whole window.
HRGN TaskbarRegion(HWND tb) {
    RECT window;
    if (!KeepTaskbarShown() || g_dockExpanded || IconsMoving() || !GetWindowRect(tb, &window)) {
        return nullptr;
    }
    int width = window.right - window.left, height = window.bottom - window.top;
    UINT dpi = GetDpiForWindow(tb);
    bool trayShown = TrayShown() && !g_taskViewOpen;
    HRGN region = DockFullyHidden()
                      ? CreateRectRgn(0, 0, 0, 0)
                      : CreateRectRgn(0, std::max(0, height - StripHeight(dpi)), width, height);
    if (!trayShown) return region;
    // The tray, with its background reaching past its left and top.
    int trayWidth = TrayWidthFor(width, height);
    if (trayWidth <= 0) trayWidth = MulDiv(200, dpi, 96);
    trayWidth += MulDiv((int)std::ceil(TrayPlateLeft()), dpi, 96);
    int trayHeight = MulDiv((int)std::ceil(TrayRowSpan()), dpi, 96);
    HRGN tray = CreateRectRgn(std::max(0, width - trayWidth), std::max(0, height - trayHeight),
                              width, height);
    CombineRgn(region, region, tray, RGN_OR);
    DeleteObject(tray);
    return region;
}

void ClipTaskbars() {
    ForEachTaskbarWindow([](HWND tb, bool) {
        HRGN want = TaskbarRegion(tb);
        HRGN have = CreateRectRgn(0, 0, 0, 0);
        bool hasRegion = GetWindowRgn(tb, have) != ERROR;
        bool same = want ? hasRegion && EqualRgn(have, want) : !hasRegion;
        DeleteObject(have);
        if (!same) SetWindowRgn(tb, want, TRUE);  // the window owns it now
        else if (want) DeleteObject(want);
    });
}

struct AppBar {
    HWND hwnd;
    RECT rect;
};
std::vector<AppBar> g_appBars;

void RemoveAppBars() {
    for (auto& bar : g_appBars) {
        APPBARDATA abd{sizeof(abd)};
        abd.hWnd = bar.hwnd;
        SHAppBarMessage(ABM_REMOVE, &abd);
        DestroyWindow(bar.hwnd);
    }
    g_appBars.clear();
}

void AddAppBar(RECT const& rect) {
    HWND w = CreateWindowEx(WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE, kWindowClass, L"", WS_POPUP, 0, 0,
                            0, 0, nullptr, nullptr, ModuleInstance(), nullptr);
    if (!w) return;
    g_appBars.push_back({w, rect});

    APPBARDATA abd{sizeof(abd)};
    abd.hWnd = w;
    abd.uCallbackMessage = kAppBarMessage;
    SHAppBarMessage(ABM_NEW, &abd);
    abd.uEdge = ABE_BOTTOM;
    abd.rc = rect;
    SHAppBarMessage(ABM_QUERYPOS, &abd);
    abd.rc.top = abd.rc.bottom - (rect.bottom - rect.top);
    SHAppBarMessage(ABM_SETPOS, &abd);
}

// Only changed when they differ: changes are announced to all app bars, these
// included, which would otherwise loop.
void UpdateAppBars() {
    std::vector<RECT> want;
    if (KeepTaskbarShown() && g_settings.autoHide == AutoHide::Off) {
        ForEachTaskbarWindow([&want](HWND tb, bool) {
            HMONITOR monitor = MonitorFromWindow(tb, MONITOR_DEFAULTTONEAREST);
            MONITORINFO info{sizeof(info)};
            UINT dpiX, dpiY;
            if (!GetMonitorInfo(monitor, &info) ||
                FAILED(GetDpiForMonitor(monitor, MDT_EFFECTIVE_DPI, &dpiX, &dpiY))) {
                return;
            }
            RECT rect = info.rcMonitor;
            rect.top = rect.bottom - StripHeight(dpiY);
            want.push_back(rect);
        });
    }
    bool same = want.size() == g_appBars.size();
    for (size_t i = 0; same && i < want.size(); i++) same = EqualRect(&want[i], &g_appBars[i].rect);
    if (same) return;
    RemoveAppBars();
    if (want.empty() || !RegisterWindowClass()) return;
    for (auto& rect : want) AddAppBar(rect);
}

// Run once from the message loop for any number of requests.
// 1 = update, 2 = and auto-hide.
int g_overWindowsPending = 0;

void ScheduleOverWindows(bool autoHide) {
    bool post = g_overWindowsPending == 0;
    g_overWindowsPending = std::max(g_overWindowsPending, autoHide ? 2 : 1);
    if (!post) return;
    HWND w = EnsureModWindow();
    if (!w || !PostMessage(w, kUpdateOverWindowsMessage, 0, 0)) g_overWindowsPending = 0;
}

void UpdateOverWindows() {
    int pending = std::exchange(g_overWindowsPending, 0);
    if (g_unloading || !pending) return;
    if (pending == 2) ApplyAutoHide();
    UpdateAppBars();
    ClipTaskbars();
}

// Also done whenever a taskbar appears, as the mod often loads first.
void ApplyMagnifyOverWindows() {
    if (HWND tb = FindTaskbar()) {
        RunFromWindowThread(tb, [](void*) { ScheduleOverWindows(true); }, nullptr);
    }
}

LRESULT CALLBACK ModWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case kAppBarMessage:
            if (wParam == ABN_POSCHANGED) ScheduleOverWindows(false);
            return 0;
        case WM_DISPLAYCHANGE:
            ScheduleOverWindows(false);
            ScheduleMaximizedCheck();
            break;
        case kUpdateOverWindowsMessage:
            UpdateOverWindows();
            return 0;
        case kTrashChangedMessage:
            CheckRecycleBinSoon();
            return 0;
        case kTrashCheckedMessage:
            if (!g_unloading) Try(UpdateTrashIcons);
            return 0;
        case kMoveExplorerMessage:
            if (!g_unloading) MoveExplorerNow();
            return 0;
        case kGlassStopMessage:
            Try(GlassShutdown, L"Liquid Glass stop");
            return 0;
        case kGlassFreezeMessage:
            if (!g_unloading) Try(ToggleGlassFrozen, L"Liquid Glass freeze");
            return 0;
        case kInfoKeyMessage:
            if (!g_unloading) Try(OnInfoKey, L"Info card");
            return 0;
        case kInfoCloseMessage:
            if (!g_unloading && g_info.open) {
                CloseInfoCard();
                StartFrames();  // the name label, back
            }
            return 0;
        case kGlassFrameMessage:
            g_glassFramePosted = false;  // the next picture asks again
            if (!g_unloading && g_glassActive) Try(GlassTick, L"Liquid Glass");
            return 0;
        case WM_TIMER:
            if (wParam == kPollTimer) {
                Try(OnPollTimer);
                return 0;
            }
            if (wParam == kGlassTimer) {
                if (g_unloading) KillTimer(hWnd, kGlassTimer);
                else Try(GlassTick, L"Liquid Glass");
                return 0;
            }
            if (wParam == kTrayClipTimer) {
                KillTimer(hWnd, kTrayClipTimer);
                ScheduleOverWindows(false);
                return 0;
            }
            if (wParam == kIconsMovingTimer) {
                KillTimer(hWnd, kIconsMovingTimer);
                ScheduleOverWindows(false);  // clipped again
                return 0;
            }
            if (wParam == kMaximizedCheckTimer) {
                KillTimer(hWnd, kMaximizedCheckTimer);
                CheckWindowMaximized();
                return 0;
            }
            if (wParam == kSquircleRetryTimer) {
                KillTimer(hWnd, kSquircleRetryTimer);
                if (!g_unloading) RetrySquircles();
                return 0;
            }
            if (wParam == kReapplyTimer) {
                // 4, 8 and 12 seconds after the taskbar was found.
                if (++g_reapplyCount >= 3) KillTimer(hWnd, kReapplyTimer);
                if (!g_unloading) ScheduleOverWindows(true);
                return 0;
            }
            break;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}

// =============================================================================
// HOOK INSTALLATION
// =============================================================================

bool HookTaskbarDllSymbols() {
    HMODULE module = LoadLibraryEx(L"taskbar.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (!module) return false;

    WindhawkUtils::SYMBOL_HOOK taskbarDllHooks[] = {
        {{LR"(public: void __cdecl TrayUI::_StuckTrayChange(void))"},
         &TrayUI__StuckTrayChange_Original},
        {{LR"(public: void __cdecl TrayUI::_HandleSettingChange(struct HWND__ *,unsigned int,unsigned __int64,__int64))"},
         &TrayUI__HandleSettingChange_Original, TrayUI__HandleSettingChange_Hook},
        // Maximized windows
        {{LR"(public: void __cdecl TrayUI::_Hide(void))"},
         &TrayUI__Hide_Original, TrayUI__Hide_Hook, true},
        {{LR"(private: void __cdecl CSecondaryTray::_AutoHide(bool))"},
         &CSecondaryTray__AutoHide_Original, CSecondaryTray__AutoHide_Hook, true},
        // Jump list placement
        {{LR"(protected: long __cdecl CTaskListWnd::_ComputeJumpViewPosition(struct ITaskBtnGroup *,int,struct Windows::Foundation::Point &,enum Windows::UI::Xaml::HorizontalAlignment &,enum Windows::UI::Xaml::VerticalAlignment &)const )"},
         &CTaskListWnd_ComputeJumpViewPosition_Original, CTaskListWnd_ComputeJumpViewPosition_Hook, true},
        {{LR"(struct tagRECT __cdecl ToRawPixelsInDesktopCoordinates(struct winrt::Windows::Foundation::Rect const &,unsigned int,struct HWND__ *))"},
         &ToRawPixelsInDesktopCoordinates_Original, ToRawPixelsInDesktopCoordinates_Hook, true},
        // Window previews, older builds (gone in 10.0.26100.8313 and later)
        {{LR"(protected: long __cdecl CTaskListWnd::_DisplayExtendedUI(struct ITaskBtnGroup *,int,unsigned long,int))"},
         &CTaskListWnd__DisplayExtendedUI_Original, CTaskListWnd__DisplayExtendedUI_Hook, true},
        {{LR"(protected: void __cdecl CTaskListWnd::_ShowToolTip(enum ShowToolTipFlags))"},
         &CTaskListWnd__ShowToolTip_Original, CTaskListWnd__ShowToolTip_Hook, true},
        {{LR"(public: virtual int __cdecl CTaskListThumbnailWnd::DisplayUI(struct ITaskBtnGroup *,struct ITaskItem *,struct ITaskItem *,unsigned long))"},
         &CTaskListThumbnailWnd_DisplayUI_Original, CTaskListThumbnailWnd_DisplayUI_Hook, true},
        {{LR"(public: virtual void __cdecl CTaskListThumbnailWnd::LayoutThumbnails(void))"},
         &CTaskListThumbnailWnd_LayoutThumbnails_Original, CTaskListThumbnailWnd_LayoutThumbnails_Hook, true},
    };
    return WindhawkUtils::HookSymbols(module, taskbarDllHooks, ARRAYSIZE(taskbarDllHooks));
}

// The name the symbol extraction script expects for a list of hooks that
// isn't one of the hook arrays itself.
using COMBINED_SH = WindhawkUtils::SYMBOL_HOOK;

// Newer builds keep the tray in SystemTray.dll, older ones in Taskbar.View.dll.
std::vector<COMBINED_SH> GetTrayHooks() {
    // SystemTray.dll, Taskbar.View.dll
    WindhawkUtils::SYMBOL_HOOK trayHooks[] = {
        {{LR"(private: double __cdecl winrt::SystemTray::implementation::SystemTrayController::GetFrameSize(enum winrt::WindowsUdk::UI::Shell::TaskbarSize))"},
         &SystemTrayController_GetFrameSize_Original, SystemTray_GetFrameSize_Hook<SystemTrayController_GetFrameSize_Original>, true},
        {{LR"(private: double __cdecl winrt::SystemTray::implementation::SystemTraySecondaryController::GetFrameSize(enum winrt::WindowsUdk::UI::Shell::TaskbarSize))"},
         &SystemTraySecondaryController_GetFrameSize_Original, SystemTray_GetFrameSize_Hook<SystemTraySecondaryController_GetFrameSize_Original>, true},
        {{LR"(private: void __cdecl winrt::SystemTray::implementation::SystemTrayController::UpdateFrameSize(void))"},
         &SystemTrayController_UpdateFrameSize_Address, nullptr, true},
        {{LR"(private: void __cdecl winrt::SystemTray::implementation::SystemTraySecondaryController::UpdateFrameSize(void))"},
         &SystemTraySecondaryController_UpdateFrameSize_Original, SystemTray_UpdateFrameSize_Hook<SystemTraySecondaryController_UpdateFrameSize_Original>, true},
        {{LR"(public: __cdecl winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<struct winrt::SystemTray::SystemTrayFrame>::Height(double)const )"},
         &SystemTrayFrame_Height_Original, SystemTrayFrame_Height_Hook, true},
        {{LR"(void __cdecl winrt::impl::consume_general<struct winrt::Windows::UI::Xaml::IFrameworkElement,struct winrt::SystemTray::SystemTrayFrame,int (__cdecl winrt::impl::abi<struct winrt::Windows::UI::Xaml::IFrameworkElement,void>::type::*)(double) noexcept,double &>(struct winrt::SystemTray::SystemTrayFrame const *,int (__cdecl winrt::impl::abi<struct winrt::Windows::UI::Xaml::IFrameworkElement,void>::type::*)(double) noexcept,double &))"},
         &SystemTrayFrame_SetDouble_Original, SystemTrayFrame_SetDouble_Hook, true},
    };
    return {std::make_move_iterator(std::begin(trayHooks)),
            std::make_move_iterator(std::end(trayHooks))};
}

bool HookTaskbarViewSymbols(HMODULE module, bool withTray) {
    // Taskbar.View.dll
    WindhawkUtils::SYMBOL_HOOK taskbarViewHooks[] = {
        {{LR"(public: static double __cdecl winrt::Taskbar::implementation::TaskbarConfiguration::GetFrameSize(enum winrt::WindowsUdk::UI::Shell::TaskbarSize))"},
         &TaskbarConfiguration_GetFrameSize_Original, TaskbarConfiguration_GetFrameSize_Hook, true},
#ifdef _M_ARM64
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskbarConfiguration::UpdateFrameSize(void))"},
         &TaskbarConfiguration_UpdateFrameSize_Address, nullptr, true},
        {{LR"(public: void __cdecl winrt::event<struct winrt::delegate<> >::operator()<>(void))"},
         &Event_operator_call_Original, Event_operator_call_Hook, true},
#endif
        {{LR"(public: __cdecl winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<struct winrt::Taskbar::implementation::TaskbarFrame>::MaxHeight(double)const )"},
         &TaskbarFrame_MaxHeight_Original, nullptr, true},
        {{LR"(public: __cdecl winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<struct winrt::Taskbar::implementation::TaskbarFrame>::Height(double)const )"},
         &TaskbarFrame_Height_Original, TaskbarFrame_Height_Hook, true},  // gone in 24H2
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskbarController::OnGroupingModeChanged(void))"},
         &TaskbarController_OnGroupingModeChanged_Address, nullptr, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskbarController::UpdateFrameHeight(void))"},
         &TaskbarController_UpdateFrameHeight_Original, TaskbarController_UpdateFrameHeight_Hook, true},
        // Pointer
        {{LR"(public: virtual int __cdecl winrt::impl::produce<struct winrt::Taskbar::implementation::TaskbarFrame,struct winrt::Windows::UI::Xaml::Controls::IControlOverrides>::OnPointerMoved(void *))"},
         &TaskbarFrame_OnPointerMoved_Original, TaskbarFrame_OnPointerMoved_Hook, true},
        {{LR"(public: virtual int __cdecl winrt::impl::produce<struct winrt::Taskbar::implementation::TaskbarFrame,struct winrt::Windows::UI::Xaml::Controls::IControlOverrides>::OnPointerExited(void *))"},
         &TaskbarFrame_OnPointerExited_Original, TaskbarFrame_OnPointerExited_Hook, true},
        // Window previews
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::HoverFlyoutModel::TransitionToFlyoutVisibleStickyState(struct winrt::hstring))"},
         &HoverFlyoutModel_TransitionToFlyoutVisibleStickyState_Original, HoverFlyoutModel_TransitionToFlyoutVisibleStickyState_Hook, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::HoverFlyoutController::ShowTaskListButtonHoverFlyout(class std::vector<struct winrt::weak_ref<struct winrt::Windows::UI::Xaml::FrameworkElement>,class std::allocator<struct winrt::weak_ref<struct winrt::Windows::UI::Xaml::FrameworkElement> > >,struct winrt::Windows::Foundation::Collections::IVector<struct winrt::Windows::Foundation::IInspectable> const &,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,enum winrt::WindowsUdk::UI::Shell::TaskbarFlyoutKind))"},
         &HoverFlyoutController_ShowTaskListButtonHoverFlyout_Original, HoverFlyoutController_ShowTaskListButtonHoverFlyout_Hook, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::HoverFlyoutController::ShowTaskListButtonHoverFlyout(class std::vector<struct winrt::weak_ref<struct winrt::Windows::UI::Xaml::FrameworkElement>,class std::allocator<struct winrt::weak_ref<struct winrt::Windows::UI::Xaml::FrameworkElement> > >,struct winrt::Windows::Foundation::Collections::IVector<struct winrt::Windows::Foundation::IInspectable> const &,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind))"},
         &HoverFlyoutController_ShowTaskListButtonHoverFlyout_Old_Original, HoverFlyoutController_ShowTaskListButtonHoverFlyout_Old_Hook, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::FlyoutFrame::UpdateFlyoutPosition(void))"},
         &FlyoutFrame_UpdateFlyoutPosition_Original, FlyoutFrame_UpdateFlyoutPosition_Hook, true},
        // Jump list placement
        {{LR"(public: void __cdecl winrt::Taskbar::implementation::TaskbarResources::OnTaskListButtonContextRequested(struct winrt::Windows::UI::Xaml::UIElement const &,struct winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs const &))"},
         &TaskbarResources_OnTaskListButtonContextRequested_Original, TaskbarResources_OnTaskListButtonContextRequested_Hook, true},
        {{LR"(public: static void __cdecl winrt::Taskbar::implementation::TaskListButtonHandlers::HandleContextRequested(struct winrt::Windows::UI::Xaml::UIElement const &,struct winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs const &))"},
         &TaskListButtonHandlers_HandleContextRequested_Original, TaskListButtonHandlers_HandleContextRequested_Hook, true},
        // Dragging
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::OnDragStartedGesture(struct winrt::Windows::Foundation::Point))"},
         &TaskListButton_OnDragStartedGesture_Original, TaskListButton_OnDragStartedGesture_Hook, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::UpdateDrag(struct winrt::Windows::Foundation::Point))"},
         &TaskListButton_UpdateDrag_Original, TaskListButton_UpdateDrag_Hook, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::OnDragCompletedGesture(void))"},
         &TaskListButton_OnDragCompletedGesture_Original, TaskListButton_OnDragCompletedGesture_Hook, true},
        {{LR"(public: struct winrt::Taskbar::implementation::DropPlaceholder __cdecl winrt::Taskbar::implementation::TaskListDragOperation::GetDropPlaceholder(class std::vector<struct winrt::Windows::Foundation::Rect,class std::allocator<struct winrt::Windows::Foundation::Rect> > const &,struct std::pair<unsigned int,unsigned int>,struct winrt::Windows::Foundation::Rect,enum winrt::Taskbar::implementation::RearrangeDirection,struct winrt::Taskbar::implementation::GroupBoundsCalculator const *,bool))",
          // Older builds lack the last parameter; passing it anyway is harmless.
          LR"(public: struct winrt::Taskbar::implementation::DropPlaceholder __cdecl winrt::Taskbar::implementation::TaskListDragOperation::GetDropPlaceholder(class std::vector<struct winrt::Windows::Foundation::Rect,class std::allocator<struct winrt::Windows::Foundation::Rect> > const &,struct std::pair<unsigned int,unsigned int>,struct winrt::Windows::Foundation::Rect,enum winrt::Taskbar::implementation::RearrangeDirection,struct winrt::Taskbar::implementation::GroupBoundsCalculator const *))"},
         &TaskListDragOperation_GetDropPlaceholder_Original, TaskListDragOperation_GetDropPlaceholder_Hook, true},
        // Icon resolution
        {{LR"(public: double __cdecl winrt::Taskbar::implementation::TaskbarConfiguration::GetIconHeightInViewPixels(void))"},
         &TaskbarConfiguration_GetIconHeightInViewPixels_Original, TaskbarConfiguration_GetIconHeightInViewPixels_Hook, true},
        {{LR"(public: struct winrt::Taskbar::implementation::TaskbarFrameMetrics __cdecl winrt::Taskbar::implementation::TaskbarFrame::GetMetrics(void)const )"},
         &TaskbarFrame_GetMetrics_Original, TaskbarFrame_GetMetrics_Hook, true},
        {{LR"(public: void __cdecl winrt::Taskbar::implementation::TaskListButton::IconHeight(double))"},
         &TaskListButton_IconHeight_Address, nullptr, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::UpdateButtonPadding(void))"},
         &TaskListButton_UpdateButtonPadding_Original, ButtonUpdate_Hook<TaskListButton_UpdateButtonPadding_Original>, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::UpdateVisualStates(void))"},
         &TaskListButton_UpdateVisualStates_Original, ButtonUpdate_Hook<TaskListButton_UpdateVisualStates_Original>, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::UpdateIconColumnDefinition(void))"},
         &TaskListButton_UpdateIconColumnDefinition_Original, TaskListButton_UpdateIconColumnDefinition_Hook, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::UpdateMultiWindowClip(void))"},
         &TaskListButton_UpdateMultiWindowClip_Original, StockIconHeight_Hook<TaskListButton_UpdateMultiWindowClip_Original>, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::CreateMultiWindowClip(void))"},
         &TaskListButton_CreateMultiWindowClip_Original, StockIconHeight_Hook<TaskListButton_CreateMultiWindowClip_Original>, true},
        {{LR"(private: void __cdecl winrt::Taskbar::implementation::TaskListButton::UpdateBadge(void))"},
         &TaskListButton_UpdateBadge_Original, StockIconHeight_Hook<TaskListButton_UpdateBadge_Original>, true},
        {{LR"(public: void __cdecl winrt::Taskbar::implementation::TaskListButton::OverlayIcon(struct winrt::Windows::Storage::Streams::IRandomAccessStream const &))"},
         &TaskListButton_OverlayIcon_Original, TaskListButton_OverlayIcon_Hook, true},
        {{LR"(public: double __cdecl winrt::Taskbar::implementation::ExperienceToggleButton::IconHeight(void)const )"},
         &ExperienceToggleButton_IconHeight_get, nullptr, true},
        {{LR"(public: void __cdecl winrt::Taskbar::implementation::ExperienceToggleButton::IconHeight(double))"},
         &ExperienceToggleButton_IconHeight_Original, DockIconHeight_Hook<ExperienceToggleButton_IconHeight_Original>, true},
        {{LR"(protected: virtual void __cdecl winrt::Taskbar::implementation::ExperienceToggleButton::UpdateButtonPadding(void))"},
         &ExperienceToggleButton_UpdateButtonPadding_Original, ExperienceToggleButton_UpdateButtonPadding_Hook, true},
        {{LR"(public: void __cdecl winrt::Microsoft::Windows::Taskbar::implementation::TaskbarComponentHost::IconHeight(double))"},
         &TaskbarComponentHost_IconHeight_Original, DockIconHeight_Hook<TaskbarComponentHost_IconHeight_Original>, true},
    };
    // On builds with the tray here too, its symbols are looked up in the same call.
    std::vector<COMBINED_SH> allHooks(std::make_move_iterator(std::begin(taskbarViewHooks)),
                                      std::make_move_iterator(std::end(taskbarViewHooks)));
    if (withTray) {
        for (auto& hook : GetTrayHooks()) allHooks.push_back(std::move(hook));
    }
    if (!WindhawkUtils::HookSymbols(module, allHooks.data(), allHooks.size())) return false;
    if (TaskListButton_IconHeight_Address) GetIconHeightOffset();  // found up front
    if (withTray) HookTrayUpdateFrameSize();
#ifdef _M_ARM64
    HookFrameSizeUpdate();
#endif
    return true;
}

bool HookTraySymbols(HMODULE module) {
    auto systemTrayHooks = GetTrayHooks();
    if (!WindhawkUtils::HookSymbols(module, systemTrayHooks.data(), systemTrayHooks.size())) {
        return false;
    }
    HookTrayUpdateFrameSize();
    return true;
}

// Taskbar.View.dll before version 2604 contains the system tray too.
bool TaskbarViewHasTray(HMODULE module) {
    HRSRC res = FindResource(module, MAKEINTRESOURCE(VS_VERSION_INFO), RT_VERSION);
    HGLOBAL global = res ? LoadResource(module, res) : nullptr;
    void* data = global ? LockResource(global) : nullptr;
    VS_FIXEDFILEINFO* info = nullptr;
    UINT size = 0;
    if (!data || !VerQueryValue(data, L"\\", (void**)&info, &size) || !size) return false;
    return HIWORD(info->dwFileVersionMS) < 2604;
}

std::atomic<bool> g_taskbarViewHooked = false;
std::atomic<bool> g_trayHooked = false;

// Logs the features whose hooks didn't take, for bug reports. When a DLL's
// symbols can't be had (as right after some Windows updates), every hook in it
// is missing at once. Only hooks present on all supported builds are listed.
void LogMissingHooks() {
    struct {
        const void* hook;
        PCWSTR feature;
    } hooks[] = {
        {(void*)TrayUI__HandleSettingChange_Original, L"size changes before Explorer restarts"},
        {(void*)TrayUI__Hide_Original, L"Auto-hide (taskbar.dll)"},
        {(void*)CTaskListWnd_ComputeJumpViewPosition_Original, L"right-click menu placement"},
#ifdef _M_ARM64
        {(void*)TaskbarConfiguration_UpdateFrameSize_Address, L"the taller taskbar"},
#else
        {(void*)TaskbarConfiguration_GetFrameSize_Original, L"the taller taskbar"},
#endif
        {(void*)TaskbarFrame_OnPointerMoved_Original, L"magnification"},
        {(void*)TaskbarConfiguration_GetIconHeightInViewPixels_Original, L"Use High Resolution Icons"},
        {(void*)TaskListButton_OnDragStartedGesture_Original, L"Keep File Explorer First"},
    };
    int missing = 0;
    for (auto& h : hooks) {
        if (h.hook) continue;
        Wh_Log(L"Not hooked, so not working: %s", h.feature);
        missing++;
    }
    if (!missing) Wh_Log(L"All hooks in place");
}

// Hooks whichever taskbar DLLs are loaded and not hooked yet. Returns whether
// anything new was hooked.
bool HookTaskbarModules() {
    bool hooked = false;
    if (HMODULE view = GetModuleHandle(L"Taskbar.View.dll");
        view && !g_taskbarViewHooked.exchange(true)) {
        bool withTray = !GetModuleHandle(L"SystemTray.dll") && TaskbarViewHasTray(view) &&
                        !g_trayHooked.exchange(true);
        HookTaskbarViewSymbols(view, withTray);
        LogMissingHooks();
        hooked = true;
    }
    if (HMODULE tray = GetModuleHandle(L"SystemTray.dll"); tray && !g_trayHooked.exchange(true)) {
        HookTraySymbols(tray);
        hooked = true;
    }
    return hooked;
}

// The taskbar's DLLs load late when Explorer starts after the mod.
using LoadLibraryExW_t = decltype(&LoadLibraryExW);
LoadLibraryExW_t LoadLibraryExW_Original;
HMODULE WINAPI LoadLibraryExW_Hook(LPCWSTR name, HANDLE file, DWORD flags) {
    HMODULE module = LoadLibraryExW_Original(name, file, flags);
    if (module && (!g_taskbarViewHooked || !g_trayHooked) && HookTaskbarModules()) {
        Wh_ApplyHookOperations();
    }
    return module;
}

// =============================================================================
// START AND TRAY MENUS
// =============================================================================
// Start opens in the middle of the screen, fading in as it grows, and the
// tray's menus at its right edge just above the taskbar, sliding in from
// there. None of them has a drop shadow. Each
// is shown by another process, which the mod also loads into, doing only this
// there:
//
// - Start (StartMenuExperienceHost.exe): the menu's frame is centered. Start
//   is told Windows' animations are off, and its frame's composition visual is
//   animated instead. The redesigned Start menu is told the taskbar is at the
//   bottom, whatever it reads. Search, which typing into Start opens, is moved
//   by Explorer to Start's spot, and, in SearchHost.exe, told Windows'
//   animations are off too.
// - Quick Settings (ShellHost.exe, or ShellExperienceHost.exe before 24H2):
//   its window is subclassed, and placed whenever it's moved, above how tall
//   Explorer's side of the mod saved the taskbar shows.
// - None of them has a drop shadow: Start's shadow borders are collapsed, and
//   the tray menus' panels cast none.
// - The Notification Center (ShellExperienceHost.exe) is placed by Explorer,
//   which gives it a region (its visible part) and shows it. It's moved then.
// - Windows that can move the taskbar (26H2) slide the tray's menus in from
//   the side it reads the taskbar is on, so they're told it's on the right.
//
// After m417z's "Shell Flyout Positions" and "Vertical Taskbar for Windows 11",
// and Asteski's "Notification Center Follows Taskbar".

namespace Menus {

enum class Host { Explorer, Start, Search, ShellExperience, Shell };
Host g_host = Host::Explorer;

// The settings: whether the mod takes over Start, and the tray's menus. When
// it doesn't, it stays out of their processes, for Windows or another mod.
std::atomic<bool> g_controlStart = true;
std::atomic<bool> g_controlTray = true;

void LoadMenuSettings() {
    g_controlStart = Wh_GetIntSetting(L"menus.controlStart") != 0;
    g_controlTray = Wh_GetIntSetting(L"menus.controlTray") != 0;
}

// Start fades in as it grows from this much of its size.
constexpr float kStartAppearScale = 0.75f;
constexpr auto kStartAppearTime = std::chrono::milliseconds(100);
// The longest Start's animation waits for its window to be uncloaked.
constexpr auto kStartUncloakWait = std::chrono::milliseconds(400);

// What's animated: Start's frame.
[[clang::no_destroy]] winrt::weak_ref<wux::FrameworkElement> g_startFrame;

std::wstring ProcessName(DWORD pid) {
    std::wstring name;
    if (HANDLE process = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid)) {
        WCHAR path[MAX_PATH];
        DWORD size = ARRAYSIZE(path);
        if (QueryFullProcessImageNameW(process, 0, path, &size)) {
            PCWSTR file = wcsrchr(path, L'\\');
            name = file ? file + 1 : path;
        }
        CloseHandle(process);
    }
    return name;
}

std::wstring ThreadName(DWORD tid) {
    std::wstring name;
    if (HANDLE thread = OpenThread(THREAD_QUERY_LIMITED_INFORMATION, FALSE, tid)) {
        PWSTR description = nullptr;
        if (SUCCEEDED(GetThreadDescription(thread, &description)) && description) {
            name = description;
        }
        if (description) LocalFree(description);
        CloseHandle(thread);
    }
    return name;
}

bool HasClass(HWND w, PCWSTR name) {
    WCHAR cls[64];
    return GetClassNameW(w, cls, ARRAYSIZE(cls)) && !_wcsicmp(cls, name);
}

// Where a window's top goes to center the part of it that shows, from `top`
// to `bottom` in the window, on the screen, keeping that part on the screen.
LONG ScreenMiddleTop(HMONITOR monitor, LONG top, LONG bottom) {
    MONITORINFO info{.cbSize = sizeof(info)};
    GetMonitorInfo(monitor, &info);
    RECT const& m = info.rcMonitor;
    LONG y = ((m.top + m.bottom) - (top + bottom)) / 2;
    return std::clamp(y, m.top - top, std::max(m.top - top, m.bottom - bottom));
}

// Where a window's top goes to put the part of it that shows, from `top` to
// `bottom` in the window, just above the taskbar, as far above it as Windows
// has its flyouts (kFlyoutStockGap), or as high as fits. Explorer knows how
// tall the taskbar shows; elsewhere it's read from what Explorer saved
// (SaveTaskbarTop). Without that, it's centered.
LONG AboveTaskbarTop(HMONITOR monitor, LONG top, LONG bottom) {
    int taskbar = g_host == Host::Explorer
                      ? ::TaskbarTop()
                      : Wh_GetIntValue(UserValueName(kTaskbarTopValue).c_str(), 0);
    static std::atomic<int> logged = -1;  // [menus] logging, to be removed
    if (logged.exchange(taskbar) != taskbar) {
        Wh_Log(L"[menus] taskbar shows %d px up%s", taskbar, taskbar > 0 ? L"" : L": centered");
    }
    if (taskbar <= 0) return ScreenMiddleTop(monitor, top, bottom);
    MONITORINFO info{.cbSize = sizeof(info)};
    GetMonitorInfo(monitor, &info);
    RECT const& m = info.rcMonitor;
    UINT dpiX = 96, dpiY = 96;
    if (FAILED(GetDpiForMonitor(monitor, MDT_EFFECTIVE_DPI, &dpiX, &dpiY))) dpiY = 96;
    LONG above = MulDiv(taskbar + (int)kFlyoutStockGap, dpiY, 96);
    return std::max(m.bottom - above - bottom, m.top - top);
}

template <typename F>
F SystemFunction(PCWSTR dll, PCSTR name) {
    HMODULE module = GetModuleHandleW(dll);
    return module ? (F)GetProcAddress(module, name) : nullptr;
}

// --- Drop shadows, in Start's and the tray menus' processes -----------------

// Start draws its shadow with borders named for it, and the tray's menus cast
// theirs from their panels. Lists, in scroll viewers, keep their items' own,
// so notifications keep theirs.
bool IsShadowBorder(wux::FrameworkElement const& el) {
    if (!el.try_as<wuxc::Border>()) return false;
    std::wstring name(el.Name());
    std::ranges::transform(name, name.begin(), [](wchar_t c) { return (wchar_t)towlower(c); });
    return name.find(L"dropshadow") != std::wstring::npos;
}

void Collapse(wux::FrameworkElement const& el) {
    if (el.Visibility() != Visibility::Collapsed) el.Visibility(Visibility::Collapsed);
}

void Unshadow(wux::FrameworkElement const& el) {
    if (el.Shadow()) el.Shadow(nullptr);
}

// Kept off, as the menu would put them back. Returns how many there are,
// including ones already taken off.
int StripShadows(wux::DependencyObject const& el, int depth = 0) {
    if (!el || depth > 40) return 0;
    int found = 0;
    if (auto fe = el.try_as<wux::FrameworkElement>()) {
        if (depth > 0 && fe.try_as<wuxc::ScrollViewer>()) return 0;
        if (IsShadowBorder(fe)) {
            Track(fe, wux::UIElement::VisibilityProperty(), Collapse);
            Collapse(fe);
            found++;
        }
        if (fe.Shadow() || FindOverride(fe, wux::UIElement::ShadowProperty())) {
            Track(fe, wux::UIElement::ShadowProperty(), Unshadow);
            Unshadow(fe);
            found++;
        }
    }
    int count = wuxm::VisualTreeHelper::GetChildrenCount(el);
    for (int i = 0; i < count; i++) {
        found += StripShadows(wuxm::VisualTreeHelper::GetChild(el, i), depth + 1);
    }
    return found;
}

// --- Start, in StartMenuExperienceHost.exe ----------------------------------

// Start's window: this process's CoreWindow. Start is placed, and its shadow
// taken off, each time it's shown.
HWND StartWindow() {
    HWND found = nullptr;
    EnumWindows(
        [](HWND w, LPARAM param) -> BOOL {
            DWORD pid = 0;
            if (!GetWindowThreadProcessId(w, &pid) || pid != GetCurrentProcessId() ||
                !HasClass(w, L"Windows.UI.Core.CoreWindow")) {
                return TRUE;
            }
            *(HWND*)param = w;
            return FALSE;
        },
        (LPARAM)&found);
    return found;
}

wux::FrameworkElement ChildWhere(wux::DependencyObject const& parent,
                                 std::function<bool(wux::FrameworkElement const&)> const& match) {
    int count = wuxm::VisualTreeHelper::GetChildrenCount(parent);
    for (int i = 0; i < count; i++) {
        auto child = wuxm::VisualTreeHelper::GetChild(parent, i).try_as<wux::FrameworkElement>();
        if (child && match(child)) return child;
    }
    return nullptr;
}

// The screen's center, in view pixels from the top left of Start's window,
// which can stop short of the screen (above the dock, say).
std::optional<wf::Point> ScreenCenterInStart() {
    HWND w = StartWindow();
    RECT window;
    if (!w || !GetWindowRect(w, &window)) return std::nullopt;
    MONITORINFO monitor{.cbSize = sizeof(monitor)};
    if (!GetMonitorInfo(MonitorFromWindow(w, MONITOR_DEFAULTTONEAREST), &monitor)) {
        return std::nullopt;
    }
    double scale = GetDpiForWindow(w) / 96.0;
    if (scale <= 0) return std::nullopt;
    RECT const& m = monitor.rcMonitor;
    return wf::Point{(float)(((m.left + m.right) / 2.0 - window.left) / scale),
                     (float)(((m.top + m.bottom) / 2.0 - window.top) / scale)};
}

// The redesigned Start menu: a frame centered in Start's window, its margins
// kept as Windows sets them, the top and bottom ones evened out. It's moved
// onto the screen's center if the window's isn't (as when the dock takes room
// at the bottom), by a translation.
void PlaceRedesignedStart(wux::FrameworkElement const& content) {
    auto frame = ChildWhere(content, [](auto const& el) { return el.Name() == L"FrameRoot"; });
    if (!frame) {
        Wh_Log(L"Start's frame isn't there");
        return;
    }
    Reapply horizontal = [](wux::FrameworkElement const& el) {
        if (el.HorizontalAlignment() != wux::HorizontalAlignment::Center) {
            el.HorizontalAlignment(wux::HorizontalAlignment::Center);
        }
    };
    Reapply vertical = [](wux::FrameworkElement const& el) {
        if (el.VerticalAlignment() != wux::VerticalAlignment::Center) {
            el.VerticalAlignment(wux::VerticalAlignment::Center);
        }
    };
    Reapply margin = [](wux::FrameworkElement const& el) {
        wux::Thickness m = el.Margin();
        double half = (m.Top + m.Bottom) / 2;
        if (m.Top != half || m.Bottom != half) el.Margin({m.Left, half, m.Right, half});
    };
    Track(frame, wux::FrameworkElement::HorizontalAlignmentProperty(), horizontal);
    Track(frame, wux::FrameworkElement::VerticalAlignmentProperty(), vertical);
    Track(frame, wux::FrameworkElement::MarginProperty(), margin);
    horizontal(frame);
    vertical(frame);
    margin(frame);

    // How far the screen's center is from the window's.
    wf::Point shift{};
    auto middle = ScreenCenterInStart();
    if (middle && content.ActualWidth() > 0 && content.ActualHeight() > 0) {
        shift = {(float)(middle->X - content.ActualWidth() / 2),
                 (float)(middle->Y - content.ActualHeight() / 2)};
    }
    Reapply translate = [shift](wux::FrameworkElement const& el) {
        auto current = el.RenderTransform().try_as<wuxm::TranslateTransform>();
        if (current && current.X() == shift.X && current.Y() == shift.Y) return;
        wuxm::TranslateTransform transform;
        transform.X(shift.X);
        transform.Y(shift.Y);
        el.RenderTransform(transform);
    };
    if (shift.X || shift.Y || FindOverride(frame, wux::UIElement::RenderTransformProperty())) {
        // Kept to the new shift.
        Release(frame, wux::UIElement::RenderTransformProperty());
        Track(frame, wux::UIElement::RenderTransformProperty(), translate);
        translate(frame);
    }
    g_startFrame = winrt::make_weak(frame);
}

// The classic Start menu's frame is on a canvas the size of Start's window,
// and resizable: it's placed again as it's resized.
struct SizeWatch {
    winrt::weak_ref<wux::FrameworkElement> element;
    winrt::event_token token;
};
[[clang::no_destroy]] SizeWatch g_classicStartSize;

void StopWatchingSize() {
    if (auto el = g_classicStartSize.element.get()) {
        Try([&] { el.SizeChanged(g_classicStartSize.token); });
    }
    g_classicStartSize = {};
}

// Canvas.Left and Canvas.Top: at the screen's center, kept on the canvas.
void PlaceClassicStartX(wux::FrameworkElement const& frame) {
    auto canvas = wuxm::VisualTreeHelper::GetParent(frame).try_as<wux::FrameworkElement>();
    auto middle = ScreenCenterInStart();
    if (!canvas || !middle || canvas.ActualWidth() <= 0) return;
    double left = std::clamp(middle->X - frame.ActualWidth() / 2, 0.0,
                             std::max(0.0, canvas.ActualWidth() - frame.ActualWidth()));
    if (wuxc::Canvas::GetLeft(frame) != left) wuxc::Canvas::SetLeft(frame, left);
}

void PlaceClassicStartY(wux::FrameworkElement const& frame) {
    auto canvas = wuxm::VisualTreeHelper::GetParent(frame).try_as<wux::FrameworkElement>();
    if (!canvas || canvas.ActualHeight() <= 0) return;
    auto center = ScreenCenterInStart();
    double middle = center ? center->Y : canvas.ActualHeight() / 2;
    double top = std::clamp(middle - frame.ActualHeight() / 2, 0.0,
                            std::max(0.0, canvas.ActualHeight() - frame.ActualHeight()));
    if (wuxc::Canvas::GetTop(frame) != top) wuxc::Canvas::SetTop(frame, top);
}

void PlaceClassicStart(wux::FrameworkElement const& canvas) {
    auto frame = ChildWhere(canvas, [](auto const& el) {
        return winrt::get_class_name(el) == L"StartDocked.StartSizingFrame";
    });
    if (!frame) {
        Wh_Log(L"Start's frame isn't there");
        return;
    }
    Track(frame, wuxc::Canvas::LeftProperty(), PlaceClassicStartX);
    Track(frame, wuxc::Canvas::TopProperty(), PlaceClassicStartY);
    PlaceClassicStartX(frame);
    PlaceClassicStartY(frame);
    g_startFrame = winrt::make_weak(frame);
    if (g_classicStartSize.element.get() != frame) {
        StopWatchingSize();
        g_classicStartSize.element = winrt::make_weak(frame);
        g_classicStartSize.token =
            frame.SizeChanged([](wf::IInspectable const& sender, wux::SizeChangedEventArgs const&) {
                Try([&] {
                    if (auto el = sender.try_as<wux::FrameworkElement>()) {
                        PlaceClassicStartX(el);
                        PlaceClassicStartY(el);
                    }
                });
            });
    }
}

void PlaceStart() {
    auto window = wux::Window::Current();
    auto content = window ? window.Content().try_as<wux::FrameworkElement>() : nullptr;
    if (!content) return;
    g_overrides->remove_if([](Override const& o) { return !o.element.get(); });
    StripShadows(content);
    auto type = winrt::get_class_name(content);
    if (type == L"StartMenu.StartBlendedFlexFrame") {
        PlaceRedesignedStart(content);
    } else if (type == L"Windows.UI.Xaml.Controls.Canvas") {
        PlaceClassicStart(content);
    } else {
        Wh_Log(L"Start's layout isn't one the mod knows: %s", type.c_str());
    }
}

// Start fades in as it grows to its size, by its frame's composition visual,
// Windows' own animations in it being off (see SystemParametersInfoW_Hook).
// Windows keeps Start's window cloaked for a few frames after it's shown, so
// the animation waits until it's uncloaked, to be seen from its start: Start is
// held see-through and small until then (HoldStart), for up to
// kStartUncloakWait. It's also
// made see-through and small as it closes, once it's been seen opening (which
// is when it's shown again), so no frame of it shows before that.
bool g_startSeenOpening = false;
HWND g_startHwnd = nullptr;
bool g_startHeld = false;  // the frame's opacity kept at 0 (KeepStartHidden)
[[clang::no_destroy]] wux::DispatcherTimer g_startUncloakTimer{nullptr};
[[clang::no_destroy]] wuxm::Animation::Storyboard g_startFade{nullptr};
std::chrono::steady_clock::time_point g_startShownAt;

// How long since Start was shown, and whether its window is still cloaked.
double SinceShown() {
    return std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() -
                                                     g_startShownAt)
        .count();
}

DWORD StartCloakedValue() {
    DWORD cloaked = 0;
    if (g_startHwnd) DwmGetWindowAttribute(g_startHwnd, DWMWA_CLOAKED, &cloaked, sizeof(cloaked));
    return cloaked;
}

// While Start's held, its frame's opacity is kept at 0, set straight back
// whenever Windows sets it, which it does as Start opens.
void KeepStartHidden(wux::FrameworkElement const& el) {
    if (g_startHeld && el.Opacity() != 0) el.Opacity(0);
}

// Held see-through and small. The opacity is the frame's own, the one Windows
// sets: setting it on the frame's composition visual, or holding it there with
// an animation, doesn't last, as Windows setting it overrides that.
void HoldStart() {
    auto frame = g_startFrame.get();
    if (!frame || g_unloading) return;
    if (g_startFade) g_startFade.Stop();
    g_startHeld = true;
    Track(frame, wux::UIElement::OpacityProperty(), KeepStartHidden);
    if (frame.Opacity() != 0) frame.Opacity(0);
    auto visual = wuxh::ElementCompositionPreview::GetElementVisual(frame);
    visual.StopAnimation(L"Opacity");
    visual.StopAnimation(L"Scale");
    visual.Opacity(1);
    visual.CenterPoint({(float)frame.ActualWidth() / 2, (float)frame.ActualHeight() / 2, 0});
    visual.Scale({kStartAppearScale, kStartAppearScale, 1});
}

void ReadyStartToAppear() {
    if (g_startSeenOpening) HoldStart();
}

// The fade, of the frame's own opacity, is even throughout and runs over
// Windows' value, which is back once it ends. The growth, of its composition
// visual, is quick, then gentle.
void AppearStart() {
    auto frame = g_startFrame.get();
    if (!frame || g_unloading) return;
    g_startHeld = false;
    frame.Opacity(1);
    if (!g_startFade) {
        wuxm::Animation::DoubleAnimation fade;
        fade.From(0.0);
        fade.To(1.0);
        fade.Duration(wux::DurationHelper::FromTimeSpan(kStartAppearTime));
        g_startFade = wuxm::Animation::Storyboard();
        g_startFade.FillBehavior(wuxm::Animation::FillBehavior::Stop);
        g_startFade.Children().Append(fade);
        wuxm::Animation::Storyboard::SetTargetProperty(fade, L"Opacity");
    }
    g_startFade.Stop();
    wuxm::Animation::Storyboard::SetTarget(g_startFade.Children().GetAt(0), frame);
    g_startFade.Begin();

    auto visual = wuxh::ElementCompositionPreview::GetElementVisual(frame);
    auto compositor = visual.Compositor();
    visual.CenterPoint({(float)frame.ActualWidth() / 2, (float)frame.ActualHeight() / 2, 0});
    visual.Scale({1, 1, 1});
    auto grow = compositor.CreateVector3KeyFrameAnimation();
    grow.InsertKeyFrame(0, {kStartAppearScale, kStartAppearScale, 1});
    grow.InsertKeyFrame(1, {1, 1, 1},
                        compositor.CreateCubicBezierEasingFunction({0.1f, 0.9f}, {0.2f, 1.0f}));
    grow.Duration(kStartAppearTime);
    visual.StartAnimation(L"Scale", grow);
}

void StopWaitingToAppear() {
    if (g_startUncloakTimer) Try([] { g_startUncloakTimer.Stop(); });
}

void AppearStartOnceUncloaked() {
    g_startShownAt = std::chrono::steady_clock::now();
    HoldStart();
    if (!g_startUncloakTimer) {
        g_startUncloakTimer = wux::DispatcherTimer();
        g_startUncloakTimer.Interval(std::chrono::milliseconds(5));
        g_startUncloakTimer.Tick([](wf::IInspectable const&, wf::IInspectable const&) {
            Try([] {
                DWORD cloaked = StartCloakedValue();
                if (cloaked && SinceShown() < kStartUncloakWait.count()) return;
                StopWaitingToAppear();
                AppearStart();
            }, L"Start's animation");
        });
    }
    g_startUncloakTimer.Stop();
    g_startUncloakTimer.Start();
}

// Fully shown, as it would be without the mod.
void ResetStartVisual() {
    StopWaitingToAppear();
    g_startUncloakTimer = nullptr;
    g_startHeld = false;
    if (g_startFade) g_startFade.Stop();
    g_startFade = nullptr;
    auto frame = std::exchange(g_startFrame, nullptr).get();
    if (!frame) return;
    auto visual = wuxh::ElementCompositionPreview::GetElementVisual(frame);
    visual.StopAnimation(L"Opacity");
    visual.StopAnimation(L"Scale");
    visual.Opacity(1);
    visual.Scale({1, 1, 1});
    visual.CenterPoint({0, 0, 0});
}

winrt::event_token g_startShown;

// On Start's thread. Start is placed each time it's shown, and whenever
// Windows changes what was set.
void InitStart() {
    if (g_startShown || g_unloading) return;
    auto window = wux::Window::Current();
    if (!window) return;
    g_startHwnd = StartWindow();
    using winrt::Windows::UI::Core::VisibilityChangedEventArgs;
    g_startShown = window.VisibilityChanged(
        [](wf::IInspectable const&, VisibilityChangedEventArgs const& args) {
            if (args.Visible()) {
                g_startSeenOpening = true;
                Try(PlaceStart, L"Placing Start");
                Try(AppearStartOnceUncloaked, L"Start's animation");
            } else {
                Try(StopWaitingToAppear);
                Try(ReadyStartToAppear, L"Start's animation");
            }
        });
    Try(PlaceStart, L"Placing Start");
}

void UninitStart() {
    if (auto window = wux::Window::Current(); window && g_startShown) {
        window.VisibilityChanged(g_startShown);
    }
    g_startShown = {};
    StopWatchingSize();
    Try(ResetStartVisual, L"Start's animation");
    RestoreOverrides();
}

// Start, and search (SearchHost.exe), which typing into Start opens, are told
// Windows' animations are off, so they neither slide in nor out. They read
// this as they start, and again as they're told the setting changed.
using SystemParametersInfoW_t = decltype(&SystemParametersInfoW);
SystemParametersInfoW_t SystemParametersInfoW_Original;
BOOL WINAPI SystemParametersInfoW_Hook(UINT action, UINT param, PVOID value, UINT flags) {
    BOOL result = SystemParametersInfoW_Original(action, param, value, flags);
    if (result && action == SPI_GETCLIENTAREAANIMATION && value && !g_unloading) {
        *(BOOL*)value = FALSE;
    }
    return result;
}

// Has this process's windows read the animation setting again.
void TellAnimationsChanged() {
    EnumWindows(
        [](HWND w, LPARAM) -> BOOL {
            DWORD pid = 0;
            if (GetWindowThreadProcessId(w, &pid) && pid == GetCurrentProcessId() &&
                HasClass(w, L"Windows.UI.Core.CoreWindow")) {
                PostMessage(w, WM_SETTINGCHANGE, SPI_SETCLIENTAREAANIMATION, 0);
            }
            return TRUE;
        },
        0);
}

// The redesigned Start menu (StartMenu.dll) gets the taskbar's edge here, which
// its animations, and how it fits in its window, are for. It's always the
// bottom, where the dock is.
enum class TaskbarEdge { Left, Top, Right, Bottom };
using GetCurrentTaskbarEdge_t = TaskbarEdge(WINAPI*)(void* pThis, TaskbarEdge edge);
GetCurrentTaskbarEdge_t GetCurrentTaskbarEdge_Original;
TaskbarEdge WINAPI GetCurrentTaskbarEdge_Hook(void* pThis, TaskbarEdge edge) {
    TaskbarEdge result = GetCurrentTaskbarEdge_Original(pThis, edge);
    return g_unloading ? result : TaskbarEdge::Bottom;
}

std::atomic<bool> g_startMenuDllHooked = false;

bool HookStartMenuDll(HMODULE module) {
    WindhawkUtils::SYMBOL_HOOK hooks[] = {
        {{LR"(private: enum winrt::StartMenu::implementation::DockedAnimationTypes::TaskbarEdge __cdecl winrt::StartMenu::implementation::StartBlendedFlexFrame::GetCurrentTaskbarEdge(enum winrt::StartMenu::implementation::DockedAnimationTypes::TaskbarEdge))"},
         &GetCurrentTaskbarEdge_Original, GetCurrentTaskbarEdge_Hook},
    };
    if (WindhawkUtils::HookSymbols(module, hooks, ARRAYSIZE(hooks))) return true;
    Wh_Log(L"Not hooked, so Start uses the taskbar edge Windows gives it");
    return false;
}

// Hooks StartMenu.dll if it's loaded and not hooked yet. Returns whether it
// was hooked now.
bool HookStartMenuDllIfLoaded() {
    HMODULE module = GetModuleHandle(L"StartMenu.dll");
    return module && !g_startMenuDllHooked.exchange(true) && HookStartMenuDll(module);
}

using LoadLibraryExW_t = decltype(&LoadLibraryExW);
LoadLibraryExW_t LoadLibraryExW_Original;
HMODULE WINAPI LoadLibraryExW_Hook(LPCWSTR name, HANDLE file, DWORD flags) {
    HMODULE module = LoadLibraryExW_Original(name, file, flags);
    if (module && !g_startMenuDllHooked && HookStartMenuDllIfLoaded()) {
        Wh_ApplyHookOperations();
    }
    return module;
}

// Start's XAML starts up, as Start's process starts after the mod.
using RoGetActivationFactory_t = decltype(&RoGetActivationFactory);
RoGetActivationFactory_t RoGetActivationFactory_Original;
HRESULT WINAPI RoGetActivationFactory_Hook(HSTRING id, REFIID iid, void** factory) {
    thread_local bool inside = false;
    if (inside) return RoGetActivationFactory_Original(id, iid, factory);
    inside = true;
    if (!g_unloading &&
        !wcscmp(WindowsGetStringRawBuffer(id, nullptr), L"Windows.UI.Xaml.Hosting.XamlIsland")) {
        Try(InitStart, L"Start");
    }
    HRESULT result = RoGetActivationFactory_Original(id, iid, factory);
    inside = false;
    return result;
}

// --- The tray's menus, in ShellHost.exe and ShellExperienceHost.exe ---------

// The tray's menus' windows: Quick Settings' in ShellHost.exe (or, before
// 24H2, a CoreWindow of ShellExperienceHost.exe), and the Notification
// Center's, a CoreWindow of ShellExperienceHost.exe.
enum class TrayMenu { None, QuickSettings, NotificationCenter };

TrayMenu TrayMenuOf(HWND w) {
    DWORD pid = 0;
    DWORD tid = w ? GetWindowThreadProcessId(w, &pid) : 0;
    if (!tid || pid != GetCurrentProcessId()) return TrayMenu::None;
    if (HasClass(w, L"ControlCenterWindow")) return TrayMenu::QuickSettings;
    if (!HasClass(w, L"Windows.UI.Core.CoreWindow")) return TrayMenu::None;
    std::wstring thread = ThreadName(tid);
    if (thread == L"QuickActions") return TrayMenu::QuickSettings;
    if (thread == L"ActionCenter") return TrayMenu::NotificationCenter;
    return TrayMenu::None;
}

// The part of a window that shows, in window coordinates: its region, if it
// has one, or all of it.
RECT ShownPart(HWND w, int cx, int cy) {
    RECT box{0, 0, cx, cy};
    if (HRGN region = CreateRectRgn(0, 0, 0, 0)) {
        RECT part;
        int kind = GetWindowRgn(w, region);
        if ((kind == SIMPLEREGION || kind == COMPLEXREGION) && GetRgnBox(region, &part) &&
            part.right - part.left > 1 && part.bottom - part.top > 1) {
            box = part;
        }
        DeleteObject(region);
    }
    return box;
}

// Where Quick Settings' window's top goes. Its window is as tall as the
// screen, and only its region, the panel, shows: that's just above the
// taskbar. Windows already has it at the right edge, sliding in from there.
LONG QuickSettingsTop(HWND w, int x, int y, int cx, int cy) {
    RECT rect{x, y, x + cx, y + cy};
    RECT shown = ShownPart(w, cx, cy);
    return AboveTaskbarTop(MonitorFromRect(&rect, MONITOR_DEFAULTTONEAREST), shown.top,
                           shown.bottom);
}

// Every move of Quick Settings' window comes through here, whoever makes it
// and however. Only its top is changed.
void PlaceQuickSettings(HWND w, WINDOWPOS& pos) {
    if ((pos.flags & (SWP_NOMOVE | SWP_NOSIZE)) == (SWP_NOMOVE | SWP_NOSIZE)) return;
    RECT rect;
    if (!GetWindowRect(w, &rect)) return;
    // Resized where it is: placed again too, to stay centered.
    int x = (pos.flags & SWP_NOMOVE) ? rect.left : pos.x;
    int y = (pos.flags & SWP_NOMOVE) ? rect.top : pos.y;
    int cx = (pos.flags & SWP_NOSIZE) ? rect.right - rect.left : pos.cx;
    int cy = (pos.flags & SWP_NOSIZE) ? rect.bottom - rect.top : pos.cy;
    LONG top = QuickSettingsTop(w, x, y, cx, cy);
    if (top == y) return;
    pos.x = x;
    pos.y = top;
    pos.flags &= ~SWP_NOMOVE;
}

// Its region changes as its panel grows or shrinks, and is set anew each time
// it opens, sometimes after the window's been placed: it's placed again.
void PlaceQuickSettingsAgain(HWND w) {
    RECT rect;
    if (!GetWindowRect(w, &rect)) return;
    LONG top = QuickSettingsTop(w, rect.left, rect.top, rect.right - rect.left,
                                rect.bottom - rect.top);
    if (top == rect.top) return;
    SetWindowPos(w, nullptr, rect.left, top, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
}

bool IsQuickSettingsWindow(HWND w) {
    return HasClass(w, L"ControlCenterWindow") ||
           (g_host != Host::Explorer && TrayMenuOf(w) == TrayMenu::QuickSettings);
}

// The menus' shadows are taken off on their UI thread, as each is shown and
// whenever anything in it gets focus. A XAML island's content is found from
// what gets focus, a CoreWindow's from its window.
[[clang::no_destroy]] thread_local winrt::weak_ref<wux::UIElement> t_trayRoot;
thread_local std::chrono::steady_clock::time_point t_trayStripped;
thread_local winrt::event_token t_trayFocus;
constexpr auto kStripAgainAfter = std::chrono::milliseconds(100);

// The menu's own content, not a popup's.
wux::UIElement TrayRoot(wux::DependencyObject const& inside) {
    wux::UIElement el = inside ? inside.try_as<wux::UIElement>() : wux::UIElement{nullptr};
    if (el) {
        if (auto root = el.XamlRoot(); root && root.Content()) return root.Content();
    }
    wux::UIElement root{nullptr};
    Try([&] {
        if (auto window = wux::Window::Current()) root = window.Content();
    });
    return root ? root : t_trayRoot.get();
}

// Walked again right away while nothing's found, as the menu may not be built
// yet.
void StripTrayShadows(wux::DependencyObject const& inside = nullptr) {
    if (g_unloading) return;
    auto root = TrayRoot(inside);
    if (!root) return;
    auto now = std::chrono::steady_clock::now();
    if (root == t_trayRoot.get() && now - t_trayStripped < kStripAgainAfter) return;
    t_trayRoot = winrt::make_weak(root);
    t_trayStripped = StripShadows(root) ? now : std::chrono::steady_clock::time_point{};
}

// Once the thread's XAML is up.
void WatchTrayFocus() {
    if (t_trayFocus || g_unloading) return;
    t_trayFocus = wuxi::FocusManager::GotFocus(
        [](wf::IInspectable const&, wuxi::FocusManagerGotFocusEventArgs const& args) {
            Try([&] { StripTrayShadows(args.NewFocusedElement()); }, L"Removing shadows");
        });
}

void UnwatchTrayFocus() {
    if (t_trayFocus) Try([] { wuxi::FocusManager::GotFocus(t_trayFocus); });
    t_trayFocus = {};
    t_trayRoot = nullptr;
}

// Overrides made on this thread back, as XAML objects belong to theirs.
void RestoreOverridesHere() {
    g_overrides->remove_if([](Override const& o) {
        auto el = o.element.get();
        bool here = true;
        Try([&] { here = !el || el.Dispatcher().HasThreadAccess(); });
        if (here) Restore(o);
        return here;
    });
}

UINT StripMessage() {
    static const UINT message = RegisterWindowMessage(L"Windhawk_StripShadows_" WH_MOD_ID);
    return message;
}

// The menus' windows are subclassed: Quick Settings' to be placed whenever
// it's moved, and each to have its shadows taken off as it's shown, which is
// left to its message loop.
constexpr UINT_PTR kTrayMenuSubclass = 0x4D445153;  // "MDQS"
std::mutex g_trayMenusLock;
std::vector<HWND> g_trayMenus;

LRESULT CALLBACK TrayMenuProc(HWND w, UINT message, WPARAM wParam, LPARAM lParam, UINT_PTR id,
                              DWORD_PTR kind) {
    if (message == WM_WINDOWPOSCHANGING && lParam && !g_unloading &&
        (TrayMenu)kind == TrayMenu::QuickSettings) {
        PlaceQuickSettings(w, *(WINDOWPOS*)lParam);
    } else if (message == StripMessage() && message) {
        Try(WatchTrayFocus);
        Try([] { StripTrayShadows(); }, L"Removing shadows");
        return 0;
    } else if ((message == WM_ACTIVATE && LOWORD(wParam) != WA_INACTIVE) ||
               (message == WM_SHOWWINDOW && wParam) || message == WM_WINDOWPOSCHANGED) {
        if (!g_unloading) PostMessage(w, StripMessage(), 0, 0);
    } else if (message == WM_NCDESTROY) {
        RemoveWindowSubclass(w, TrayMenuProc, id);
        std::lock_guard lock(g_trayMenusLock);
        std::erase(g_trayMenus, w);
    }
    return DefSubclassProc(w, message, wParam, lParam);
}

// On the window's thread.
void SubclassTrayMenu(HWND w, TrayMenu kind) {
    if (g_unloading) return;
    {
        std::lock_guard lock(g_trayMenusLock);
        if (std::ranges::find(g_trayMenus, w) != g_trayMenus.end()) return;
        if (!SetWindowSubclass(w, TrayMenuProc, kTrayMenuSubclass, (DWORD_PTR)kind)) return;
        g_trayMenus.push_back(w);
    }
    PostMessage(w, StripMessage(), 0, 0);
    if (kind != TrayMenu::QuickSettings) return;
    PlaceQuickSettingsAgain(w);
}

// From another thread only as the mod loads: hooks can run on threads
// waiting for the window's, which this would wait for in turn.
void SubclassIfTrayMenu(HWND w, bool anyThread = false) {
    TrayMenu kind = g_unloading ? TrayMenu::None : TrayMenuOf(w);
    if (kind == TrayMenu::None) return;
    if (GetWindowThreadProcessId(w, nullptr) == GetCurrentThreadId()) {
        SubclassTrayMenu(w, kind);
    } else if (anyThread) {
        struct Param {
            HWND w;
            TrayMenu kind;
        } param{w, kind};
        RunFromWindowThread(
            w, [](void* p) { SubclassTrayMenu(((Param*)p)->w, ((Param*)p)->kind); }, &param);
    }
}

// The windows are found as they're created, or, if they already were, as the
// mod loads. Their first placement also finds them, should they be created
// some other way.
using CreateWindowExW_t = decltype(&CreateWindowExW);
CreateWindowExW_t CreateWindowExW_Original;
HWND WINAPI CreateWindowExW_Hook(DWORD exStyle, LPCWSTR cls, LPCWSTR title, DWORD style, int x,
                                 int y, int cx, int cy, HWND parent, HMENU menu,
                                 HINSTANCE instance, LPVOID param) {
    HWND w = CreateWindowExW_Original(exStyle, cls, title, style, x, y, cx, cy, parent, menu,
                                      instance, param);
    SubclassIfTrayMenu(w);
    return w;
}

using CreateWindowInBand_t = HWND(WINAPI*)(DWORD exStyle, LPCWSTR cls, LPCWSTR title,
                                           DWORD style, int x, int y, int cx, int cy,
                                           HWND parent, HMENU menu, HINSTANCE instance,
                                           LPVOID param, DWORD band);
CreateWindowInBand_t CreateWindowInBand_Original;
HWND WINAPI CreateWindowInBand_Hook(DWORD exStyle, LPCWSTR cls, LPCWSTR title, DWORD style,
                                    int x, int y, int cx, int cy, HWND parent, HMENU menu,
                                    HINSTANCE instance, LPVOID param, DWORD band) {
    HWND w = CreateWindowInBand_Original(exStyle, cls, title, style, x, y, cx, cy, parent, menu,
                                         instance, param, band);
    SubclassIfTrayMenu(w);
    return w;
}

using CreateWindowInBandEx_t = HWND(WINAPI*)(DWORD exStyle, LPCWSTR cls, LPCWSTR title,
                                             DWORD style, int x, int y, int cx, int cy,
                                             HWND parent, HMENU menu, HINSTANCE instance,
                                             LPVOID param, DWORD band, DWORD flags);
CreateWindowInBandEx_t CreateWindowInBandEx_Original;
HWND WINAPI CreateWindowInBandEx_Hook(DWORD exStyle, LPCWSTR cls, LPCWSTR title, DWORD style,
                                      int x, int y, int cx, int cy, HWND parent, HMENU menu,
                                      HINSTANCE instance, LPVOID param, DWORD band,
                                      DWORD flags) {
    HWND w = CreateWindowInBandEx_Original(exStyle, cls, title, style, x, y, cx, cy, parent,
                                           menu, instance, param, band, flags);
    SubclassIfTrayMenu(w);
    return w;
}

using SetWindowPos_t = decltype(&SetWindowPos);
SetWindowPos_t HostSetWindowPos_Original;
BOOL WINAPI HostSetWindowPos_Hook(HWND w, HWND after, int x, int y, int cx, int cy, UINT flags) {
    if (!g_unloading && (flags & (SWP_NOMOVE | SWP_NOSIZE)) != (SWP_NOMOVE | SWP_NOSIZE)) {
        SubclassIfTrayMenu(w);
    }
    return HostSetWindowPos_Original(w, after, x, y, cx, cy, flags);
}

void FindTrayMenus() {
    EnumWindows(
        [](HWND w, LPARAM) -> BOOL {
            SubclassIfTrayMenu(w, true);
            return TRUE;
        },
        0);
}

// On each window's thread, before the mod's code goes away. Windows places
// Quick Settings again as it opens.
void ReleaseTrayMenus() {
    std::vector<HWND> windows;
    {
        std::lock_guard lock(g_trayMenusLock);
        windows.swap(g_trayMenus);
    }
    for (HWND w : windows) {
        if (!IsWindow(w)) continue;
        RunFromWindowThread(
            w,
            [](void* p) {
                Try(UnwatchTrayFocus);
                RestoreOverridesHere();
                RemoveWindowSubclass((HWND)p, TrayMenuProc, kTrayMenuSubclass);
            },
            w);
    }
}

// The tray's menus read the taskbar's side here, on Windows that can move the
// taskbar, and slide in from it.
constexpr WCHAR kTaskbarSettingsKey[] =
    LR"(SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced)";
using RegGetValueW_t = decltype(&RegGetValueW);
RegGetValueW_t RegGetValueW_Original;
LONG WINAPI RegGetValueW_Hook(HKEY key, LPCWSTR subKey, LPCWSTR value, DWORD flags, LPDWORD type,
                              PVOID data, LPDWORD size) {
    DWORD room = size ? *size : 0;
    LONG result = RegGetValueW_Original(key, subKey, value, flags, type, data, size);
    if (g_unloading || key != HKEY_CURRENT_USER || !subKey ||
        _wcsicmp(subKey, kTaskbarSettingsKey) || !value || _wcsicmp(value, L"TaskbarLocation") ||
        !(flags & RRF_RT_REG_DWORD) || !data || room < sizeof(DWORD)) {
        return result;
    }
    *(DWORD*)data = ABE_RIGHT;
    *size = sizeof(DWORD);
    if (type) *type = REG_DWORD;
    return ERROR_SUCCESS;
}

// --- Explorer: the Notification Center, and search typed into Start ---------

enum class Flyout { Other, Search, NotificationCenter, Start };

Flyout FlyoutKind(HWND w) {
    if (!HasClass(w, L"Windows.UI.Core.CoreWindow")) return Flyout::Other;
    DWORD pid = 0;
    DWORD tid = GetWindowThreadProcessId(w, &pid);
    if (!tid) return Flyout::Other;
    std::wstring process = ProcessName(pid);
    if (!_wcsicmp(process.c_str(), L"SearchHost.exe")) return Flyout::Search;
    if (!_wcsicmp(process.c_str(), L"StartMenuExperienceHost.exe")) return Flyout::Start;
    if ((!_wcsicmp(process.c_str(), L"ShellExperienceHost.exe") ||
         !_wcsicmp(process.c_str(), L"ShellHost.exe")) &&
        ThreadName(tid) == L"ActionCenter") {
        return Flyout::NotificationCenter;
    }
    return Flyout::Other;
}

// Start's window is cloaked while Start is hidden.
bool StartIsOpen() {
    bool open = false;
    EnumWindows(
        [](HWND w, LPARAM param) -> BOOL {
            DWORD pid = 0;
            if (!HasClass(w, L"Windows.UI.Core.CoreWindow") || !GetWindowThreadProcessId(w, &pid) ||
                _wcsicmp(ProcessName(pid).c_str(), L"StartMenuExperienceHost.exe")) {
                return TRUE;
            }
            BOOL cloaked = FALSE;
            if (SUCCEEDED(DwmGetWindowAttribute(w, DWMWA_CLOAKED, &cloaked, sizeof(cloaked))) &&
                !cloaked) {
                *(bool*)param = true;
            }
            return FALSE;
        },
        (LPARAM)&open);
    return open;
}

// A window the mod moved, and where Windows had it. Windows moves some of
// these itself, some only once, so they're moved back when the mod is done.
struct Moved {
    HWND window = nullptr;
    HMONITOR monitor = nullptr;
    POINT home{};  // Windows' spot
    POINT spot{};  // the mod's
};
std::mutex g_movedLock;
Moved g_search, g_notifications;

// Windows are moved outside the lock: they belong to other processes.
void MoveTo(Moved& m, HWND w, RECT const& rect, HMONITOR monitor, POINT spot) {
    POINT at{rect.left, rect.top};
    {
        std::lock_guard lock(g_movedLock);
        // Anywhere but the mod's spot, Windows has placed it.
        bool placed = m.window != w || m.monitor != monitor || at.x != m.spot.x || at.y != m.spot.y;
        m = {w, monitor, placed ? at : m.home, spot};
    }
    if (at.x == spot.x && at.y == spot.y) return;
    SetWindowPos(w, nullptr, spot.x, spot.y, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
}

// Back where Windows had it, unless Windows has placed it since. With
// `only`, just that window.
void MoveBack(Moved& m, HWND only = nullptr) {
    Moved was;
    {
        std::lock_guard lock(g_movedLock);
        if (!m.window || (only && m.window != only)) return;
        was = std::exchange(m, {});
    }
    RECT rect;
    if (!IsWindow(was.window) || !GetWindowRect(was.window, &rect) || rect.left != was.spot.x ||
        rect.top != was.spot.y ||
        MonitorFromWindow(was.window, MONITOR_DEFAULTTONEAREST) != was.monitor) {
        return;
    }
    SetWindowPos(was.window, nullptr, was.home.x, was.home.y, 0, 0,
                 SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
}

// Search, opened by typing into Start, takes Start's spot: the screen's
// center.
void PlaceSearch(HWND w) {
    RECT rect;
    if (!GetWindowRect(w, &rect)) return;
    HMONITOR monitor = MonitorFromWindow(w, MONITOR_DEFAULTTONEAREST);
    LONG cx = rect.right - rect.left, cy = rect.bottom - rect.top;
    MONITORINFO info{.cbSize = sizeof(info)};
    GetMonitorInfo(monitor, &info);
    RECT const& m = info.rcMonitor;
    MoveTo(g_search, w, rect, monitor,
           {m.left + (m.right - m.left - cx) / 2, m.top + (m.bottom - m.top - cy) / 2});
}

// The Notification Center's visible part, its region, is just above the
// taskbar. Its window can be taller.
void PlaceNotifications(HWND w, HRGN region) {
    RECT rect, visible;
    if (!GetWindowRect(w, &rect)) return;
    int kind = region ? GetRgnBox(region, &visible) : ERROR;
    if (kind == ERROR || kind == NULLREGION) {
        visible = {0, 0, rect.right - rect.left, rect.bottom - rect.top};
    }
    // Windows' placeholders, while it builds its views.
    if (visible.right - visible.left <= 1 || visible.bottom - visible.top <= 1) return;
    RECT shown = visible;
    OffsetRect(&shown, rect.left, rect.top);
    HMONITOR monitor = MonitorFromRect(&shown, MONITOR_DEFAULTTONEAREST);
    LONG top = AboveTaskbarTop(monitor, visible.top, visible.bottom);
    MoveTo(g_notifications, w, rect, monitor, {rect.left, top});
}

using DwmSetWindowAttribute_t = decltype(&DwmSetWindowAttribute);
DwmSetWindowAttribute_t DwmSetWindowAttribute_Original;
HRESULT WINAPI DwmSetWindowAttribute_Hook(HWND w, DWORD attribute, LPCVOID value, DWORD size) {
    auto original = [&] { return DwmSetWindowAttribute_Original(w, attribute, value, size); };
    if (attribute != DWMWA_CLOAK || size != sizeof(BOOL) || !value || g_unloading) {
        return original();
    }
    bool cloak = *(BOOL const*)value;
    switch (FlyoutKind(w)) {
        case Flyout::Search:
            // Search is shown again, by Win+S or the taskbar's search box, where
            // it was last: it goes back to Windows' spot as it's hidden.
            if (cloak) {
                HRESULT result = original();
                MoveBack(g_search, w);
                return result;
            }
            if (g_controlStart && StartIsOpen()) PlaceSearch(w);
            else MoveBack(g_search, w);
            break;
        case Flyout::NotificationCenter:
            if (!cloak && g_controlTray) {
                HRGN region = CreateRectRgn(0, 0, 0, 0);
                if (region && GetWindowRgn(w, region) == ERROR) {
                    DeleteObject(region);
                    region = nullptr;
                }
                PlaceNotifications(w, region);
                if (region) DeleteObject(region);
            }
            break;
        case Flyout::Start:
        case Flyout::Other:
            break;
    }
    return original();
}

// Start's window is given a region, the part of it that shows, where Windows
// works out Start's frame is. Once the frame's centered, Windows puts it a
// little too far right and down, which cuts off the frame's left and top. The
// frame is centered on the screen, so the region is centered there too,
// keeping its size.
void CenterStartRegion(HWND w, HRGN region) {
    RECT box, window;
    int kind = GetRgnBox(region, &box);
    if (kind == ERROR || kind == NULLREGION || !GetWindowRect(w, &window)) return;
    MONITORINFO info{.cbSize = sizeof(info)};
    if (!GetMonitorInfo(MonitorFromWindow(w, MONITOR_DEFAULTTONEAREST), &info)) return;
    RECT const& m = info.rcMonitor;
    LONG dx = ((m.left + m.right) - (box.left + box.right)) / 2 - window.left;
    LONG dy = ((m.top + m.bottom) - (box.top + box.bottom)) / 2 - window.top;
    if (dx || dy) OffsetRgn(region, dx, dy);
}

// The Notification Center and Quick Settings are given a region whenever
// their size changes, and Start each time it opens.
using SetWindowRgn_t = decltype(&SetWindowRgn);
SetWindowRgn_t SetWindowRgn_Original;
int WINAPI SetWindowRgn_Hook(HWND w, HRGN region, BOOL redraw) {
    // Before Windows takes the region, as it owns it after.
    if (region && !g_unloading) {
        switch (FlyoutKind(w)) {
            case Flyout::NotificationCenter:
                if (g_controlTray) PlaceNotifications(w, region);
                break;
            case Flyout::Start:
                if (g_controlStart) CenterStartRegion(w, region);
                break;
            case Flyout::Search:
            case Flyout::Other:
                break;
        }
    }
    int result = SetWindowRgn_Original(w, region, redraw);
    if (result && region && !g_unloading && g_controlTray && IsQuickSettingsWindow(w)) {
        PlaceQuickSettingsAgain(w);
    }
    return result;
}

// --- Loading and unloading ---------------------------------------------------

Host CurrentHost() {
    WCHAR path[MAX_PATH];
    DWORD length = GetModuleFileNameW(nullptr, path, ARRAYSIZE(path));
    if (!length || length == ARRAYSIZE(path)) return Host::Explorer;
    PCWSTR file = wcsrchr(path, L'\\');
    file = file ? file + 1 : path;
    if (!_wcsicmp(file, L"StartMenuExperienceHost.exe")) return Host::Start;
    if (!_wcsicmp(file, L"ShellExperienceHost.exe")) return Host::ShellExperience;
    if (!_wcsicmp(file, L"ShellHost.exe")) return Host::Shell;
    if (!_wcsicmp(file, L"SearchHost.exe")) return Host::Search;
    return Host::Explorer;
}

void HookExplorer() {
    if (auto f = SystemFunction<DwmSetWindowAttribute_t>(L"dwmapi.dll", "DwmSetWindowAttribute")) {
        WindhawkUtils::SetFunctionHook(f, DwmSetWindowAttribute_Hook,
                                       &DwmSetWindowAttribute_Original);
    }
    WindhawkUtils::SetFunctionHook(SetWindowRgn, SetWindowRgn_Hook, &SetWindowRgn_Original);
}

// Explorer: what's moved back as the mod unloads (`all`), or as its setting is
// turned off.
void RestoreExplorer(bool all) {
    if (all || !g_controlStart) MoveBack(g_search);
    if (all || !g_controlTray) MoveBack(g_notifications);
}

// In Start's or the tray menus' process. Not staying loaded where it's
// turned off.
BOOL InitHost() {
    g_unloading = false;  // in case the mod is reloaded in place
    g_startMenuDllHooked = false;
    LoadMenuSettings();
    if (g_host == Host::Search) {
        if (!g_controlStart) return FALSE;
        WindhawkUtils::SetFunctionHook(SystemParametersInfoW, SystemParametersInfoW_Hook,
                                       &SystemParametersInfoW_Original);
        return TRUE;
    }
    if (g_host == Host::Start) {
        if (!g_controlStart) return FALSE;
        if (auto f = SystemFunction<RoGetActivationFactory_t>(L"api-ms-win-core-winrt-l1-1-0.dll",
                                                              "RoGetActivationFactory")) {
            WindhawkUtils::SetFunctionHook(f, RoGetActivationFactory_Hook,
                                           &RoGetActivationFactory_Original);
        }
        WindhawkUtils::SetFunctionHook(SystemParametersInfoW, SystemParametersInfoW_Hook,
                                       &SystemParametersInfoW_Original);
        WindhawkUtils::SetFunctionHook(SetWindowRgn, SetWindowRgn_Hook, &SetWindowRgn_Original);
        if (!HookStartMenuDllIfLoaded() && !g_startMenuDllHooked) {
            if (auto f = SystemFunction<LoadLibraryExW_t>(L"kernelbase.dll", "LoadLibraryExW")) {
                WindhawkUtils::SetFunctionHook(f, LoadLibraryExW_Hook, &LoadLibraryExW_Original);
            }
        }
        return TRUE;
    }
    if (!g_controlTray) return FALSE;
    WindhawkUtils::SetFunctionHook(SetWindowPos, HostSetWindowPos_Hook, &HostSetWindowPos_Original);
    WindhawkUtils::SetFunctionHook(SetWindowRgn, SetWindowRgn_Hook, &SetWindowRgn_Original);
    WindhawkUtils::SetFunctionHook(CreateWindowExW, CreateWindowExW_Hook,
                                   &CreateWindowExW_Original);
    if (auto f = SystemFunction<CreateWindowInBand_t>(L"user32.dll", "CreateWindowInBand")) {
        WindhawkUtils::SetFunctionHook(f, CreateWindowInBand_Hook, &CreateWindowInBand_Original);
    }
    if (auto f = SystemFunction<CreateWindowInBandEx_t>(L"user32.dll", "CreateWindowInBandEx")) {
        WindhawkUtils::SetFunctionHook(f, CreateWindowInBandEx_Hook,
                                       &CreateWindowInBandEx_Original);
    }
    if (auto f = SystemFunction<RegGetValueW_t>(L"kernelbase.dll", "RegGetValueW")) {
        WindhawkUtils::SetFunctionHook(f, RegGetValueW_Hook, &RegGetValueW_Original);
    }
    return TRUE;
}

void AfterInitHost() {
    if (g_host == Host::Search) {
        TellAnimationsChanged();
        return;
    }
    if (g_host == Host::Start) {
        if (HookStartMenuDllIfLoaded()) Wh_ApplyHookOperations();
        TellAnimationsChanged();
        if (HWND w = StartWindow()) {
            RunFromWindowThread(w, [](void*) { Try(InitStart, L"Start"); }, nullptr);
        }
        return;
    }
    FindTrayMenus();
}

void UninitHost() {
    if (g_host == Host::Search) return;
    if (g_host != Host::Start) {
        ReleaseTrayMenus();
        return;
    }
    if (HWND w = StartWindow()) {
        RunFromWindowThread(w, [](void*) { Try(UninitStart, L"Putting Start back"); }, nullptr);
    }
}

// Once the hooks are out: Start and search read Windows' own animation
// setting again.
void AfterUninitHost() {
    if (g_host == Host::Start || g_host == Host::Search) TellAnimationsChanged();
}

}  // namespace Menus

// =============================================================================
// WINDHAWK ENTRY POINTS
// =============================================================================

BOOL Wh_ModInit() {
    // In Start's or the tray menus' process, only they're moved.
    Menus::g_host = Menus::CurrentHost();
    if (Menus::g_host != Menus::Host::Explorer) return Menus::InitHost();

    LoadSettings();
    Menus::LoadMenuSettings();
    g_managingAutoHide = Wh_GetIntValue(UserValueName(L"managingAutoHide").c_str(), 0);
    g_autoHideBefore = Wh_GetIntValue(UserValueName(L"autoHideBefore").c_str(), 0);
    g_glassStopped = Wh_GetIntValue(UserValueName(L"glassStopped").c_str(), 0) != 0;
    if (g_glassStopped) {
        Wh_Log(L"Liquid Glass is off after an emergency stop; save this mod's settings to turn "
               L"it back on");
    }
    g_shellJobWork = CreateThreadpoolWork(RunShellJob, nullptr, nullptr);

    if (!HookTaskbarDllSymbols()) Wh_Log(L"taskbar.dll hooks failed; height won't change");
    HookTaskbarModules();

    if (HMODULE kb = GetModuleHandle(L"kernelbase.dll")) {
        if (auto p = GetProcAddress(kb, "LoadLibraryExW")) {
            WindhawkUtils::SetFunctionHook((LoadLibraryExW_t)p, LoadLibraryExW_Hook,
                                           &LoadLibraryExW_Original);
        }
    }
    // Window previews.
    if (HMODULE win32u = GetModuleHandle(L"win32u.dll")) {
        if (auto p = GetProcAddress(win32u, "NtUserShowWindow")) {
            WindhawkUtils::SetFunctionHook((ShowWindow_t)p, ShowWindow_Hook, &ShowWindow_Original);
        }
        if (auto p = GetProcAddress(win32u, "NtUserEnableWindow")) {
            WindhawkUtils::SetFunctionHook((EnableWindow_t)p, EnableWindow_Hook,
                                           &EnableWindow_Original);
        }
    }
    WindhawkUtils::SetFunctionHook(MapWindowPoints, MapWindowPoints_Hook,
                                   &MapWindowPoints_Original);
    WindhawkUtils::SetFunctionHook(SetWindowPos, SetWindowPos_Hook, &SetWindowPos_Original);
    Menus::HookExplorer();
    g_dockShown = g_settings.autoHide == AutoHide::On ? 0 : 1;  // starts hidden
    return TRUE;
}

// Applying the height also makes the taskbar update its buttons, which runs
// the hooks that find them.
void Wh_ModAfterInit() {
    if (Menus::g_host != Menus::Host::Explorer) {
        Menus::AfterInitHost();
        return;
    }
    if (g_taskbarHeight > 0) ApplyTaskbarHeight();
    ApplyMagnifyOverWindows();
}

// Runs before the hooks are removed, which the taskbar needs to go back to its
// normal height and icon size.
void Wh_ModBeforeUninit() {
    g_unloading = true;
    if (Menus::g_host != Menus::Host::Explorer) {
        Menus::UninitHost();
        return;
    }
    Menus::RestoreExplorer(true);
    RestoreTaskViews();

    // The elements first, so the taskbar sizes its icons itself below. Then any
    // cancelled async work's callbacks, which the taskbar's thread runs meanwhile.
    if (HWND tb = FindTaskbar()) RunFromWindowThread(tb, [](void*) { ResetAll(); }, nullptr);
    StopHotkeys();
    StopInfoKeys();
    // In case the taskbar's thread couldn't run ResetAll: the capture threads
    // stopped, and the taskbar back in screenshots.
    JoinWorkers();
    if (g_glassActive) SetCaptureExcluded(false);
    for (int i = 0; i < 100 && g_pendingCallbacks > 0; i++) Sleep(20);
    ApplyAutoHide();
    UnregisterClass(kWindowClass, ModuleInstance());

    // Shell jobs first: they end by checking the Recycle Bin.
    for (PTP_WORK* work : {&g_shellJobWork, &g_trashWork}) {
        if (!*work) continue;
        WaitForThreadpoolWorkCallbacks(*work, FALSE);
        CloseThreadpoolWork(*work);
        *work = nullptr;
    }

    // Waits for the tray to take the stock height while the hooks are still in,
    // as it may do so after this message is handled.
    if (g_taskbarHeight > 0) {
        g_taskbarHeight = 0;
        g_size.iconLoadSize = 0;
        g_trayResized = false;
        ApplyTaskbarHeight();
        for (int i = 0; i < 40 && !g_trayResized; i++) Sleep(50);
        Wh_Log(L"Tray %s its height back", g_trayResized ? L"set" : L"didn't set");
    }
}

void Wh_ModUninit() {
    Menus::AfterUninitHost();
}

// Settings are read on the taskbar's thread, where the frame loop and hooks
// read them. Plates are rebuilt on the next frame. Start's and the tray menus'
// processes start over, which takes the mod out of them if it's turned off
// there.
BOOL Wh_ModSettingsChanged(BOOL* reload) {
    if (Menus::g_host != Menus::Host::Explorer) {
        *reload = TRUE;
        return TRUE;
    }
    Menus::LoadMenuSettings();
    Menus::RestoreExplorer(false);

    int oldTaskbarHeight = g_taskbarHeight;
    float oldIconLoadSize = g_size.iconLoadSize;

    // Saving the settings undoes Liquid Glass's emergency stop.
    if (g_glassStopped.exchange(false)) {
        Wh_SetIntValue(UserValueName(L"glassStopped").c_str(), 0);
        Wh_Log(L"Liquid Glass may run again: the settings were saved after an emergency stop");
    }

    HWND tb = FindTaskbar();
    bool ran = tb && RunFromWindowThread(tb, [](void*) {
        Settings old = g_settings;
        LoadSettings();
        RecolorSquircles(old);
        CloseInfoCard();  // what it says may have changed
        g_windowsRoom = {};  // learned again at the new sizes
        for (auto& b : *g_buttons) {  // laid out anew: nothing slides from before
            b.layoutCenter = NAN;
            b.slide = {};
        }
        Try(HideLabel);   // redrawn in the new color
        ForgetLabelFont();  // looked for again, in case it's been installed
        // Liquid Glass starts over, at the new sizes, below.
        g_glassFailed = false;
        g_glassFailures = 0;
        g_glassRetryAt = 0;
        g_captures.clear();
        Try(RemovePlates);
        Try(StopTrash);
        Try([] { RemoveTrayDecor(false); });  // added again as the trays are found
        Try(RemoveStartIcons);
        Try(UpdatePolling);
        g_finderIconSource.reset();  // reloaded at the new size and image
        g_appIconSources.clear();
        SettleIconsAgain();
        Try(ReleaseStillIcons);  // held again below, if still on
        for (auto& b : *g_buttons) {
            if (auto el = b.element.get()) Try([&] { ProcessButton(el); });
        }
        g_row.clear();
        g_rowParent = nullptr;
        MarkPlatesDirty();
        Try(UpdateGlass, L"Liquid Glass");  // on or off, as now set
    }, nullptr);
    if (!ran) LoadSettings();

    // A new height or icon resolution: the taskbar resizes and reloads icons.
    if (g_taskbarHeight != oldTaskbarHeight || g_size.iconLoadSize != oldIconLoadSize) {
        ApplyTaskbarHeight();
    }
    ApplyMagnifyOverWindows();
    return TRUE;
}
