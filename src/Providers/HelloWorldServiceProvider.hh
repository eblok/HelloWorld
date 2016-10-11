<?hh //strict

        namespace HelloWorld\Providers;


        use Plenty\Plugin\ServiceProvider;

        class HelloWorldServiceProvider extends ServiceProvider
        {

            /**
             * Register the service provider.
             */

            public function register():void
            {
              $this->getApplication()->register(HelloWorldRouteServiceProvider::class);
            }
            public function map(Router $router):void
            {
                $router->get('hello','HelloWorld\Controllers\ContentController@sayHello');
            }
        }
