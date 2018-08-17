exports.averageHandler = function(event, context, callback) {
    const addon = require('./node_modules/avg');
    var result = addon.getAverage(event.op1, event.op2, event.op3, event.op4);
    callback(null, result);
    context.succeed(result);
 }
