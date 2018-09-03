exports.namasteHandler = (req, res) => {
    const addon = require('./namaste');
    var result = addon.sayNamaste(req.body.str);
    res.status(200).send(result)
}
