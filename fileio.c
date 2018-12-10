#include <stdio.h>
#include "leaders.h"
#include <stdlib.h>
#include "linkedlist.h"
LinkedList * lead;

leaders * MakeLeader(int score, char * name){
	leaders * l = malloc(sizeof(leaders));
	l->score = score;
	l->name = name;
	return l;
}



void ReadFile(){
	FILE * f = fopen("leaderboard.txt", "r");
    if(f == NULL)
    {
    	//error
    }
    
    for(int i = 0; i < 3; i++){
    	char o[2];
    	fget(o, 2, f);
    	int s = atoi(o[0]);
    	leaders l = MakeLeader(s, o);
    	add(l);
    }
}

void add(leaders * l){
	lead->value = l;
	lead->next;
}

void WriteFile(){
	FILE * f = fopenf("leaderboard.txt", "w");
	int i = 0;
	while(i < 3){
		fprintf(f, "%d %s", lead->value->score lead->value->name);
		leaders->next;
		i++;
	}
}

int ChecksLeader(leaders * l){
	while(lead->next != NULL){
		if(l->score >= lead->value){
			linkedlist * s = lead;
			lead->value = l;
			lead->next = s;
			return 1;
		}
		if(lead->next == NULL)
		{
			return 0;
		}
		lead->next;

	}
}
