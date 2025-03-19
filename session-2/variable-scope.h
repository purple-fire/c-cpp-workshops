#ifndef VARIABLE_SCOPE_H_
#define VARIABLE_SCOPE_H_
// Prevents the file from being double-included


// This variable is declared "static"
static int size = 5;
// This variable is declared "extern"
extern int state;

// This function declaration is "static"
static void static_func(void);
// These function declarations are "extern"
extern void extern_func(void);
extern void call_static(void);


#endif // VARIABLE_SCOPE_H_