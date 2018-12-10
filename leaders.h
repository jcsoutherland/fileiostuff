#ifndef leaders_h
#define leaders_h

typedef struct leaders leaders;

	typedef int (* score_function)(leaders *);

	typedef char * (* name_function)(leaders *);

	struct leaders{
		score_function score;
		name_function name;
	};

#endif 