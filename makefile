.PHONY: display

all:
	gcc -o story main.c north.c south.c east.c west.c -lm

display:
	@echo "Starting Python HTTP server..."
	cd display && python3 -m http.server 8000 &
	sleep 1
	xdg-open http://localhost:8000 || open http://localhost:8000 || start http://localhost:8000