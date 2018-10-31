
Debian
====================
This directory contains files used to package ioxd/iox-qt
for Debian-based Linux systems. If you compile ioxd/iox-qt yourself, there are some useful files here.

## iox: URI support ##


iox-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install iox-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ioxqt binary to `/usr/bin`
and the `../../share/pixmaps/iox128.png` to `/usr/share/pixmaps`

iox-qt.protocol (KDE)

