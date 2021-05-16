
Debian
====================
This directory contains files used to package quirkturtd/quirkturt-qt
for Debian-based Linux systems. If you compile quirkturtd/quirkturt-qt yourself, there are some useful files here.

## quirkturt: URI support ##


quirkturt-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install quirkturt-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your quirkturt-qt binary to `/usr/bin`
and the `../../share/pixmaps/quirkturt128.png` to `/usr/share/pixmaps`

quirkturt-qt.protocol (KDE)

