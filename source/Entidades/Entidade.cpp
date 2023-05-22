#include "../../include/Entidades/Entidade.h"

using namespace Entidades;

Entidade::Entidade(const sf::RectangleShape corpo)
{

}

Entidade::Entidade()
{

}

Entidade::~Entidade()
{

}

const sf::RectangleShape Entidade::getCorpo()
{
	return corpo;
}