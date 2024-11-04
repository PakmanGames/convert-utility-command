convert: convert.c messages.c messages.h check_inputs.c check_inputs.h
	gcc -o convert convert.c messages.c check_inputs.c