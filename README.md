# CPP-asynchronous-blinking-text
Asynchronous method for displaying the animated line "Press ENTER to continue..." until ENTER is pressed. Requires Windows OS, presumes Microsoft C++ compiler.

Potential use-cases:
* application menus
* animated text
* text adventure games

The animation runs indefinitely until the user types the ENTER key. This requires the new asynchronous libraries featured in C++14, including <thread> and <future>.
