//stages of compiling .c file:
//	preprocessor (#...) //all includes or something writes in that file
//	program (int main...) //compiling all program with written paths to included functions
//	linker //links all .dll's that has included functions, with compiled file.
//
//preprocessor manager is all that starts with "#" sign:
//	#define //for macroses or preprocess identifier
//	#undef //cancel define
//	#ifdef //"if defined"
//	#ifndef //"if not defined"
//	#include //includes all text from file
//	#if //just "if" for preprocessor.
//	#else //just like "if", "else" for preprocessor.
//	#endif //end if statements for preprocessor.
//	#elif //like "else if", for preprocessor.
//	#line //changes number of next to this line.
//	#error //sets text about error for translation.
//	#pragma //defines actions for chosen compilers (gcc, clang or smth)
//	# //empty preprocess action
//

#include <stdio.h> //stdio.h for printf, scanf, etc functions.
//inserts "header" (.h files) file to this.
//header files searches in standard system's directories.
//
//standard includable files:
//	assert.h //for diagnostics
//	complex.h //for complex numbers
//	ctype.h //for transformations and checking symbols
//	errno.h //for error checks
//	fenv.h //for environment access that manages operations with float numbers
//	float.h //for work with float numbers
//	inttypes.h //for long numbers
//	iso646.h //has defines that expands logical operations
//	limits.h //has exect limits for digital types
//	locale.h //for localization
//	math.h //for work with mathmatic expressions
//	setjmp.h // ?? for defining opportunities of unlocal transitions ??
//	signal.h //for handling excepted situations
//	stdalign.h // for aligning types
//	stdarg.h //for variable count of arguments
//	stdatomic.h //for atomic operations, in defined different threads
//	stdbool.h //for work with _Bool type
//	stddef.h //for addtitional definables
//	stdint.h //for work with integer numbers
//	stdio.h //for work with IO instruments
//	stdlib.h //for most used defines and prototypes
//	stdnoreturn.h //has macros "noreturn"
//	string.h //for work with strings
//	tgmath.h //defines complex.h, math.h, and additional opportunities for mathmatics
//	threads.h //for work with threads
//	time.h //for work with date and time
//	uchar.h //for work with UNICODE symbols
//	wchar.h //for work with symbols
//	wctype.h //for addtitional opportunities for work with symbols


//also header files searches in same directory as main file.
//#include "lib.c" //"" for files in same directory.
#include "lib.h" //for msvc compiler's standards

int main(int argc, char** argv) {
	printf("num from lib.c: %d", num);
	return 0;
}
