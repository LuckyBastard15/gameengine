#include"Game.hh"
#include"Constants.hh"
#include"Rectangle.hh"
                                          // v , h      
Rectangle* rectangle{new Rectangle(100, 30, 344, 100, sf::Color::Cyan)};
Rectangle* rectangle1{new Rectangle(286, 30, 256, 130, sf::Color::Cyan)};
Rectangle* rectangle2{new Rectangle(395, 30, 197, 160, sf::Color::Cyan)};
Rectangle* rectangle3{new Rectangle(494, 30, 147, 190, sf::Color::Cyan)};
Rectangle* rectangle4{new Rectangle(494, 30, 147, 210, sf::Color::Cyan)};//
Rectangle* rectangle5{new Rectangle(494, 30, 147, 230, sf::Color::Cyan)};//
Rectangle* rectangle6{new Rectangle(494, 30, 147, 260, sf::Color::Cyan)};//
Rectangle* rectangle7{new Rectangle(592, 30, 98, 290, sf::Color::Cyan)};
Rectangle* rectangle8{new Rectangle(592, 30, 98, 320, sf::Color::Cyan)};//
Rectangle* rectangle9{new Rectangle(592, 30, 98, 350, sf::Color::Cyan)};//
Rectangle* rectangle10{new Rectangle(592, 30, 98, 380, sf::Color::Cyan)};//
Rectangle* rectangle11{new Rectangle(592, 30, 98, 410, sf::Color::Cyan)};//
Rectangle* rectangle12{new Rectangle(592, 30, 98, 440, sf::Color::Cyan)};//
Rectangle* rectangle13{new Rectangle(592, 30, 98, 470, sf::Color::Cyan)};//
Rectangle* rectangle14{new Rectangle(592, 30, 98, 500, sf::Color::Cyan)};//
Rectangle* rectangle15{new Rectangle(592, 30, 98, 530, sf::Color::Cyan)};//
Rectangle* rectangle16{new Rectangle(592, 30, 98, 560, sf::Color::Cyan)};//
Rectangle* rectangle17{new Rectangle(158, 30, 98, 590, sf::Color::Cyan)};
Rectangle* rectangle18{new Rectangle(198, 30, 295, 590, sf::Color::Cyan)};
Rectangle* rectangle19{new Rectangle(155, 30, 535, 590, sf::Color::Cyan)};
Rectangle* rectangle20{new Rectangle(158, 30, 147, 620, sf::Color::Cyan)};
Rectangle* rectangle21{new Rectangle(198, 30, 344, 620, sf::Color::Cyan)};
Rectangle* rectangle22{new Rectangle(155, 30, 592, 620, sf::Color::Cyan)};
Rectangle* rectangle23{new Rectangle(158, 30, 197, 650, sf::Color::Cyan)};
Rectangle* rectangle24{new Rectangle(198, 30, 395, 650, sf::Color::Cyan)};
Rectangle* rectangle25{new Rectangle(155, 30, 641, 650, sf::Color::Cyan)};
//eye1
Rectangle* rectangle26{new Rectangle(100, 30, 197, 260, sf::Color::White)};
Rectangle* rectangle27{new Rectangle(160, 30, 167, 290, sf::Color::White)};
Rectangle* rectangle28{new Rectangle(160, 30, 167, 320, sf::Color::White)};
Rectangle* rectangle29{new Rectangle(160, 30, 167, 350, sf::Color::White)};
Rectangle* rectangle30{new Rectangle(160, 30, 167, 380, sf::Color::White)};
Rectangle* rectangle31{new Rectangle(100, 30, 197, 410, sf::Color::White)};
Rectangle* rectangle32{new Rectangle(70, 30, 167, 290, sf::Color::Red)};
Rectangle* rectangle33{new Rectangle(70, 30, 167, 320, sf::Color::Red)};
Rectangle* rectangle34{new Rectangle(70, 30, 167, 350, sf::Color::Red)};
Rectangle* rectangle35{new Rectangle(30, 30, 188, 320, sf::Color::Black)};
//eye2
Rectangle* rectangle36{new Rectangle(100, 30, 397, 260, sf::Color::White)};
Rectangle* rectangle37{new Rectangle(160, 30, 367, 290, sf::Color::White)};
Rectangle* rectangle38{new Rectangle(160, 30, 367, 320, sf::Color::White)};
Rectangle* rectangle39{new Rectangle(160, 30, 367, 350, sf::Color::White)};
Rectangle* rectangle40{new Rectangle(160, 30, 367, 380, sf::Color::White)};
Rectangle* rectangle41{new Rectangle(100, 30, 397, 410, sf::Color::White)};
Rectangle* rectangle42{new Rectangle(70, 30, 367, 290, sf::Color::Red)};
Rectangle* rectangle43{new Rectangle(70, 30, 367, 320, sf::Color::Red)};
Rectangle* rectangle44{new Rectangle(70, 30, 367, 350, sf::Color::Red)};
Rectangle* rectangle45{new Rectangle(30, 30, 388, 320, sf::Color::Black)};


