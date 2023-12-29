int plus(int, int);
int minus(int , int);
int star(int, int);
int slash(int, int);
int percent(int, int);

double add(double, double);
double subtract(double, double);
double product(double, double);
double division(double, double);

// int (*operations[5]) (int, int);
// double (*s_operations[4]) (double, double);
// const int operations_length;
// const int s_operations_length;

int (*operations[5]) (int, int) = { plus, minus, star, slash, percent };
double (*s_operations[4]) (double, double) = { add, subtract, product, division };
const int operations_length = 5; //sizeof(operations) / sizeof(*operations);
const int s_operations_length = 4; //sizeof(s_operations) / sizeof(*s_operations);