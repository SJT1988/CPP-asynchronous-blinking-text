# CPP-asynchronous-blinking-text
Asynchronous method for displaying the animated line "Press ENTER to continue..." until ENTER is pressed.
This solution is for the Windows 10 OS, presumes a Microsoft C++ compiler and the C++14 libraries.

Potential use-cases:
* application menus
* animated text
* text adventure games

The animation runs indefinitely until the user types the ENTER key. This requires the new asynchronous libraries featured in C++14,
including \<thread\> and \<future\>.


![Code Output](https://github.com/SJT1988/CPP-asynchronous-blinking-text/blob/master/Example.gif)
