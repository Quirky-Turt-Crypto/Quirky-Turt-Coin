
Debian
====================
This directory contains files used to package quirkyturtd/quirkyturt-qt
for Debian-based Linux systems. If you compile quirkyturtd/quirkyturt-qt yourself, there are some useful files here.

## quirkyturt: URI support ##


quirkyturt-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install quirkyturt-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your quirkyturt-qt binary to `/usr/bin`
and the `../../share/pixmaps/quirkyturt128.png` to `/usr/share/pixmaps`

quirkyturt-qt.protocol (KDE)

