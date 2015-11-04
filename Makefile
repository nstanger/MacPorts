all:
    /opt/local/bin/rsync --cvs-exclude --exclude php/php-timer --exclude Makefile * /Users/Shared/ports
    cd /opt/local/bin/portindex /Users/Shared/ports
