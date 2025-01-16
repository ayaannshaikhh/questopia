# Questopia
## To-Do
- actually code it...

## Python HTTP Server
Currently looking into the Python HTTP server to display values of 
the terminal into a local browser using HTML5/CSS.
- `cd display`
- `python3 -m http.server 8000`
### Killing the Server
- `lsof -i :8000`
  - Locate the PID
- `kill -9 <PID>`
