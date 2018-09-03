exports.helloHandler = function(event, context, callback) {
    const addon = require('./node_modules/hello');
    var result = addon.sayName(event.name);
    callback(null, result);
    context.succeed(result);
}
