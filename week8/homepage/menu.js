$(document).ready(function(){
    $('#nav-menu').click(function(){

			if( ( $('ul.nav-list').hasClass('open') ) ) {

				$('ul.nav-list').removeClass('open');

			}else{

				$('ul.nav-list').addClass('open');

			}

    });
});