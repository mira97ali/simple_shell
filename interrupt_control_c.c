#include "main.h"

/**
 * interrupt_control_c - Block closing the shell using Ctrl+C.
 * @_signal: Signal received when interrupting user key press.
 * Author: Amira.
 **/
void interrupt_control_c(int _signal)
{
	(void) _signal;
	write(1, "\n" PROMPT, _strlen("\n" PROMPT));
}
