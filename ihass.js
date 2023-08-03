
// API for posting login information in hypeledger

const axios = require('axios');
exports.blockchain = async (req, res) => {
  try {
    const response = await axios.post('http://192.168.1.15:7000/newlogin');
    res.status(200).send(response.data);

  } catch (error) {

    console.log(error);

    res.status(500).json({ data: 'Error retrieving images' });

  }

};

//edit app.js

const storelogindata = require('./controller/blockchain/storelogininformation');

app.post('/storelogininformation', storelogindata.blockchain);
