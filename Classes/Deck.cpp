#include "Deck.h"
#include <cstdlib>

Deck::Deck()
{
    topCard = -1;
    for (SuitType s = HEARTS; s <= SPADES; s = static_cast<SuitType>(s+1))
    {
        for (FaceType f = JACK; f <= KING; f = static_cast<FaceType>(f+1)) {
            Card c;
            c.suit = s;
            c.face = f;
            c.rank = 10;
            AddCard(c);
            //cards[topCard] = c;
            //topCard++;
        }
        for (int i = 1; i <= 10; i++)
        {
            Card c;
            c.suit = s;
            c.face = NUMERAL;
            c.rank = i;
            AddCard(c);
            // cards[topCard] = c;
            // topCard++;
        }
    }
}

void Deck::Shuffle()
{
    srand(time(0));
    for (int i = 0; i <= topCard; i++)
    {
        int randIndex = rand() % NumCards() ;
        Card temp = cards[i];
        cards[i] = cards[randIndex];
        cards[randIndex] = temp;
    }
}

int Deck::NumCards() const
{
    return topCard + 1;
}

Card Deck::DrawTopCard()
{
    Card c = cards[topCard];
    topCard--;
    return c;
}

Card Deck::GetCard(int i)
{
    return cards[i];
}

void Deck::AddCard(Card card)
{
    topCard++;
    cards[topCard] = card;
}