Game::Game()
{
    window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH , WINDOW_HEIGHT), GAME_NAME);
    event = new sf::Event();
}

void Game::Start()
{

}

Game::~Game()
{
    
}

void Game::Initialize()
{  
    Start();
    MainLoop();
}

void Game::Update()

{     
 
}

void Game::MainLoop()
{
    while (window->isOpen())
    {
        while (window->pollEvent(*event))
        {
            if(event->type == sf::Event::Closed)
            {  
                window->close();
            }
        }
        Input();
        Update();
        Render();
    }
    Destroy();
}

void Game::Render()

{  
    window->clear(sf::Color::Black);
    Draw();
    window->display();
}

void Game::Draw()
{
    window->draw(*rectangle->GetShape());
    window->draw(*rectangle1->GetShape());
    window->draw(*rectangle2->GetShape());
    window->draw(*rectangle3->GetShape());
    window->draw(*rectangle4->GetShape());
    window->draw(*rectangle5->GetShape());
    window->draw(*rectangle6->GetShape());
    window->draw(*rectangle7->GetShape());
    window->draw(*rectangle8->GetShape());
    window->draw(*rectangle9->GetShape());
    window->draw(*rectangle10->GetShape());
    window->draw(*rectangle11->GetShape());
    window->draw(*rectangle12->GetShape());
    window->draw(*rectangle13->GetShape());
    window->draw(*rectangle14->GetShape());
    window->draw(*rectangle15->GetShape());
    window->draw(*rectangle16->GetShape());
    window->draw(*rectangle17->GetShape());
    window->draw(*rectangle18->GetShape());
    window->draw(*rectangle19->GetShape());
    window->draw(*rectangle20->GetShape());
    window->draw(*rectangle21->GetShape());
    window->draw(*rectangle22->GetShape());
    window->draw(*rectangle23->GetShape());
    window->draw(*rectangle24->GetShape());
    window->draw(*rectangle25->GetShape());
    window->draw(*rectangle26->GetShape());
    window->draw(*rectangle27->GetShape());
    window->draw(*rectangle28->GetShape());
    window->draw(*rectangle29->GetShape());
    window->draw(*rectangle30->GetShape());
    window->draw(*rectangle31->GetShape());
    window->draw(*rectangle32->GetShape());
    window->draw(*rectangle33->GetShape());
    window->draw(*rectangle34->GetShape());
    window->draw(*rectangle35->GetShape());
    window->draw(*rectangle36->GetShape());
    window->draw(*rectangle37->GetShape());
    window->draw(*rectangle38->GetShape());
    window->draw(*rectangle39->GetShape());
    window->draw(*rectangle40->GetShape());
    window->draw(*rectangle41->GetShape());
    window->draw(*rectangle42->GetShape());
    window->draw(*rectangle43->GetShape());
    window->draw(*rectangle44->GetShape());
    window->draw(*rectangle45->GetShape());
}

void Game::Input()

{  

}

void Game::Destroy()
{   
    delete window;
    delete event;
}