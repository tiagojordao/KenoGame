#include "../include/kenobet.h"


bool KenoBet::add_number (number_type spot_){

		if (spot_ > 0 && spot_ <= 80 && std::find (m_spots.begin(), m_spots.end(), spot_) == m_spots.end()){
			m_spots.push_back(spot_);
			return true;
		}

}

cash_type KenoBet::get_wage (void) const{
	return m_wage;
}

bool KenoBet::set_wage (cash_type wage_){
	if (wage_ > 0){
		m_wage = wage_;
		return true;
	} else {
		return false;
	}

}

void KenoBet::reset ( void ){
	m_spots.clear();
}

size_t KenoBet::size (void) const {
	return sizeof(m_spots);
}

set_of_numbers_type KenoBet::get_hits(const set_of_numbers_type & hits_ )const {

	set_of_numbers_type hit;

	for (auto i(0u) ; i < sizeof(m_spots) ; ++i){
		for (auto j(0u); j < 20 ; ++j){
			if (m_spots [i] == hits_[j]){
				hit.push_back(m_spots[i]);
			}
		}
	}
}

set_of_numbers_type  KenoBet::get_spots ( void ) const {
	return m_spots;
}