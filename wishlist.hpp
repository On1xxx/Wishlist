
#ifndef _WISHLIST_HPP_
#define _WISHLIST_HPP_

/*****************************************************************************/

#include <vector>
#include <string>
#include <set>

#include <functional>

/*****************************************************************************/

typedef
std::pair< std::string, int >
Wish;

/*****************************************************************************/


class Wishlist
{

	/*-----------------------------------------------------------------*/

public:

	/*-----------------------------------------------------------------*/

	Wishlist(std::string _owner);
	Wishlist(std::string _owner, std::set<Wish> _wishes);
	//Wishlist(std::string _owner, std::set<Wish> & _wishes);

	std::string & Wishlist::getOwner();
	int Wishlist::getWishesCount();
	int Wishlist::getWishPriority(std::string _s);


	/*-----------------------------------------------------------------*/

private:

	/*-----------------------------------------------------------------*/
	std::string Owner;
	std::vector<Wish> Wishes;

	/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

inline 
std::string & Wishlist::getOwner()
{
	return Owner;
}

inline 
int Wishlist::getWishesCount()
{
	return Wishes.size();
}

inline
int Wishlist::getWishPriority(std::string _s)
{
	return Wishes[_s.first];
}
/*****************************************************************************/


#endif // _WISHLIST_HPP_