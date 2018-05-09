let conn = require('../js/global/connection.js');
let controlService = require('../js/global/controlServiceRequest.js');
var testSetup = require('./test-setup.test.js');
var chai = require('chai');
var supertest = require('supertest');
var cheerio = require('cheerio');

describe("Profiles", function(){
  var request = supertest('http://localhost:8080');

  it('should render profiles page', function(done){
    var should = require('should');
    request.get('/profiles')
    .expect(200).end(function(err, res){
      done();
    });
  });

});