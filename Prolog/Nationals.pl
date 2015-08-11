left_right(L,R,[L,R,_,_,_]).
left_right(L,R,[_,L,R,_,_]).
left_right(L,R,[_,_,L,R,_]).
left_right(L,R,[_,_,_,L,R]).

next_to(X,Y,L) :- left_right(X,Y,L).
next_to(X,Y,L) :- left_right(Y,X,L).

%  each house is structured like this 
%   [Color,Nationality,Car,Drink,Pet]
%   S is the list of 5 houses



arrangement(S) :-   S = [[_,norwegian,_,_,_],_,[_,_,_,milk,_],_,_],
	      next_to([_,norwegian,_,_,_],[blue,_,_,_,_],S),
	      member([green,_,_,coffee,_],S),
	      left_right([ivory,_,_,_,_],[green,_,_,_,_],S),
	      member([red,englishman,_,_,_],S),
	      member([_,ukranian,_,tea,_],S),
	      member([yellow,_,masserati,_,_],S),
	      member([_,_,honda,orange_juice,_],S),
	      member([_,japanese,jaguar,_,_],S),
	      member([_,spaniard,_,_,dog],S),
	      next_to([_,_,masserati,_,_],[_,_,_,_,horse],S),
	      member([_,_,porsche,_,snails],S),
	      next_to([_,_,saab,_,_],[_,_,_,_,fox],S),
	      member([_,_,_,_,zebra], S).

goal1(Who) :- arrangement(S), member([_,Who,_,_,zebra], S).