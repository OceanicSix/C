#include <iostream>
#include <string>

using namespace std;

#include "class_example/book.h"

#include"str/str.h"
#include "cctype"

#include "vect/Vect.h"

#include "input/input.h"

#include "iter/iter.h"

#include "ary/ary.h"

#include "operator/operator.h"

#include "control_structure/control.h"
#include "exception/exception.h"

#include "function/function.h"
#include "class_example/book_derived.h"
//Constructor

//int main() {
//    book book1;
//    std::cout << "The number of book is "<<book1.get_no() << std::endl;
//    std::cout << "The price of book is "<<book1.get_price() << std::endl;
////    book book2(20,40);
////    std::cout << "The number of book is "<<book2.get_no() << std::endl;
////    std::cout << "The price of book is "<<book2.get_price() << std::endl;
//    return 0;
//}


// string
//int main(){
////    int a,b;
////    cin>>a>>b;
////    cout<<a<<" "<<b;
////    system("pause");
////    string a;
////    while(getline(cin,a)) {
////        cout << a << endl;
////    }
////    system("pause");
//12
//dd
//}

int main() {

cout<<print_arr("ab","cd","ef");
}




//--------------------------------------first index----------------------------
//#include <eosiolib/eosio.hpp>
//
//using namespace eosio;
//
//class [[eosio::contract("addressbook")]] addressbook : public eosio::contract {
//
//public:
//  using contract::contract;
//
//  addressbook(name receiver, name code,  datastream<const char*> ds): contract(receiver, code, ds) {}
//
//  [[eosio::action]]
//  void upsert(name user, std::string first_name, std::string last_name, std::string street, std::string city, std::string state) {
//    require_auth( user );
//    address_index addresses(_code, _code.value);
//    auto iterator = addresses.find(user.value);
//    if( iterator == addresses.end() )
//    {
//      addresses.emplace(user, [&]( auto& row ) {
//       row.key = user;
//       row.first_name = first_name;
//       row.last_name = last_name;
//       row.street = street;
//       row.city = city;
//       row.state = state;
//      });
//    }
//    else {
//      std::string changes;
//      addresses.modify(iterator, user, [&]( auto& row ) {
//        row.key = user;
//        row.first_name = first_name;
//        row.last_name = last_name;
//        row.street = street;
//        row.city = city;
//        row.state = state;
//      });
//    }
//  }
//
//  [[eosio::action]]
//  void erase(name user) {
//    require_auth(user);
//
//    address_index addresses(_self, _code.value);
//
//    auto iterator = addresses.find(user.value);
//    eosio_assert(iterator != addresses.end(), "Record does not exist");
//    addresses.erase(iterator);
//  }
//
//private:
//  struct [[eosio::table]] person {
//    name key;
//    std::string first_name;
//    std::string last_name;
//    std::string street;
//    std::string city;
//    std::string state;
//    uint64_t primary_key() const { return key.value; }
//  };
//  typedef eosio::multi_index<"people"_n, person> address_index;
//
//};
//
//EOSIO_DISPATCH( addressbook, (upsert)(erase))

//-----------------------------------secondary index--------------------------
//#include <eosiolib/eosio.hpp>
//
//using namespace eosio;
//
//class [[eosio::contract("addressbook")]] addressbook : public eosio::contract {
//
//public:
//  using contract::contract;
//
//  addressbook(name receiver, name code,  datastream<const char*> ds): contract(receiver, code, ds) {}
//
//  [[eosio::action]]
//  void upsert(name user, std::string first_name, std::string last_name, std::string street, std::string city, std::string state) {
//    require_auth( user );
//    address_index addresses(_code, _code.value);
//    auto iterator = addresses.find(user.value);
//    if( iterator == addresses.end() )
//    {
//      addresses.emplace(user, [&]( auto& row ) {
//       row.key = user;
//       row.first_name = first_name;
//       row.last_name = last_name;
//       row.street = street;
//       row.city = city;
//       row.state = state;
//      });
//    }
//    else {
//      std::string changes;
//      addresses.modify(iterator, user, [&]( auto& row ) {
//        row.key = user;
//        row.first_name = first_name;
//        row.last_name = last_name;
//        row.street = street;
//        row.city = city;
//        row.state = state;
//      });
//    }
//  }
//
//  [[eosio::action]]
//  void erase(name user) {
//    require_auth(user);
//
//    address_index addresses(_self, _code.value);
//
//    auto iterator = addresses.find(user.value);
//    eosio_assert(iterator != addresses.end(), "Record does not exist");
//    addresses.erase(iterator);
//  }
//
//private:
//  struct [[eosio::table]] person {
//    name key;
//    std::string first_name;
//    std::string last_name;
//    std::string street;
//    std::string city;
//    std::string state;
//    uint64_t primary_key() const { return key.value; }
//  };
//  typedef eosio::multi_index<"people"_n, person> address_index;
//
//};
//
//EOSIO_DISPATCH( addressbook, (upsert)(erase))
