/*
Joris Graaffe, Xavier Heugue. Asteroid-like game
Copyright (C) 2017  Joris Graaffe, Xavier Heugue

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Asteroid.hpp"

/**
* @file Asteroid.cpp
* @author Xavier Heugue
* @brief Implementation de la classe Asteroid
* @version 1.0
* @see Asteroid.hpp
*/

world::Asteroid::Asteroid(int size, Vector2f position, float speed, sf::Vector2f orientation) : _size(size), _speed(speed), _orientation(orientation)
{
}

world::Asteroid::~Asteroid()
{
}

void world::Asteroid::ProcessEvent(sf::Event &e)
{

}

void world::Asteroid::Update(float delta)
{
	// L'asteroid tourne sur lui meme
	_sprite.rotate(ROTATION);
	_sprite.move(_orientation.x * _speed, _orientation.y * _speed);
}

void world::Asteroid::draw(RenderTarget & target, RenderStates states) const
{
}
