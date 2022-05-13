/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:21:39 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/12 08:21:48 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			std::cout.put(std::toupper(argv[i][j++]));
		i++;
	}
	std::cout << '\n';
}
