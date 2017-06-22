
#include "wishlist.hpp"
#include "messages.hpp"

/*****************************************************************************/


Wishlist::Wishlist(std::string _owner)
	: Owner(_owner)
{}

Wishlist::Wishlist(std::string _owner, std::set<Wish> _wishes)
	: Owner(_owner), Wishes(_wishes)
{}


/*****************************************************************************/