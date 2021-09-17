# x2-name-fixed-f21

This example is a fixed version of the repo named x1-name-leaky.  A destructor,
copy constructor, and a copy assignment operator have been added that
handle the allocated memory correctly.  With the *rule of three* now followed,
*valgrind* now reports no errors.
