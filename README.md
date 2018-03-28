# EventManagement
Event Management in C++

Base classes for an event-driven system written in C++. It includes input managers, event managers, events, and some example
code, so you can enhance if you need.

Here, I am using SDL to take the events, but the system was written decoupled. So, all you need to write a new input manager
(if you do not use SDL) based on your requirements. InputManager class I am providing can be used as an example for this task.
All you need is to change InputManager::handleEvents() method according to the system you are using and provide new event
managers if needed.

Here, you can also find callback management and a better Observer pattern design than the regular examples on the internet.

###### License
It is under the WTFPL (http://www.wtfpl.net/) license. So, you can do whatever you like with the source code. But, it would
be cool if you mention me, and let me know if you use it. 

## Some details about the classes

###### Object

The very base class.

###### Subject

Base template class for the subject in Observer Design Pattern. It was used to develop event managers (KeyboardEventManager,
MouseEVentManager, etc.).

###### InputManager

Example input manager that uses SDL for taking inputs. It contains event managers mentioned above, polls events via SDL, and
lets event managers to notify the callbacks registered. InputManager also provides an interface for callback management.

For more details you can check my blog post: SOON
