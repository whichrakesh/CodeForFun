var page = require('webpage').create();
page.open('http://facebook.com', function() {
  page.render('example.png');
  phantom.exit();
});
