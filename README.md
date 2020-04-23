# .NET-Managé-NonManagé
:fr: Implémentation de l'interopérabilité de code managé :left_right_arrow: non managé en c#

:uk: Example of how to call unmanaged code in managed code using c#
* Creation of a DLL with a function that calls stdlib _free(void*)_ to deallocate blocks of memory that were allocated in non-managed code using _malloc_ or _calloc_
