all:
	/opt/local/bin/rsync --verbose --recursive --cvs-exclude --exclude php/php-timer --exclude graphics/PlantUML --exclude Makefile * /Users/Shared/ports
	/opt/local/bin/portindex /Users/Shared/ports
