#include "../include/kenobet.h"

Kenobet::kenobet () {
/* empty */
}

bool Kenobet::add_number (number_type spot_){

		if (spot_ > 0 && spot_ <= 80 && std::search (m_spot_.begin(), m_spot_.end(), spot_)){
			m_spot_.push_back(spot_);
			return true;
		}

}

cash_type Kenobet::get_wage (void){
	return m_wage;
}

bool Kenobet::set_wage (cash_type wage_){
	if (wage_ > 0){
		m_wage = wage_;
		return true;
	} else {
		return false;
	}

}

void Kenobet::reset ( void ){
	m_wage.clear;
}

size_t Kenobet::size (void) const {
	return sizeof(m_spot_);
}

set_of_numbers_type Kenobet::get_hits(const set_of_numbers_type & hits_ )const {
	
}

set_of_numbers_type  Kenobet::get_spots ( void ) const {

}