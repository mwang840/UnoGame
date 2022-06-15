#ifndef UNOPLAYER_HPP_
#define UNOPLAYER_HPP_
#include <iostream>
#include <time.h>
#include "UnoDeck.hpp"

using namespace std;


class UnoPlayer {
	friend class UnoDeck;
	UnoPlayer *prev;
	UnoPlayer *next;
	UnoPlayer *hand;
	UnoPlayer *last;
	UnoPlayer *tail;
	string playerName;
public:
	UnoPlayer(string playerName);
	virtual ~UnoPlayer();
};

#endif /* UNOPLAYER_HPP_ */