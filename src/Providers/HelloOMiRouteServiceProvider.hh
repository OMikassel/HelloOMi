<?hh //strict

    namespace HelloOMi\src\Providers;


    use Plenty\Plugin\RouteServiceProvider;
    use Plenty\Plugin\Routing\Router;

    class HelloOMiRouteServiceProvider extends RouteServiceProvider
    {
        public function map(Router $router):void
        {
            $router->get('hello','Controller\ContentController@sayHello');
        }
    }
