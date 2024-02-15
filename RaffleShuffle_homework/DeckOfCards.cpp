#include "DeckOfCards.h"
#include <ctime>
#include <iostream>

DeckOfCards::DeckOfCards()
{
    // initialize suit array
    static std::string suit[4] =
    { "Hearts", "Diamonds", "Clubs", "Spades" };

    // initialize face array
    static std::string type[13] =
    { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
    "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // set values for deck of 52 Cards
    for (int i = 0; i < 52; i++)
    {
        deck[i]->type = type[i % 13];
        deck[i]->suit = suit[i / 13];
    } // end for

    srand(time(0)); // seed random number generator
}



Card* raffleShuffle(Card* deck[52])
{
	Card leftDeck[26];
	Card rightDeck[26];

 //   //������������ ������� � 2 ������� �� 26 �����:
    for (int i = 0; i < 52; i++) {
        if (i < 26) {
            deck[i]->type = leftDeck[i].type;
            deck[i]->suit = leftDeck[i].suit;
        }
        else  
        { 
            deck[i]->type = rightDeck[i].type;
            deck[i]->suit = rightDeck[i].suit;
        }

    }

    for (int i = 0; i < 52; i++) {
        if (i == 0 || i % 2 == 0) {
            rightDeck[i].type = deck[i]->type;
            rightDeck[i].suit = deck[i]->suit;
        }
        else 
        {
            leftDeck[i].type = deck[i]->type;
            leftDeck[i].suit = deck[i]->suit;
        }
    }

    //return deck[52];
    return new Card;
}

void DeckOfCards::displayDeck() const
{
    for (int i = 0; i < 52; i++)
        std::cout << deck[i]->type << " of "
        << deck[i]->suit << std::endl;
        //<< ((i + 1) % 2 ? '\t' : '\n'); //���� �� � �� ��� ���
}

DeckOfCards::~DeckOfCards()
{
}

