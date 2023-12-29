if [ $# -eq 1 ]; then
	gcc $1;
elif [ $# -eq 2 ]; then
	gcc $1 -o $2;
fi
