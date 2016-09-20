<?hh //strict

    namespace HelloOMi\Providers;


    use Plenty\Plugin\ServiceProvider;

    class HelloOMiServiceProvider extends ServiceProvider
    {

        /**
         * Register the service provider.
         */

        public function register():void
        {
            $this->getApplication()->register(HelloOMiRouteServiceProvider::class);
        }
    }
