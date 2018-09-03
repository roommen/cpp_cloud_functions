exports.primegenHandler = (req, res) => {
    const addon = require('./prime');
    var result = addon.genPrimes(req.body.range);
    res.status(200).send(result)
}
