/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:03:23 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/09 17:18:31 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T const &i)
{
	std::cout << i << std::endl;
}

int main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	::iter(array, 5, print);
	std::string array2[5] = {"Pb", "Na", "Cl", "C", "F"};
	::iter(array2, 5, print);
	return 0;
}
