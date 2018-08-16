exports.primeHandler = function(event, context, callback) {
    const addon = require('./node_modules/prime');
    var result = addon.getPrimes(event.range);
    callback(null, result);
    context.succeed(result);
}
