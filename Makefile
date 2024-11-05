convert: convert.c messages.c messages.h check_inputs.c check_inputs.h conversions.h conversions.c
	gcc -o convert convert.c messages.c check_inputs.c conversions.c