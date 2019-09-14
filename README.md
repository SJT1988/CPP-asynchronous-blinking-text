# CPP-asynchronous-blinking-text
Asynchronous method for displaying the animated line "Press ENTER to continue..." until ENTER is pressed.
This solution is for the Windows 10 OS, presumes a Microsoft C++ compiler and the C++14 libraries.

Potential use-cases:
* application menus
* animated text
* text adventure games

The animation runs indefinitely until the user types the ENTER key. This requires the new asynchronous libraries featured in C++14,
including \<thread\> and \<future\>. The benefit of an asynchronous implementation is that you don't have to wait for another process to complete in order to check the status of a return condition. You can set the condition of a loop to be the completion of an asynchronous event (as is done here).

Here is the result of this program:

![Code Output](https://github.com/SJT1988/CPP-asynchronous-blinking-text/blob/master/Example.gif)
