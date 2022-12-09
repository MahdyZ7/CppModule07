/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:34:19 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/10 01:09:34 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
// Array<int> 

int main(void)
{
	try{
		Array<int> a(-5);
	}
		catch (const char *e){
		std::cerr << e << '\n';
	}
	std::cout << std::endl;
	try{
		Array<int> b(5);
		b[0] = 1;
		b[1] = 2;
		b[2] = 3;
		b[3] = 4;
		b[4] = 5;
		std::cout << b << std::endl;
		b[-5] = 6;
	}
	catch (const char *e){
		std::cerr << e << '\n';
	}
	std::cout << std::endl;
	try{
		Array<std::string> c;
		std::cout << c.size() << std::endl;
		std::cout << c[0] << std::endl;
	}
	catch (const char *e){
		std::cerr << e << '\n';
	}
	std::cout << std::endl;
	try{
		Array<std::string> c(4);
		Array<std::string> d(c);
		Array<std::string> e;
		e = d;
		d[0] = "The";
		d[1] = "Beckoning";
		d[2] = "of";
		d[3] = "Lovely";
		std::cout << d << std::endl;
	}
	catch (const char *e){
		std::cerr << e << '\n';
	}
	
}