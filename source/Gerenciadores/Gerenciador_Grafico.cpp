#include "../../include/Gerenciadores/Gerenciador_Grafico.h"

using namespace Gerenciadores;

Gerenciador_Grafico* Gerenciador_Grafico::instancia = NULL;

Gerenciador_Grafico::Gerenciador_Grafico():
	janela(sf::VideoMode(800.0f, 600.0f), "Jogo")
{

}

Gerenciador_Grafico* Gerenciador_Grafico::getInstancia()
{
	if (instancia == NULL)
	{
		instancia = new Gerenciador_Grafico;
	}

	return instancia;
}

void Gerenciador_Grafico::executar()
{
	sf::RectangleShape corpo(sf::Vector2f(50.0f, 50.0f));
	corpo.setFillColor(sf::Color::Blue);
	corpo.setPosition(350.0f, 250.0f);

	while (janela.isOpen())
	{
		sf::Event evento;
		if (janela.pollEvent(evento))
		{
			if (evento.type == sf::Event::Closed)
			{
				janela.close();
			}
		}
		janela.clear();
		janela.draw(corpo);
		janela.display();
	}
}